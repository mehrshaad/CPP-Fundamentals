#include <iostream>
#include <conio.h>

using namespace std;

long int Power (int n, int m) {
    long int aP=n, bP=1;
    while (bP!=m) {
        aP=aP*n;
        bP++;
    }
    return aP;
}

long double Square (int n) {
    long double aS;
    for (long double iS=1; iS*iS<=n; iS+=0.0001)
        aS=iS;
    return aS;
}

long long int Factorial (int n) {
    long long int aF=1, bF=0, cF=1;
    if (n==0) {
        return 1;
    }
    if (n<47&&n>0) {
        for (int iF=n; iF>0; iF--) {
            bF++;
        }
        while (bF!=0&&n>1) {
            bF--;
            aF=n*(n-1)*cF;
            cF=aF;
            n=n-2;
        }
        return aF;
    }
    return bF;
}

int main()
{
    long double i,j;
    int n;
    char Continue;
    cout << "\t\t\t\t* Welcome to Calculator *\n" << endl;
    do {
    Continue='a';
    cout << " Enter 2 Numbers:\n 1) ";
    cin >> i;
    cout << " 2) ";
    cin >> j;
    cout << "\n Select The Operation:" << endl;
    cout << " 1) Plus (+)\t2) Minus (-)\t3) Multiplied (X)\t4) Divide\t5) Power (1st^2nd)\n 6) Divide Remaining\t7)Factorial of Both Numbers\t8)Square of Both Numbers" << endl;
    cout << "\n Your Choice => ";
    cin >> n;
    switch (n){
        case 1: cout << "\n => " << i << " + " << j << " = " << j+i << "\n" << endl; break;
        case 2: if (i>j) {
            cout << "\n => " << i << " - " << j << " = " << i-j << "\n" << endl; break;
        }
            cout << "\n => " << j << " - " << i << " = " << j-i << "\n" << endl; break;
        case 3: cout << "\n => " << i << " x " << j << " = " << j*i << "\n" << endl; break;
        case 4: if (j==0){
            cout << "\n => " << i << " / " << j << " = " << "Infinity!" << "\n" << endl; break;
        }
            cout << "\n => " << i << " / " << j << " = " << i/j << "\n" << endl; break;
        case 5: cout << "\n => " << i << " ^ " << j << " = " << Power(i,j) << "\n" << endl; break;
        case 6: if ((int)i>(int)j) {
            cout << "\n => " << (int)i << " % " << (int)j << " = " << (int)i%(int)j << "\n" << endl; break;
        }
            cout << "\n => " << (int)j << " % " << (int)i << " = " << (int)j%(int)i << "\n" << endl; break;
        case 7: { cout << "\n => " << i << "! = " << Factorial(i) << endl;
            cout << " => " << j << "! = " << Factorial(j) << "\n" << endl; break;
        }
        case 8: { cout << "\n => Square of " << i << " = " << Square(i) << endl;
            cout << "\n => Square of " << j << " = " << Square(j) << "\n" << endl; break;
        }
        default: cout << " Sorry But Choose Only Between 1-8!\n Try Again!\n" << endl; continue;
    }
    cout << "\t\t\t****************" << "********************************" << "\n" << endl;
    while (Continue!='y'|Continue!='Y'|Continue!='n'|Continue!='N') {
         cout << " Do You Want to Try it Again? (Enter Y For YES or N For NO)\n => ";
         cin >> Continue;
         if (Continue=='y'|Continue=='Y'|Continue=='n'|Continue=='N')
            break;
         cout << " Only Y or N!";
    }
    if (Continue=='n'|Continue=='N')
        break;
    if (Continue=='y'|Continue=='Y')
        cout << "\n\t\t\t\t  Cool Hope You Enjoy!\n\n";
    cout << "\t\t\t****************" << "********************************" << "\n" << endl;
    } while (3>2);

    getch();
    return 0;
}
