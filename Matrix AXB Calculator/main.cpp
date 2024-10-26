#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char** argv)
{
    int m,n,q,a,b=0;
    cout << " Enter 3 Numbers For Matrix A(nxm) & B(mxq):\n n = ";
    cin >> n;
    cout << " m = ";
    cin >> m;
    cout << " q = ";
    cin >> q;
    int A[n][m];
    int B[m][q];
    cout << "\n Now You Have To Enter Every Member of A(" << n << "x" << m << ") & B(" << m << "x" << q << ") it's Gonna Take Your Time So Be Patient!\n";
    //see in matrix A
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cout << " A" << i+1 << j+1 << ": ";
            cin >> A[i][j];
        }
    }
    cout << " Almost Done! Now You Have To Enter B(" << m << "x" << q << ")\n";
    //see in matrix B
    for (int i=0; i<m; i++) {
        for (int j=0; j<q; j++) {
            cout << " B" << i+1 << j+1 << ": ";
            cin >> B[i][j];
        }
    }
    cout << "\n A(" << n << "x" << m << "):\n";
    //see out matrix A
    for (int i=0; i<n; i++) {
        a=0;
        cout << "\n";
        if (b!=0) {
           cout << "\t-";
           for (int k=0; k<m; k++) {
                cout << "----------------";
           }
        }
        cout << "\n\t";
        for (int j=0; j<m; j++) {
            if (a==0|a==j-1)
                cout << "|";
            cout << "\t" << A[i][j] << "\t|";
            a++;
            b++;
        }
    }
    b=0;
    cout << "\n\n B(" << m << "x" << q << "):\n";
    //see out matrix B
    for (int i=0; i<m; i++) {
        a=0;
        cout << "\n";
        if (b!=0) {
           cout << "\t-";
           for (int k=0; k<q; k++) {
                cout << "----------------";
           }
        }
        cout << "\n\t";
        for (int j=0; j<q; j++) {
            if (a==0|a==j-1)
                cout << "|";
            cout << "\t" << B[i][j] << "\t| ";
            a++;
            b++;
        }
    }
    //calculate AxB
    b=0;
    int C[n][q];
    for(int i=0; i<n; i++) {
		for( int j=0; j<q; j++) {
            C[i][j]=0;
			for(int k=0; k<m; k++)
				C[i][j]+=A[i][k]*B[k][j];
        }
    }
    //see out AxB
    cout << "\n\n AxB(" << n << "x" << q << "):\n";
    for (int i=0; i<n; i++) {
        a=0;
        cout << "\n";
        if (b!=0) {
           cout << "\t-";
           for (int k=0; k<q; k++) {
                cout << "----------------";
           }
        }
        cout << "\n\t";
        for (int j=0; j<q; j++) {
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
