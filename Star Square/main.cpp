#include <iostream>

using namespace std;

int main()
{
    int a , b;
    bool kx,ky;
    cout << "Outer edge size: ";
    cin >> a;
    cout << "Inner edge size: ";
    cin >> b;
    if (b>=a) {
        cout << "Wrong order!";
        return 0;
    }
    if ((a-b)%2!=0) {
        cout << "Wrong difference!";
        return 0;
    }
    cout << "Square:\n";
    int x=a,y=a,s=(a-b)/2;
    for (int i=0; i<a; i++) {
        kx = true;
        y=a;
        if (x<=a-s&&x>s) {
            kx = false;
        }
        for (int j=0; j<a; j++) {
            ky = true;
            if (y<=a-s&&y>s) {
                ky = false;
            }
            if (kx||ky) {
                cout << "*";
            }
            else
                cout << " ";
            if (j!=a-1) {
                cout << " ";
            }
            y--;
        }
        x--;
        cout << endl;
    }
	return 0;
}
