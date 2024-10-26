#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int x,a=2,b=2,c=0;
    bool Quit=false;
    do {
    if (c!=0)
        cout << "\n\n";
    cout << " Enter a Number So i'll Convert it to Binary System (Enter 0 to Quit)\n => ";
    cin >> x;
    if (x==0){
        Quit=true;
        break;
    }
    else {
    if (x>0) {
        for (int i=0;x>=b;i++) {
            b=b*a;
        }
        b/=a;
        cout << " Here You Go: " << b;
        x-=b;
        if (x!=0) {
            do {
               b=2;
               if (x==2) {
                    cout << "+2";
                    break;
               }
               if (x==0)
                break;
               if (x>b){
                for (int j=0;x>=b;j++){
                    b=b*a;
                }
               }
                b/=a;
                cout << "+" << b;
                x-=b;
            } while (x>0);
        }
    }
    else
        cout << " error 404";
    }
        c++;
    } while (Quit==false);

    getch();
    return 0;
}
