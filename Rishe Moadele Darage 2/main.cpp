#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
    long double a,b,c,x1,x2,s;
    bool key = true;
    char menu;
    do {
        do {
            cout << "enter \"a\",\"b\",\"c\" for ax^2+bx+c:\na: ";
            cin >> a;
            if (a==0)
                cout << "\n\"a\" should be non-zero!\n";
        } while (a==0);
        cout << "b: ";
        cin >> b;
        cout << "c: ";
        cin >> c;
        if (b>0) {
            if (c>0)
                cout << "so we got: " << a << "x^2+" << b << "x+" << c;
            if (c<0)
                cout << "so we got: " << a << "x^2+" << b << "x-" << c;
            if (c==0)
                cout << "so we got: " << a << "x^2+" << b << "x";
        }
        if (b<0) {
            if (c>0)
                cout << "so we got: " << a << "x^2-" << b << "x+" << c;
            if (c<0)
                cout << "so we got: " << a << "x^2-" << b << "x-" << c;
            if (c==0)
                cout << "so we got: " << a << "x^2-" << b << "x";
        }
        if (b==0) {
            if (c>0)
                cout << "so we got: " << a << "x^2" << "+" << c;
            if (c<0)
                cout << "so we got: " << a << "x^2" << "-" << c;
            if (c==0)
                cout << "so we got: " << a << "x^2";
        }
        s=(b*b)-(4*a*c);
        cout << "\n\ndelta is: " << s;
        if (s==0) {
            x1=(-b)/(2*a);
            cout << "\ndelta is zero!";
            cout << "\nroot: " << x1;
        }
        if (s>0) {
            x1=(-b+sqrt(s))/(2*a);
            x2=(-b-sqrt(s))/(2*a);
            cout << "\ndelta is positive!";
            cout << "\nroot(s): " << x1 << " & " << x2 ;
        }
        if (s<0) {
            cout << "\ndelta is negative!";
        }
        cout << endl;
        do {
            cout << "\ndo you want to try again? (Y / N)\n";
            cin >> menu;
            if (menu == 'N' | menu == 'n') {
                key=false;
                break;
            }
            if (menu == 'y' | menu == 'Y')
                break;
        } while (menu!='n'&menu!='N'&menu!='y'&menu!='Y');
    } while (key);
    return 0;
}
