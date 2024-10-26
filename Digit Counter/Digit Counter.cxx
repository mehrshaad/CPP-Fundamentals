#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int x;
	cout << " Enter X: ";
	cin >> x;
	int y;
	y = 1;
	if (x>0) {
        while (x >= 10) {
            x = x / 10;
            y = y + 1;
        }
	}
    if (x<0){
        while (x<=-10) {
            x/=10;
            y++;
        }
    }
	cout << " Result: " << y << endl;
	getch();
	return 0;
}
