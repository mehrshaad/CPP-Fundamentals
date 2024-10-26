#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
bool kiyan;
const int width = 40;
const int height = 24;
int x, y, foodX, foodY, score;
int makanX[100], makanY[100];
int nmakan;
kilograaam dir;
void One()
{
   kiyan = false;
   dir = STOP;
   x = width / 2;
   y = height / 2;
   foodX = rand() % width;
   foodY = rand() % height;
   score = 0;
}
//refresh safhe
void Two()
{
   system("cls");
   for (int i = 0; i < width+2; i++)
       cout << "8";
   cout << endl;

   for (int i = 0; i < height; i++)
   {
       for (int j = 0; j < width; j++)
       {
           if (j == 0)
               cout << "8";
           if (i == y && j == x)
               cout << "O";
           else if (i == foodY && j == foodX)
               cout << "$";
           else
           {
               bool print = false;
               for (int k = 0; k < nmakan; k++)
               {
                   if (makanX[k] == j && makanY[k] == i)
                   {
                       cout << "o";
                       print = true;
                   }
               }
               if (!print)
                   cout << " ";
           }


           if (j == width - 1)
               cout << "8";
       }
       cout << endl;
   }

   for (int i = 0; i < width+2; i++)
       cout << "8";
   cout << endl;
   cout << "Score:" << score << endl;
}
void Three()
{
    //kbhit = tabdil char be code aski
   if (_kbhit())
   {
       switch (_getch())
       {
       case 'a':
            case 'A': {
           dir = LEFT;
           break;
            }
       case 'd':
           case 'D': {
           dir = RIGHT;
           break;
           }
       case 'w':
           case 'W': {
           dir = UP;
           break;
           }
       case 's':
           case 'S': {
           dir = DOWN;
           break;
           }
       case 'x':
           case 'X': {
           kiyan = true;
           break;
           }
       }
   }
}
//makan avalie Snake
void Four()
{
   int firstX = makanX[0];
   int firstY = makanY[0];
   int secondX, secondY;
   makanX[0] = x;
   makanY[0] = y;
   //raye gharar gereftan o posht 0
   for (int i = 1; i < nmakan; i++)
   {
       secondX = makanX[i];
       secondY = makanY[i];
       makanX[i] = firstX;
       makanY[i] = firstY;
       firstX = secondX;
       firstY = secondY;
   }
   switch (dir)
   {
   case LEFT:
       x--;
       break;
   case RIGHT:
       x++;
       break;
   case UP:
       y--;
       break;
   case DOWN:
       y++;
       break;
   default:
       break;
   }
   if (x > width || x < 0 || y > height || y < 0)
   kiyan = true;

   for (int i = 0; i < nmakan; i++)
       if (makanX[i] == x && makanY[i] == y)
           kiyan = true;

   if (x == foodX && y == foodY)
   {
       score += 10;
       foodX= rand() % width;
       foodY = rand() % height;
       nmakan++;
   }
}
int main()
{
   One();
   do
   {
   while (!kiyan)
   {
       Two();
       Three();
       Four();
   }
   } while (3>2);

   return 0;
}
