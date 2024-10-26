#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int x,i;
    cout << " Enter a Number So I'll Count All The Prime Numbers Before it: ";
    cin >> x;
    int a=0;
    if (x>0) {
            if (x==1|x==2){
                cout << " We Got " << "0" << " Prime Numbers Before Your Entered Number" << endl;
            }
            if (x>2) {
                 a++;
                 for (x=x-1;x>2;x--){
                      if (x%2!=0){
                          for (i=x-1;i>0;i--){
                              if (x%i==0&&i!=1){
                                 i=0;
                              }
                              if (i==1){
                                 i=0;
                                 a++;
                              }
                         }
                     }
                }
                       cout << " We Got " << a << " Prime Numbers Before Your Entered Number" << endl;
          }
    }
    else {
        cout << " Sorry But You Entered a Wrong Number O_o" << endl;
    }
    getch();
    return 0;
}
