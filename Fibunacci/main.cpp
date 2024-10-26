#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int a,b,c,d,e;
    a=1;
    b=1;
    c=3;
    cout << " Enter X: ";
    cin >> e;
    while (e>=c){
        d=a+b;
        a=b;
        b=d;
        c++;
    }
    cout << " Result: " << d << endl;
    getch();
    return 0;
}
