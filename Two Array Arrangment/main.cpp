#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

//#include <iomanip>
void ShowNumArray1DRam (int A[], int n) {
    cout << "|";
    for (int hSA=-n+1; hSA<7*n; hSA++)
        cout << "-";
    cout << "|\n|";
	for (int iSA=0; iSA<n; iSA++) {
		cout << setw(5) << A[iSA] << "  ";
		if (iSA!=n-1)
            cout << "-";
	}
	cout << "|\n|";
	for (int hSA=-n+1; hSA<7*n; hSA++)
        cout << "-";
    cout << "|";
}

void CinNumArray1D (int A[], char B, int n) {
	for (int iCA=0; iCA<n; iCA++) {
		cout << B << "[" << iCA+1 << "]: ";
		cin >> A[iCA];
	}
}

void ArangeArray1D (int X[], int y) {
    int iAA, kAA, Temp;
    for (iAA=y ; iAA>0 ; iAA--)
        for (kAA=0 ; kAA<=iAA ; kAA++)
            if (X[kAA] > X[kAA+1]) {
                Temp = X[kAA];
                X[kAA] = X[kAA+1];
                X[kAA+1] = Temp;
            }
}

void ShowArrangeCombineArray1D (int Array1[], int Array2[], int A1size, int A2size) {
    int CNA[A1size+A2size];
    for (int iCN=0; iCN<A1size; iCN++) {
            CNA[iCN]=Array1[iCN];
    }
    for (int iCN=A1size; iCN<A1size+A2size; iCN++) {
            CNA[iCN]=Array2[iCN-A1size];
    }
    ArangeArray1D (CNA, A1size+A2size);
    ShowNumArray1DRam (CNA, A1size+A2size);
}

int main()
{
    int A[5]={4,2,6,8,5};
    cout << "A1:" << endl;
    ShowNumArray1DRam(A,5);
    cout << endl;
    int B[5]={3,8,12,2,6};
    cout << "B1:" << endl;
    ShowNumArray1DRam(B,5);
    cout << endl;
    ArangeArray1D(A,5);
    cout << "A2:\n";
    ShowNumArray1DRam(A,5);
    ArangeArray1D(B,5);
    cout << endl;
    cout << "B2:\n";
    ShowNumArray1DRam(B,5);
    cout << endl << "A,B 1:" << endl;
    ShowArrangeCombineArray1D (A, B, 5, 5);


    return 0;
}
