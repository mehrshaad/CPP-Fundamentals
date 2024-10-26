#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int n,a,b=0;
    cout << " Enter 3 Numbers For Matrix A(nxn) & B(nxn):\n => ";
    cin >> n;
    int A[n][n];
    int B[n][n];
    int C[n][n];
    cout << "\n Now You Have To Enter Every Member of A(" << n << "x" << n << ") & B(" << n << "x" << n << ") it's Gonna Take Your Time So Be Patient!\n";
    //see in matrix A
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cout << " A" << i+1 << j+1 << ": ";
            cin >> A[i][j];
        }
    }
    cout << " Almost Done! Now You Have To Enter B(" << n << "x" << n << ")\n";
    //see in matrix B
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cout << " B" << i+1 << j+1 << ": ";
            cin >> B[i][j];
        }
    }
    cout << "\n A(" << n << "x" << n << "):\n";
    //see out matrix A
    for (int i=0; i<n; i++) {
        a=0;
        cout << "\n";
        if (b!=0) {
           cout << "\t-";
           for (int k=0; k<n; k++) {
                cout << "----------------";
           }
        }
        cout << "\n\t";
        for (int j=0; j<n; j++) {
            if (a==0|a==j-1)
                cout << "|";
            cout << "\t" << A[i][j] << "\t|";
            a++;
            b++;
        }
    }
    b=0;
    cout << "\n\n B(" << n << "x" << n << "):\n";
    //see out matrix B
    for (int i=0; i<n; i++) {
        a=0;
        cout << "\n";
        if (b!=0) {
           cout << "\t-";
           for (int k=0; k<n; k++) {
                cout << "----------------";
           }
        }
        cout << "\n\t";
        for (int j=0; j<n; j++) {
            if (a==0|a==j-1)
                cout << "|";
            cout << "\t" << B[i][j] << "\t| ";
            a++;
            b++;
        }
    }
    //calculate matrix C
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            C[i][j]=A[i][j]+B[i][j];
        }
    }
    //see out matrix C
    b=0;
    cout << "\n\n\n A+B(" << n << "x" << n << "):\n";
    for (int i=0; i<n; i++) {
        a=0;
        cout << "\n";
        if (b!=0) {
           cout << "\t-";
           for (int k=0; k<n; k++) {
                cout << "----------------";
           }
        }
        cout << "\n\t";
        for (int j=0; j<n; j++) {
            if (a==0|a==j-1)
                cout << "|";
            cout << "\t" << C[i][j] << "\t| ";
            a++;
            b++;
        }
    }


    getch();
    return 0;
}
