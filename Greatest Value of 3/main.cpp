#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    double x,y,z;
    cout << " Enter X: ";
    cin >> x;
    cout << "\n Enter Y: ";
    cin >> y;
    cout << "\n Enter Z: ";
    cin >> z;
    if(x>y){
        if(x>z) {
            cout << "\n Max Value is: X";
        }
        else {
            cout << "\n Max Value is: Z";
        }
    }
    else {
        if(y>z) {
            cout << "\n Max Value is: Y";
        }
        else {
            cout << "\n Max Value is: Z";
        }
    }
    getch();
    return 0;
}
