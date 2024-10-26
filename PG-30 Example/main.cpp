#include <iostream>
#include <conio.h>

using namespace std;

bool isPrime (int n) {
	for (int i = 2; i<n; i++)
		if (n%i==0)
			return false;
	return true;
}

int SoD (int n) {
	int s=0;
	while (n>0) {
		s+=n%10;
		n/=10;
	}
	return s;
}

int FCB (int n) {
	int aFCB=1, bFCB=1, cFCB=3, dFCB, eFCB=2;
	if (n==2|n==1) {
		if (n==2)
			return 2;
		if (n==1)
			return 0;
	}
	else {
		for (int iFCB=n-1; iFCB>0; iFCB--) {
			dFCB=aFCB+bFCB;
			aFCB=bFCB;
			bFCB=dFCB;
			if (dFCB<n) {
				eFCB++;
			}
			else
				iFCB=0;
		}
	}
	return eFCB;
}

int PCB (int n) {
	int a=0;
	if (n>0) {
		if (n==1|n==2)
			return 0;
		if (n>2) {
			a++;
			for (n=n-1; n>2; n--)
				if (n%2!=0)
					for (int i = n-1; i>0; i--) {
						if (n%i==0&&i!=1)
							i=0;
						if (i==1) {
							i=0;
							a++;
						}
					}
		}
	}
	return a;
}

int FCBs (int n) {
	int aFCBs=1, bFCBs=1, cFCBs=3, dFCBs, eFCBs=2;
	if (n==2|n==1) {
		if (n==2)
			cout << "1+1" << endl;
		if (n==1)
			cout << "None" << endl;
	}
	else {
		cout << "1+1";
		for (int iFCBs=n-1; iFCBs>0; iFCBs--) {
			dFCBs=aFCBs+bFCBs;
			aFCBs=bFCBs;
			bFCBs=dFCBs;
			if (dFCBs<n) {
				cout << "+" << dFCBs;
				eFCBs++;
			}
			else
				iFCBs=0;
		}
	}
}

int PCBs (int n) {
	if (n>0) {
		if (n==1|n==2)
			cout << "None!";
		if (n>2) {
            cout << "2";
			for (int kPCBs=3; n>kPCBs; kPCBs++)
				if (kPCBs%2!=0)
					for (int iPCBs = kPCBs-1; iPCBs>0; iPCBs--) {
						if (kPCBs%iPCBs==0&&iPCBs!=1)
							iPCBs=0;
						if (iPCBs==1) {
							iPCBs=0;
							cout << "," << kPCBs;
						}
					}
		}
	}
	else
		cout << "error PCBs";
}

int main()
{
    int x,j=0;
    bool q=false;
    do {
    if (j==0){
        cout << " Enter a Positive Number So i'll Give You Some Information About it! (Press 0 to Quit)\n => ";
        cin >> x;
        if (x==0){
                break;
                q=true;
        }
        else {
        if (x>0){
            if (isPrime(SoD(x))==true) {
                cout << "\n There Are " << PCB(x) << " Prime Number(s) Before Your Entered Number\n => ";
                PCBs(x);
                cout << "\n\n";
                cout << "\t\t***************************************************************************\t\t\n";
            }
            else {
                cout << "\n There is " << FCB(x) << " Number(s) in Fibonacci Trail Before The Entered Number\n => ";
                FCBs(x);
                cout << "\n\n";
                cout << "\t\t***************************************************************************\t\t\n";
            }
        }
        else {
            cout << "\n oops Looks Like Your Entered Number is Wrong! (Press 0 to Quit)" << endl;
            j=0;
            continue;
        }
        j++;
    }
    }
    else {
        cout << "\n Try Again if You Want! (Press 0 to Quit)\n => ";
        cin >> x;
        if (x==0){
                break;
                q=true;
        }
        else {
        if (x>0){
            if (isPrime(SoD(x))==true) {
                cout << "\n There Are " << PCB(x) << " Prime Number(s) Before Your Entered Number\n => ";
                PCBs(x);
                cout << "\n\n";
                cout << "\t\t***************************************************************************\t\t\n";
            }
            else {
                cout << "\n There is " << FCB(x) << " Number(s) in Fibonacci Trail Before The Entered Number\n => ";
                FCBs(x);
                cout << "\n\n";
                cout << "\t\t***************************************************************************\t\t\n";
            }
        }
        else {
            cout << "\n oops Looks Like Your Entered Number is Wrong! (Press 0 to Quit)" << endl;
            j=0;
            continue;
        }
        }
    }

    } while (x>0&&q==false);

    getch();
    return 0;
}
