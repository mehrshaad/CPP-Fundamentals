#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int A[1000], stmax, ndmax, stmin, ndmin, n=0;
    cout << " Enter at Least Two None-Zero Numbers:\n\n\t****************************\n";
    for (int i=0; i<1000; i++) {
        cout << "\n => ";
        cin >> A[i];
        n++;
        if (A[i]==0) {
            break;
        }
    }
    cout << "\n\n\t****************************\n";
    stmax=A[0];
    stmin=A[0];
    for (int i=1; i<1000; i++) {
        if (A[i]==0|A[0]==0)
            break;
        if (A[i]>A[i-1])
            stmax=A[i];
    }
    for (int i=1; i<1000; i++) {
        if (A[i]==0|A[0]==0)
            break;
        if (A[i]<A[i-1])
            stmin=A[i];
    }
    for (int i=1; i<1000; i++) {
        if (A[i]==0|A[0]==0)
            break;
        if (A[i]>A[i-1] && A[i]!=stmax && A[i-1]!=stmax)
            ndmax=A[i];
    }
    for (int i=1; i<1000; i++) {
        if (A[i]==0|A[0]==0)
            break;
        if (A[i]<A[i-1] && A[i]>stmin)
            ndmin=A[i];
    }

    cout << " You Entered \"" << n << "\" Numbers And:\n\n";
    cout << " Maximum Entered Value: " << stmax << endl;
    cout << " Minimum Entered Value: " << stmin << endl;
    if (n>4) {
        cout << "\n 2nd Maximum Entered Value: " << ndmax << endl;
        cout << " 2nd Minimum Entered Value: " << ndmin << endl;
    }

    getch();
    return 0;
}
