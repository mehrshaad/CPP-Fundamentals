#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			cout << j * i << " , ";
		}
		cout << endl;
	}
	getch();
	return 0;
}