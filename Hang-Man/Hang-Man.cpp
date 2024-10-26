#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <time.h>

using namespace std;

void RandomWord (int Num, char A[]) {
	if (Num == 1) {
		A[0] = 'B', A[1] = 'O', A[2] = 'A', A[3] = 'T';
	}
	if (Num == 2) {
		A[0] = 'W', A[1] = 'O', A[2] = 'R', A[3] = 'K';
	}
	if (Num == 3) {
		A[0] = 'H', A[1] = 'O', A[2] = 'M', A[3] = 'E';
	}
	if (Num == 4) {
		A[0] = 'W', A[1] = 'I', A[2] = 'L', A[3] = 'D';
	}
	if (Num == 5) {
		A[0] = 'B', A[1] = 'I', A[2] = 'R', A[3] = 'D';
	}
	if (Num == 6) {
		A[0] = 'B', A[1] = 'O', A[2] = 'N', A[3] = 'E';
	}
	if (Num == 7) {
		A[0] = 'Y', A[1] = 'A', A[2] = 'R', A[3] = 'D';
	}
	if (Num == 8) {
		A[0] = 'C', A[1] = 'I', A[2] = 'T', A[3] = 'Y';
	}
	if (Num == 9) {
		A[0] = 'V', A[1] = 'E', A[2] = 'S', A[3] = 'T';
	}
	if (Num == 10) {
		A[0] = 'D', A[1] = 'U', A[2] = 'S', A[3] = 'T';
	}
	if (Num == 11) {
		A[0] = 'F', A[1] = 'I', A[2] = 'R', A[3] = 'E';
	}
	if (Num == 12) {
		A[0] = 'F', A[1] = 'A', A[2] = 'R', A[3] = 'M';
	}
	if (Num == 13) {
		A[0] = 'G', A[1] = 'I', A[2] = 'F', A[3] = 'T';
	}
	if (Num == 14) {
		A[0] = 'G', A[1] = 'O', A[2] = 'A', A[3] = 'T';
	}
	if (Num == 15) {
		A[0] = 'J', A[1] = 'U', A[2] = 'M', A[3] = 'P';
	}
	if (Num == 16) {
		A[0] = 'K', A[1] = 'I', A[2] = 'N', A[3] = 'G';
	}
	if (Num == 17) {
		A[0] = 'R', A[1] = 'I', A[2] = 'C', A[3] = 'H';
	}
	if (Num == 18) {
		A[0] = 'S', A[1] = 'H', A[2] = 'O', A[3] = 'P';
	}
	if (Num == 19) {
		A[0] = 'T', A[1] = 'O', A[2] = 'W', A[3] = 'N';
	}
	if (Num == 20) {
		A[0] = 'L', A[1] = 'A', A[2] = 'W';
	}
	if (Num == 21) {
		A[0] = 'D', A[1] = 'R', A[2] = 'Y';
	}
	if (Num == 22) {
		A[0] = 'F', A[1] = 'A', A[2] = 'T';
	}
	if (Num == 23) {
		A[0] = 'G', A[1] = 'A', A[2] = 'S';
	}
	if (Num == 24) {
		A[0] = 'H', A[1] = 'A', A[2] = 'T';
	}
	if (Num == 25) {
		A[0] = 'I', A[1] = 'C', A[2] = 'E';
	}
	if (Num == 26) {
		A[0] = 'J', A[1] = 'O', A[2] = 'B';
	}
	if (Num == 27) {
		A[0] = 'A', A[1] = 'R', A[2] = 'M';
	}
	if (Num == 2) {
		A[0] = 'B', A[1] = 'A', A[2] = 'T';
	}
	if (Num == 29) {
		A[0] = 'B', A[1] = 'A', A[2] = 'G';
	}
	if (Num == 30) {
		A[0] = 'C', A[1] = 'A', A[2] = 'T';
	}
	if (Num == 31) {
		A[0] = 'Q', A[1] = 'U', A[2] = 'I', A[3] = 'C', A[4] = 'K';
	}
	if (Num == 32) {
		A[0] = 'A', A[1] = 'L', A[2] = 'B', A[3] = 'U', A[4] = 'M';
	}
	if (Num == 33) {
		A[0] = 'A', A[1] = 'G', A[2] = 'E', A[3] = 'N', A[4] = 'T';
	}
	if (Num == 34) {
		A[0] = 'T', A[1] = 'R', A[2] = 'U', A[3] = 'C', A[4] = 'K';
	}
	if (Num == 35) {
		A[0] = 'B', A[1] = 'L', A[2] = 'A', A[3] = 'C', A[4] = 'K';
	}
	if (Num == 36) {
		A[0] = 'M', A[1] = 'O', A[2] = 'N', A[3] = 'E', A[4] = 'Y';
	}
	if (Num == 37) {
		A[0] = 'C', A[1] = 'H', A[2] = 'E', A[3] = 'A', A[4] = 'P';
	}
	if (Num == 38) {
		A[0] = 'D', A[1] = 'E', A[2] = 'A', A[3] = 'T', A[4] = 'H';
	}
	if (Num == 39) {
		A[0] = 'E', A[1] = 'A', A[2] = 'R', A[3] = 'T', A[4] = 'H';
	}
	if (Num == 40) {
		A[0] = 'E', A[1] = 'M', A[2] = 'P', A[3] = 'I', A[4] = 'R', A[5] = 'E';
	}
	if (Num == 41) {
		A[0] = 'A', A[1] = 'C', A[2] = 'T', A[3] = 'I', A[4] = 'V', A[5] = 'E';
	}
	if (Num == 42) {
		A[0] = 'C', A[1] = 'A', A[2] = 'S', A[3] = 'T', A[4] = 'L', A[5] = 'E';
	}
	if (Num == 43) {
		A[0] = 'E', A[1] = 'D', A[2] = 'I', A[3] = 'T', A[4] = 'O', A[5] = 'R';
	}
	if (Num == 44) {
		A[0] = 'G', A[1] = 'A', A[2] = 'R', A[3] = 'D', A[4] = 'E', A[5] = 'N';
	}
	if (Num == 45) {
		A[0] = 'I', A[1] = 'S', A[2] = 'L', A[3] = 'A', A[4] = 'N', A[5] = 'D';
	}
	if (Num == 46) {
		A[0] = 'M', A[1] = 'A', A[2] = 'R', A[3] = 'K', A[4] = 'E', A[5] = 'T';
	}
	if (Num == 47) {
		A[0] = 'P', A[1] = 'L', A[2] = 'A', A[3] = 'N', A[4] = 'E', A[5] = 'T';
	}
	if (Num == 48) {
		A[0] = 'S', A[1] = 'P', A[2] = 'R', A[3] = 'I', A[4] = 'N', A[5] = 'G';
	}
	if (Num == 49) {
		A[0] = 'P', A[1] = 'E', A[2] = 'A', A[3] = 'N', A[4] = 'U', A[5] = 'T';
	}
	if (Num == 50) {
		A[0] = 'P', A[1] = 'O', A[2] = 'S', A[3] = 'T', A[4] = 'E', A[5] = 'R';
	}
	if (Num == 51) {
		A[0] = 'N', A[1] = 'U', A[2] = 'C', A[3] = 'L', A[4] = 'E', A[5] = 'A', A[6] = 'R';
	}
	if (Num == 52) {
		A[0] = 'C', A[1] = 'H', A[2] = 'A', A[3] = 'P', A[4] = 'T', A[5] = 'E', A[6] = 'R';
	}
	if (Num == 53) {
		A[0] = 'K', A[1] = 'I', A[2] = 'T', A[3] = 'C', A[4] = 'H', A[5] = 'E', A[6] = 'N';
	}
	if (Num == 54) {
		A[0] = 'C', A[1] = 'A', A[2] = 'B', A[3] = 'I', A[4] = 'N', A[5] = 'E', A[6] = 'T';
	}
	if (Num == 55) {
		A[0] = 'C', A[1] = 'A', A[2] = 'P', A[3] = 'T', A[4] = 'U', A[5] = 'R', A[6] = 'E';
	}
	if (Num == 56) {
		A[0] = 'D', A[1] = 'E', A[2] = 'S', A[3] = 'T', A[4] = 'R', A[5] = 'O', A[6] = 'Y';
	}
	if (Num == 57) {
		A[0] = 'E', A[1] = 'X', A[2] = 'P', A[3] = 'L', A[4] = 'A', A[5] = 'I', A[6] = 'N';
	}
	if (Num == 58) {
		A[0] = 'F', A[1] = 'O', A[2] = 'R', A[3] = 'E', A[4] = 'I', A[5] = 'G', A[6] = 'N';
	}
	if (Num == 59) {
		A[0] = 'H', A[1] = 'O', A[2] = 'L', A[3] = 'D', A[4] = 'I', A[5] = 'N', A[6] = 'G';
	}
	if (Num == 60) {
		A[0] = 'I', A[1] = 'M', A[2] = 'P', A[3] = 'R', A[4] = 'O', A[5] = 'V', A[6] = 'E';
	}
	if (Num == 61) {
		A[0] = 'J', A[1] = 'U', A[2] = 'S', A[3] = 'T', A[4] = 'I', A[5] = 'C', A[6] = 'E';
	}
	if (Num == 62) {
		A[0] = 'K', A[1] = 'I', A[2] = 'N', A[3] = 'G', A[4] = 'D', A[5] = 'O', A[6] = 'M';
	}
	if (Num == 63) {
		A[0] = 'M', A[1] = 'E', A[2] = 'D', A[3] = 'I', A[4] = 'C', A[5] = 'A', A[6] = 'L';
	}
	if (Num == 64) {
		A[0] = 'N', A[1] = 'E', A[2] = 'T', A[3] = 'W', A[4] = 'O', A[5] = 'R', A[6] = 'K';
	}
	if (Num == 65) {
		A[0] = 'P', A[1] = 'A', A[2] = 'R', A[3] = 'T', A[4] = 'N', A[5] = 'E', A[6] = 'R';
	}
	if (Num == 66) {
		A[0] = 'P', A[1] = 'E', A[2] = 'N', A[3] = 'A', A[4] = 'L', A[5] = 'T', A[6] = 'Y';
	}
	if (Num == 67) {
		A[0] = 'J', A[1] = 'O', A[2] = 'U', A[3] = 'R', A[4] = 'N', A[5] = 'E', A[6] = 'Y';
	}
	if (Num == 68) {
		A[0] = 'Q', A[1] = 'U', A[2] = 'A', A[3] = 'L', A[4] = 'I', A[5] = 'T', A[6] = 'Y';
	}
	if (Num == 69) {
		A[0] = 'R', A[1] = 'U', A[2] = 'O', A[3] = 'T', A[4] = 'I', A[5] = 'N', A[6] = 'E';
	}
	if (Num == 70) {
		A[0] = 'V', A[1] = 'I', A[2] = 'R', A[3] = 'T', A[4] = 'U', A[5] = 'A', A[6] = 'L';
	}
}

void HangMan (int n) {
	cout << "\n";
	if (n == 0) {
		cout << "\n\t               ";
		cout << "\n\t  10           ";
		cout << "\n\t               ";
		cout << "\n\t               ";
		cout << "\n\t               ";
		cout << "\n\t               ";
		cout << "\n\t               ";
		cout << "\n\t_______________";
	}
	if (n == 1) {
		cout << "\n\t               ";
		cout << "\n\t               ";
		cout << "\n\t               ";
		cout << "\n\t           9   ";
		cout << "\n\t               ";
		cout << "\n\t               ";
		cout << "\n\t               ";
		cout << "\n\t_______|_______";
	}
	if (n == 2) {
		cout << "\n\t               ";
		cout << "\n\t       |       ";
		cout << "\n\t       |       ";
		cout << "\n\t       |       ";
		cout << "\n\t       |       ";
		cout << "\n\t    8  |       ";
		cout << "\n\t       |       ";
		cout << "\n\t_______|_______";
	}
	if (n == 3) {
		cout << "\n\t        _________";
		cout << "\n\t   7   |       ";
		cout << "\n\t       |       ";
		cout << "\n\t       |       ";
		cout << "\n\t       |       ";
		cout << "\n\t       |       ";
		cout << "\n\t       |       ";
		cout << "\n\t_______|_______";
	}
	if (n == 4) {
		cout << "\n\t        _________";
		cout << "\n\t       |         |";
		cout << "\n\t       |       ";
		cout << "\n\t       |       ";
		cout << "\n\t       |    6  ";
		cout << "\n\t       |       ";
		cout << "\n\t       |       ";
		cout << "\n\t_______|_______";
	}
	if (n == 5) {
		cout << "\n\t        _________";
		cout << "\n\t       |         |";
		cout << "\n\t       |         O";
		cout << "\n\t       |       ";
		cout << "\n\t       |       ";
		cout << "\n\t       |       ";
		cout << "\n\t   5   |       ";
		cout << "\n\t_______|_______";
	}
	if (n == 6) {
		cout << "\n\t   4    _________";
		cout << "\n\t       |         |";
		cout << "\n\t       |         O";
		cout << "\n\t       |         |";
		cout << "\n\t       |       ";
		cout << "\n\t       |       ";
		cout << "\n\t       |       ";
		cout << "\n\t_______|_______";
	}
	if (n == 7) {
		cout << "\n\t        _________";
		cout << "\n\t       |         |";
		cout << "\n\t 3     |         O";
		cout << "\n\t       |        \\|";
		cout << "\n\t       |       ";
		cout << "\n\t       |       ";
		cout << "\n\t       |       ";
		cout << "\n\t_______|_______";
	}
	if (n == 8) {
		cout << "\n\t        _________";
		cout << "\n\t       |         |";
		cout << "\n\t       |         O";
		cout << "\n\t    2  |        \\|/";
		cout << "\n\t       |       ";
		cout << "\n\t       |       ";
		cout << "\n\t       |       ";
		cout << "\n\t_______|_______";
	}
	if (n == 9) {
		cout << "\n\t        _________";
		cout << "\n\t       |         |";
		cout << "\n\t       |         O";
		cout << "\n\t       |        \\|/";
		cout << "\n\t       |         |";
		cout << "\n\t       |       ";
		cout << "\n\t   1   |       ";
		cout << "\n\t_______|_______";
	}
	if (n == 10) {
		cout << "\n\t        _________";
		cout << "\n\t       |         |";
		cout << "\n\t       |         O";
		cout << "\n\t       |        \\|/";
		cout << "\n\t       |         |";
		cout << "\n\t       |        / \\";
		cout << "\n\t       |       ";
		cout << "\n\t_______|_______";
		cout << "\n\t   Game Over!  ";
	}
}

int RandomNum (int min, int max) {
	srand(time(0));
	return (rand() % (max - min)) + min;
}

int main ()
{
	char A[100];
	int a = 0, Score = 0, k, N, n = 0, Num;
	bool C[100];
	bool Mehrshad = true;
	char menu;
	char entry[100];
	system("cls");
	cout << "\n\n\n\n\n\n\t\t\t\t\t* Welcome to Hang-man *\n\n\t\t\t\t       (Press Enter to Continue)\n\n\t\t\t\t\t";
	cin.ignore();
	system("cls");
	cout << "\n\n\n\n\n\n\t\t\t\tMake Sure Your \"Caps Lock\" is Turned ON\n\n\t\t\t\t       (Press Enter to Continue)\n\n\t\t\t\t\t";
	cin.ignore();
	system("cls");
	cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
	do {
		char W[10] = { '.','.','.','.','.','.','.','.','.','.' };
		for (int i = 0; i < 100; i++)
			C[i] = false;
		cout << "\n Choose Your Level:\n\n a) Beginner (3-4 Letter Words)\n\n b) Intermediate (5-6 Letter Words)\n\n c) Expert (7 Letter Words)\n\n\n Your Choose => ";
		cin >> menu;
		a = 0;
		n = 0;
		system("cls");
		if (menu == 'a' | menu == 'A') {
			cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
			cout << "\n Nice Choice For Start!" << endl;
			Num = RandomNum (1, 30);
			RandomWord (Num, A);
			if (Num > 19)
				N = 3;
			else
				N = 4;
			char test;
			int L = 0;
			for (int i = 0; i < 100; i++) {
				bool lll = true;
				bool Break = false;
				bool br = false;
				cout << endl;
                cout << " Enter Letter: ";
                cin >> entry[i];
				do {
                    if (entry[i] == 'A' | entry[i] == 'B' | entry[i] == 'C' | entry[i] == 'D' | entry[i] == 'E' | entry[i] == 'F' | entry[i] == 'G' |
                        entry[i] == 'H' | entry[i] == 'I' | entry[i] == 'J' | entry[i] == 'K' | entry[i] == 'L' | entry[i] == 'M' | entry[i] == 'N' |
                        entry[i] == 'O' | entry[i] == 'P' | entry[i] == 'Q' | entry[i] == 'R' | entry[i] == 'S' | entry[i] == 'T' | entry[i] == 'U' |
                        entry[i] == 'V' | entry[i] == 'W' | entry[i] == 'X' | entry[i] == 'Y' | entry[i] == 'Z')
                            break;
                    cout << "\n Only Enter Capital Letters (A ~ Z): ";
                    cin >> entry[i];
                } while (Mehrshad);
				for (int j = 0; j < N; j++) {
					if (entry[i] == A[j]) {
						if (!C[j]) {
							Score += 3*N;
							C[j] = true;
							k = j;
							lll = true;
							break;
						}
						else {
                            system("cls");
                            cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
							cout << "\n Correct But Already Entered!" << endl;
							cout << "\n Wrong Entered Letters: ";
                            for (int h = 0; h < 10; h++) {
                                if (test == W[h]) {
                                    br = true;
                                    break;
                                }
                            }
                            for (int h = 0; h < 10; h++) {
                                if (W[h] != '.')
                                    cout << W[h] << " ";
                                if (W[h] == '.')
                                    cout << "- ";
                            }
                            cout << endl;
                            HangMan(n);
                            if (N == 3)
                                cout << "\n\n\t    ";
                            if (N == 4)
                                cout << "\n\n\t   ";
                            for (int j = 0; j < N; j++) {
                                if (C[j])
                                    cout << " " << A[j];
                                else
                                    cout << " -";
                            }
                            cout << endl;
							lll = true;
							Break = true;
							break;
						}
					}
					else {
						test = entry[i];
						a++;
						lll = false;
					}
				}
				if (Break)
					continue;
				if (!lll) {
					for (int h = 0; h < 10; h++) {
						if (test == W[h]) {
                            system("cls");
                            cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
							cout << "\n Wrong But Already Entered!";
							br = true;
							break;
						}
					}
					if (!br) {
						W[L] = test;
						L++;
					}
				}
				if (br) {
                    cout << "\n\n Wrong Entered Letters: ";
					for (int h = 0; h < 10; h++) {
						if (W[h] != '.')
							cout << W[h] << " ";
						if (W[h] == '.')
							cout << "- ";
					}
					cout << endl;
                    HangMan(n);
                    if (N == 3)
                            cout << "\n\n\t    ";
                    if (N == 4)
                            cout << "\n\n\t   ";
					for (int j = 0; j < N; j++) {
						if (C[j])
							cout << " " << A[j];
						else
							cout << " -";
					}
					cout << endl;
					continue;
				}
                cout << "\n\n\t";
				if (lll) {
					system("cls");
					cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
					cout << "\n Correct Letter!";
                    cout << "\n\n Wrong Entered Letters: ";
					for (int h = 0; h < 10; h++) {
						if (test == W[h]) {
							br = true;
							break;
						}
					}
                    for (int h = 0; h < 10; h++) {
                        if (W[h] != '.')
                            cout << W[h] << " ";
                        if (W[h] == '.')
                            cout << "- ";
                    }
                    cout << endl;
					HangMan(n);
					if (N == 3)
                            cout << "\n\n\t    ";
                    if (N == 4)
                            cout << "\n\n\t   ";
					for (int j = 0; j < N; j++) {
						if (C[j])
							cout << " " << A[j];
						else
							cout << " -";
					}
					cout << endl;
				}
				if (N == 4) {
					if (C[0] && C[1] && C[2] && C[3]) {
						Score += 100*N;
						cout << "\n Congratulation! I Knew You Can Do it... (+" << 100*N << " Score)\n";
						break;
					}
				}
				if (N == 3) {
					if (C[0] && C[1] && C[2]) {
						Score += 100*N;
						cout << "\n Congratulation! I Knew You Can Do it... (+" << 100*N << " Score)\n";
						break;
					}
				}
				if (!lll) {
					system("cls");
					Score -= N;
					cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
					cout << "\n Wrong Letter!";
					for (int h = 0; h < 10; h++) {
						if (test == W[h]) {
							cout << "\n\n Wrong Entered Letters: ";
							br = true;
							break;
						}
					}
                    if (br) {
                        for (int h = 0; h < 10; h++) {
                            if (W[h] != '.')
                                cout << W[h] << " ";
                            if (W[h] == '.')
                                cout << "- ";
                        }
                        cout << endl;
                    }
					n++;
					HangMan(n);
					if (n != 10) {
                        if (N == 3)
                                cout << "\n\n\t    ";
                        if (N == 4)
                                cout << "\n\n\t   ";
                        for (int j = 0; j < N; j++) {
                            if (C[j])
                                cout << " " << A[j];
                            else
                                cout << " -";
                        }
                        cout << endl;
					}
					if (n == 10) {
                        Score -= 10*N;
						cout << "\n\n You've Been Hanged HaHaHa! (-" << 10*N << " Score)\n it's: ";
						for (int j = 0; j < N; j++) {
							cout << A[j];
						}
						break;
					}
				}
			}
		}
		if (menu == 'b' | menu == 'B') {
		    cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
			cout << "\n Nice Choice For Start!" << endl;
			Num = RandomNum (31, 50);
			RandomWord (Num, A);
			if (Num > 39)
				N = 6;
			else
				N = 5;
			char test;
			int L = 0;
			for (int i = 0; i < 100; i++) {
				bool lll = true;
				bool Break = false;
				bool br = false;
				cout << "\n Enter Letter: ";
				cin >> entry[i];
				do {
                    if (entry[i] == 'A' | entry[i] == 'B' | entry[i] == 'C' | entry[i] == 'D' | entry[i] == 'E' | entry[i] == 'F' | entry[i] == 'G' |
                        entry[i] == 'H' | entry[i] == 'I' | entry[i] == 'J' | entry[i] == 'K' | entry[i] == 'L' | entry[i] == 'M' | entry[i] == 'N' |
                        entry[i] == 'O' | entry[i] == 'P' | entry[i] == 'Q' | entry[i] == 'R' | entry[i] == 'S' | entry[i] == 'T' | entry[i] == 'U' |
                        entry[i] == 'V' | entry[i] == 'W' | entry[i] == 'X' | entry[i] == 'Y' | entry[i] == 'Z')
                            break;
                    cout << "\n Only Enter Capital Letters (A ~ Z): ";
                    cin >> entry[i];
                } while (Mehrshad);
				for (int j = 0; j < N; j++) {
					if (entry[i] == A[j]) {
						if (!C[j]) {
							Score += 3*N;
							C[j] = true;
							k = j;
							lll = true;
							break;
						}
						else {
                            system("cls");
                            cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
							cout << "\n Correct But Already Entered!" << endl;
							cout << "\n Wrong Entered Letters: ";
                            for (int h = 0; h < 10; h++) {
                                if (test == W[h]) {
                                    br = true;
                                    break;
                                }
                            }
                            for (int h = 0; h < 10; h++) {
                                if (W[h] != '.')
                                    cout << W[h] << " ";
                                if (W[h] == '.')
                                    cout << "- ";
                            }
                            cout << endl;
                            HangMan(n);
                            if (N == 6)
                                cout << "\n\n\t ";
                            if (N == 5)
                                cout << "\n\n\t  ";
                            for (int j = 0; j < N; j++) {
                                if (C[j])
                                    cout << " " << A[j];
                                else
                                    cout << " -";
                            }
                            cout << endl;
							lll = true;
							Break = true;
							break;
						}
					}
					else {
						test = entry[i];
						a++;
						lll = false;
					}
				}
				if (Break)
					continue;
				if (!lll) {
					for (int h = 0; h < 10; h++) {
						if (test == W[h]) {
                            system("cls");
                            cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
							cout << "\n Wrong But Already Entered!";
							br = true;
							break;
						}
					}
					if (!br) {
						W[L] = test;
						L++;
					}
				}
				if (br) {
                    cout << "\n\n Wrong Entered Letters: ";
					for (int h = 0; h < 10; h++) {
						if (W[h] != '.')
							cout << W[h] << " ";
						if (W[h] == '.')
							cout << "- ";
					}
					cout << endl;
                    HangMan(n);
                    if (N == 6)
                            cout << "\n\n\t ";
                    if (N == 5)
                            cout << "\n\n\t  ";
					for (int j = 0; j < N; j++) {
						if (C[j])
							cout << " " << A[j];
						else
							cout << " -";
					}
					cout << endl;
					continue;
				}
                cout << "\n\n\t";
				if (lll) {
					system("cls");
					cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
					cout << "\n Correct Letter!";
                    cout << "\n\n Wrong Entered Letters: ";
					for (int h = 0; h < 10; h++) {
						if (test == W[h]) {
							br = true;
							break;
						}
					}
                    for (int h = 0; h < 10; h++) {
                        if (W[h] != '.')
                            cout << W[h] << " ";
                        if (W[h] == '.')
                            cout << "- ";
                    }
                    cout << endl;
					HangMan(n);
					if (N == 6)
                            cout << "\n\n\t ";
                    if (N == 5)
                            cout << "\n\n\t  ";
					for (int j = 0; j < N; j++) {
						if (C[j])
							cout << " " << A[j];
						else
							cout << " -";
					}
					cout << endl;
				}
				if (N == 5) {
					if (C[0] && C[1] && C[2] && C[3] && C[4]) {
						Score += 100*N;
						cout << "\n Congratulation! I Knew You Can Do it... (+" << 100*N << " Score)\n";
						break;
					}
				}
				if (N == 6) {
					if (C[0] && C[1] && C[2] && C[3] && C[4] && C[5]) {
						Score += 100*N;
						cout << "\n Congratulation! I Knew You Can Do it... (+" << 100*N << " Score)\n";
						break;
					}
				}
				if (!lll) {
					system("cls");
					Score -= N;
					cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
					cout << "\n Wrong Letter!";
					for (int h = 0; h < 10; h++) {
						if (test == W[h]) {
							cout << "\n\n Wrong Entered Letters: ";
							br = true;
							break;
						}
					}
                    if (br) {
                        for (int h = 0; h < 10; h++) {
                            if (W[h] != '.')
                                cout << W[h] << " ";
                            if (W[h] == '.')
                                cout << "- ";
                        }
                        cout << endl;
                    }
					n++;
					HangMan(n);
					if (n != 10) {
                        if (N == 6)
                            cout << "\n\n\t ";
                        if (N == 5)
                            cout << "\n\n\t  ";
                        for (int j = 0; j < N; j++) {
                            if (C[j])
                                cout << " " << A[j];
                            else
                                cout << " -";
                        }
                        cout << endl;
					}
					if (n == 10) {
						Score -= 10*N;
						cout << "\n\n You've Been Hanged HaHaHa! (-" << 10*N << " Score)\n it's: ";
						for (int j = 0; j < N; j++) {
							cout << A[j];
						}
						break;
					}
				}
			}
		}
        if (menu == 'c' | menu == 'C') {
			cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
			cout << "\n So You Want to Be Challenged Huh?!" << endl;
			Num = RandomNum (51, 70);
			RandomWord (Num, A);
			N = 7;
			char test;
			int L = 0;
            for (int i = 0; i < 100; i++) {
				bool lll = true;
				bool Break = false;
				bool br = false;
				cout << "\n Enter Letter: ";
				cin >> entry[i];
				do {
                    if (entry[i] == 'A' | entry[i] == 'B' | entry[i] == 'C' | entry[i] == 'D' | entry[i] == 'E' | entry[i] == 'F' | entry[i] == 'G' |
                        entry[i] == 'H' | entry[i] == 'I' | entry[i] == 'J' | entry[i] == 'K' | entry[i] == 'L' | entry[i] == 'M' | entry[i] == 'N' |
                        entry[i] == 'O' | entry[i] == 'P' | entry[i] == 'Q' | entry[i] == 'R' | entry[i] == 'S' | entry[i] == 'T' | entry[i] == 'U' |
                        entry[i] == 'V' | entry[i] == 'W' | entry[i] == 'X' | entry[i] == 'Y' | entry[i] == 'Z')
                            break;
                    cout << "\n Only Enter Capital Letters (A ~ Z): ";
                    cin >> entry[i];
                } while (Mehrshad);
				for (int j = 0; j < N; j++) {
					if (entry[i] == A[j]) {
						if (!C[j]) {
							Score += 3*N;
							C[j] = true;
							k = j;
							lll = true;
							break;
						}
						else {
                            system("cls");
                            cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
							cout << "\n Correct But Already Entered!" << endl;
							cout << "\n Wrong Entered Letters: ";
                            for (int h = 0; h < 10; h++) {
                                if (test == W[h]) {
                                    br = true;
                                    break;
                                }
                            }
                            for (int h = 0; h < 10; h++) {
                                if (W[h] != '.')
                                    cout << W[h] << " ";
                                if (W[h] == '.')
                                    cout << "- ";
                            }
                            cout << endl;
                            HangMan(n);
                            cout << "\n\n\t";
                            for (int j = 0; j < N; j++) {
                                if (C[j])
                                    cout << " " << A[j];
                                else
                                    cout << " -";
                            }
                            cout << endl;
							lll = true;
							Break = true;
							break;
						}
					}
					else {
						test = entry[i];
						a++;
						lll = false;
					}
				}
				if (Break)
					continue;
				if (!lll) {
					for (int h = 0; h < 10; h++) {
						if (test == W[h]) {
                            system("cls");
                            cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
							cout << "\n Wrong But Already Entered!";
							br = true;
							break;
						}
					}
					if (!br) {
						W[L] = test;
						L++;
					}
				}
				if (br) {
                    cout << "\n\n Wrong Entered Letters: ";
					for (int h = 0; h < 10; h++) {
						if (W[h] != '.')
							cout << W[h] << " ";
						if (W[h] == '.')
							cout << "- ";
					}
					cout << endl;
                    HangMan(n);
                    cout << "\n\n\t";
					for (int j = 0; j < N; j++) {
						if (C[j])
							cout << " " << A[j];
						else
							cout << " -";
					}
					cout << endl;
					continue;
				}
                cout << "\n\n\t";
				if (lll) {
					system("cls");
					cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
					cout << "\n Correct Letter!";
                    cout << "\n\n Wrong Entered Letters: ";
					for (int h = 0; h < 10; h++) {
						if (test == W[h]) {
							br = true;
							break;
						}
					}
                    for (int h = 0; h < 10; h++) {
                        if (W[h] != '.')
                            cout << W[h] << " ";
                        if (W[h] == '.')
                            cout << "- ";
                    }
                    cout << endl;
					HangMan(n);
					cout << "\n\n\t";
					for (int j = 0; j < N; j++) {
						if (C[j])
							cout << " " << A[j];
						else
							cout << " -";
					}
					cout << endl;
				}
                if (C[0] && C[1] && C[2] && C[3] && C[4] && C[5] && C[6]) {
                    Score += 100*N;
                    cout << "\n Congratulation! I Knew You Can Do it... (+" << 100*N << " Score)\n";
                    break;
                }
				if (!lll) {
					system("cls");
					Score -= N;
					cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
					cout << "\n Wrong Letter!";
					for (int h = 0; h < 10; h++) {
						if (test == W[h]) {
							cout << "\n\n Wrong Entered Letters: ";
							br = true;
							break;
						}
					}
                    if (br) {
                        for (int h = 0; h < 10; h++) {
                            if (W[h] != '.')
                                cout << W[h] << " ";
                            if (W[h] == '.')
                                cout << "- ";
                        }
                        cout << endl;
                    }
					n++;
					HangMan(n);
					if (n != 10) {
                        cout << "\n\n\t";
                        for (int j = 0; j < N; j++) {
                            if (C[j])
                                cout << " " << A[j];
                            else
                                cout << " -";
                        }
                        cout << endl;
					}
					if (n == 10) {
						Score -= 10*N;
						cout << "\n\n You've Been Hanged HaHaHa! (-" << 10*N << " Score)\n it's: ";
						for (int j = 0; j < N; j++) {
							cout << A[j];
						}
						break;
					}
				}
			}
		}
		if (menu != 'c' && menu != 'C' && menu != 'b' && menu != 'B' && menu != 'a' && menu != 'A') {
			cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
			cout << "\n Only Choose Between \"a\" or \"b\" or \"c\" OK? Now Try Again!\n";
			continue;
		}
		cout << "\n\n ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
		while (menu != 'N' | menu != 'n' | menu != 'Y' | menu != 'y') {
			cout << "\n Do You Want to Play Again? (Enter Y For YES & N For NO)\n => ";
			cin >> menu;
			if (menu == 'N' | menu == 'n') {
				Mehrshad = false;
				break;
			}
			if (menu == 'Y' | menu == 'y') {
				system("cls");
				cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
				break;
			}
			if (menu != 'N' | menu != 'n' | menu != 'Y' | menu != 'y') {
				system("cls");
				cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
				cout << "\n Just Enter Y or N Nothing Else. OK?";
				cout << endl;
			}
		}
	} while (Mehrshad);
	system("cls");
	cout << "\t\t\t\t\t\t\t\t\t\t\t\tScore: " << Score;
	cout << "\n\n\n\n\n\t\t\t\t\t\t   Good Bye!\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	getch();
	return 0;
}
