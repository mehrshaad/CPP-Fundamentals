#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

void CinNumArray1D (int A[], char B, int n) {
	for (int iCA=0; iCA<n; iCA++) {
		cout << B << "[" << iCA+1 << "]: ";
		cin >> A[iCA];
	}
}

void ArangeArray1D (int X[], int y) {
    int iAA, kAA, Temp;
    for(iAA=y ; iAA>0 ; iAA--)
        for(kAA=0 ; kAA<=iAA ; kAA++)
            if(X[kAA] > X[kAA+1]) {
                Temp = X[kAA];
                X[kAA] = X[kAA+1];
                X[kAA+1] = Temp;
            }
}

void ShowNumArray1D (int A[], char B, int n) {
	for (int iSA=0; iSA<n; iSA++) {
		cout << B << "[" << iSA+1 << "]: " << A[iSA] << endl;
	}
}

int main()
{
    int n;
    char c;
    cout << "Enter Array Length:\n => ";
    cin >> n;
    int A[n];
    cout << "Now Enter a Letter or Number to Stand For Array:\n => ";
    cin >> c;
    cout << "\nOK! Now Enter Every Member of Your Array (Only Number):\n";
    CinNumArray1D(A,c,n);
    cout << "\n\nI've Arranged Your Array! Here You Go:\n";
    ArangeArray1D(A,5);
    ShowNumArray1D(A, c, n);


    getch();
    return 0;
}
