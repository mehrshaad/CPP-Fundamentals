#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int n;
	cout << " Enter a Number So I'll Tell You It's Prime or Complex: ";
	cin >> n;
	if (n > 1)
	{
		if (n > 2)
		{
			for (int i = n - 1; i > 0; i--)
			{
				if (n % i == 0 && i != 1)
				{
					i = 0;
					cout << "\n it's Complex" << endl;
				}
				if (i == 1)
				{
					i = 0;
					cout << "\n it's Prime" << endl;
				}
			}
		}
		else
		{
			cout << "\n it's Prime" << endl;
		}
	}
	else
	{
		cout << "\n Sorry But Wrong Number" << endl;
	}
	getch();
	return 0;
}
