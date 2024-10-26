#include <iostream>
#include <conio.h>

using namespace std;

bool isPalindromeArray (int n, int A[]) {
    for (int iiPA=0; iiPA<n/2; iiPA++&&n--) {
        if (A[n]==A[iiPA])
            return false;
    }
    return true;
}

int main()
{
    int m,a=1;
    cout << " Enter Your Arrays Size:\n => ";
    cin >> m;
    int A[m];
    cout << " OK Now Enter Every Member of Your Array:\n";
    for (int i = 0; i<m; i++) {
        cout << " A[" << i << "] : ";
        cin >> A[i];
    }
    /*if (isPalindromeArray(m,A[m])==true)
        cout << "its palindrome";
    else
        cout << "its not palindrome";*/

    for (int iiPA=0; iiPA<m/2; iiPA++&&m--) {
        if (A[m]==A[iiPA]) {
            cout << "\n => it's Palindrome";
            a=0;
            break;
        }
    }
    if (a!=0)
        cout << "\n => it's Not Palindrome";

    getch();
    return 0;
}
