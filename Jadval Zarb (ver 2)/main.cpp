#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
    int m,n,b=1, l=0;
    cout << " Enter Width: ";
    cin >> m;
    cout << " Enter Length: ";
    cin >> n;
    cout << "\n Result:\n";
    for (int i=0;i<m; i++) {
        b=1;
        cout << "|";
        for (int k=1; k<9*n; k++) {
            if (l!=0) {
            if (b*9==k) {
                cout << "|";
                b++;
            }
            else
                cout << "-";
            }
            else
                cout << "-";
        }
        cout << "-|";
        cout << endl;
        for (int j=0; j<n; j++) {
            cout <<  "|" << setw(5) << (j+1)*(i+1) << "   ";
        }
        cout << " |" << endl;
        l++;
    }
    cout << "|";
    for (int k=0; k<9*n; k++) {
            cout << "-";
        }
    cout << "|";


    getch();
    return 0;
}
