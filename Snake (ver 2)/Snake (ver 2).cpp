#include <iostream>
#include <conio.h>  //KBHIT && GETCH
#include <stdlib.h> //RANDOM && SYSTEM (CLS)
#include <time.h> //SRANDOM
using namespace std;
bool kiyan, stonebool = true, stoneif = true;
int width = 40;
int height = 24;
int x, y, foodX, foodY, score, n = 1, m = 0;
int makanX[100], makanY[100];
int nmakan = 1;
char dir, lastdir;
int stoneX[20]={2,3,4,2,3,4,20,20,19,19,22,13,2,2,2,2,3,4,5,6};
int stoneY[20]={7,7,7,8,8,8,13,14,13,14,16,4,30,31,32,33,34,34,34,34};
void One()
{
	kiyan = false;
	x = width / 2;
	y = height / 2;
	srand(time(0));
    foodX = rand() % 33 + 4;
    foodY = rand() % 16 + 4;
	score = 0;
}
//refresh safhe
void Two()
{
	system("cls");
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			if (i == y && j == x) {
				cout << "O";
				continue;
			}
			bool print = true;
			for (int k = 0; k < nmakan; k++)
			{
				if (makanX[k] == j && makanY[k] == i) {
					cout << "o";
					print = false;
					continue;
				}
			}
			if (!print)
				continue;
			if (i == foodY && j == foodX) {
				cout << "$";
				continue;
			}
			if (score < 50) {
				if (i == 0) {
					cout << "8";
					continue;
				}
				if (j == 0) {
					cout << "8";
					continue;
				}
				if (j == width - 1) {
					cout << "8";
					continue;
				}
				if (i == height - 1) {
					cout << "8";
					continue;
				}
			}
			if (score >= 50) {
				if (i == 0) {
					cout << "X";
					continue;
				}
				if (j == 0) {
					cout << "X";
					continue;
				}
				if (j == width - 1) {
					cout << "X";
					continue;
				}
				if (i == height - 1) {
					cout << "X";
					continue;
				}
			}
			if (score >= 50 && score < 150) {
				bool print = true;
				for (int s = 0; s < 10; s++) {
					if (stoneX[s] == i && stoneY[s] == j) {
						cout << "X";
						print = false;
					}
				}
				if (!print)
					continue;
			}
			if (score >= 150) {
				bool print = true;
				for (int s = 0; s < 20; s++) {
					if (stoneX[s] == i && stoneY[s] == j) {
						cout << "X";
						print = false;
					}
				}
				if (!print)
					continue;
			}
			if (print) {
				cout << " ";
			}
		}
		cout << endl;
	}
	cout << endl;
	cout << "Score :" << score << endl;
	cout << "level :" << n << endl;
}
void Three()
{
	//kbhit = tabdil char be code aski
	if (kbhit()){
		lastdir = dir;
		dir = getch();
		if(dir!='a' && dir!='s' && dir!='d' && dir!='w')
            dir =lastdir;
	}
	if (lastdir == 'w' && dir == 's')
		dir = 'w';
	if (lastdir == 's' && dir == 'w')
		dir = 's';
	if (lastdir == 'a' && dir == 'd')
		dir = 'a';
	if (lastdir == 'd' && dir == 'a')
		dir = 'd';
	switch (dir){
	case 'a':
	case 'A': {
		x--;
		break;
	}
	case 'd':
	case 'D': {
		x++;
		break;
	}
	case 'w':
	case 'W': {
		y--;
		break;
	}
	case 's':
	case 'S': {
		y++;
		break;
	}
	}
}
//makan avalie Snake
void Four()
{
	if (score >= 50 && score < 150)
		for (int i = 0; i < 10; i++)
			if (stoneX[i] == y && stoneY[i] == x)
				kiyan = true;
	if (score >= 150)
		for (int i = 0; i < 20; i++)
			if (stoneX[i] == y && stoneY[i] == x)
				kiyan = true;
	int firstX = makanX[0];
	int firstY = makanY[0];
	int secondX, secondY;
	makanX[0] = x;
	makanY[0] = y;
	//baraye gharar gereftan o posht 0
	for (int i = 1; i < nmakan; i++)
	{
		secondX = makanX[i];
		secondY = makanY[i];
		makanX[i] = firstX;
		makanY[i] = firstY;
		firstX = secondX;
		firstY = secondY;
	}
	if (score < 50) {
		if (x > width - 1)
			x = 0;
		if (y > height - 1)
			y = 0;
		if (x < 0)
			x = width - 1;
		if (y < 0)
			y = height - 1;
	}
	if (score >= 50)
		if (x >= width - 1 || x <1 || y >= height - 1 || y < 1)
			kiyan = true;
	for (int i = 1; i < nmakan; i++)
		if (makanX[i] == x && makanY[i] == y)
			kiyan = true;
	if (x == foodX && y == foodY)
	{
		score += 10;
		foodX = rand() % 33 + 4;
		foodY = rand() % 16 + 4;
		for (int i = 0; i < 20; i++) {
			if (foodX == stoneX[i] && foodY == stoneY[i]) {
				foodX = rand() % 33 + 4;
				foodY = rand() % 16 + 4;
			}
		}
		nmakan++;
	}
}
int main()
{
	int a = 0;
	One();

	//level   1
	do
	{
		Two();
		Three();
		Four();
		for (int i = 0; i < 30000000; i++)
			a += 1;
		if (score >= 50) {
			m++;
			cout << "level 2 ( press enter to continue )" << endl;
			cin.ignore();
			n++;
			break;
		}
	} while (!kiyan && score != 50);
		x = width / 2;
	    y = height / 2;
	//level   2
	do
	{
		Two();
		Three();
		Four();
		for (int i = 0; i < 10000000; i++)
			a += 1;
		if (score >= 150) {
			cout << "level 3 ( press enter to continue )" << endl;
			cin.ignore();
			n++;
			break;
		}

	} while (!kiyan && score != 150);
		x = width / 2;
     	y = height / 2;
	//level   3
	do
	{
		Two();
		Three();
		Four();
	} while (!kiyan);
	cout << "game over! ( press enter to continue )" << endl;
	cin.ignore();


	return 0;
}
