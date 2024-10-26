#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int a,b,c;
    cout << " Enter   Any   Number: ";
    cin >> a;
    if (a>=0){
        cout << " Enter Another Number: ";
        cin >> b;
        while (b>=0){
            c=b;
            cout << " Enter Another Number: ";
            cin >> b;
            if (b<c) {
                if (a<c){
                    a=c;
                }
            }
            if (a<b) {
                a=b;
            }
        }
    }
    cout << "\n Maximum Entered Value is: " << a <<endl;
    getch();
    return 0;
}
