#include <iostream>
#include<iomanip> //SETW
#include<conio.h> //GET
#include<stdlib.h> //CLS
using namespace std;
void read_matrix(int M[][100], int x, int y, char L) {  //baraye khandan matrix ba addad sahih
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			cout << L << "(" << i + 1 << "," << j + 1 << ") :";
			cin >> M[i][j];
		}
	}
}
void read_matrix_double(double M[][100], int x, int y, char L) {      //baraye khandan matrix ba addad aashariee
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			cout << L << "(" << i + 1 << "," << j + 1 << ") :";
			cin >> M[i][j];
		}
	}
}
void print_matrix(int M[][100], int x, int y) {     //baraye chape matrix ba addad sahih
	for (int j = 0; j < y; j++)
		cout << "_______";
	cout << endl;
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			cout << setw(4) << M[i][j] << "  |";
		}
		cout << endl;
		for (int i = 0; i < y; i++)
			cout << "______|";
		cout << endl;
	}
}
void print_matrix_double(double M[][100], int x, int y) { //baraye chape matrix ba addad aashariee
	for (int j = 0; j < y; j++)
		cout << "_______";
	cout << endl;
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			cout << setw(4) << M[i][j] << "  |";
		}
		cout << endl;
		for (int i = 0; i < y; i++)
			cout << "______|";
		cout << endl;
	}
}
void print_matrix_reverse(double M[][100], int x, int y) {  //baraye chape matrix inverse
	for (int j = 0; j < x; j++)
		cout << "_______";
	cout << endl;
	for (int i = 0; i < x; i++) {
		for (int j = x; j < y; j++) {
			cout << fixed << setprecision(1) << setw(4) << M[i][j] << "  |";
		}
		cout << endl;
		for (int i = 0; i < x; i++)
			cout << "______|";
		cout << endl;
	}
}
void multi(int A[][100], int B[][100], int Multi[][100], int x1, int y1, int y2) {  //zarb matrix
	for (int i = 0; i < x1; i++)
		for (int j = 0; j < y2; j++)
			for (int k = 0; k < y1; k++)
				Multi[i][j] += A[i][k] * B[k][j];
}
void sum(int A[][100], int B[][100], int Sum[][100], int x1, int y1) {  //+ kardan matrix
	for (int i = 0; i < x1; i++) {
		for (int j = 0; j < y1; j++) {
			Sum[i][j] = A[i][j] + B[i][j];
		}
	}
}
int main() {
	char entekhabe_menu[200];
	int n = 0;
	do {
		cout << "a) Multiply Of Two Matrixes" << endl;
		cout << "b) Sum Of Two Matrixes" << endl;
		cout << "c) Determinant Of Matrix" << endl;
		cout << "d) Reduced Row Echelon Form" << endl;
		cout << "e) Reverse Of Matrix" << endl;
		cout << "f) Exit" << endl;
		cin >> entekhabe_menu[n];
		system("cls");
		switch (entekhabe_menu[n]) {
		case 'a': {
		case 'A':
			char key;
			char L;
			int  ma1, na1, ma2, na2;
			int A1[ma1][100];
			int A2[ma2][100];
			int matMulti[ma1][100];
			cout << "enter matrix A length :";
			cin >> ma1;
			cout << "enter matrix A width :";
			cin >> na1;
			cout << "enter matrix B length :";
			cin >> ma2;
			cout << "enter matrix B width :";
			cin >> na2;
			if (na1 != ma2) {
				system("cls");
				cout << "error!!" << endl;
				break;
			}
			system("cls");
			L = 'A';
			read_matrix(A1, ma1, na1, L);
			system("cls");
			L = 'B';
			read_matrix(A2, ma2, na2, L);
			system("cls");
			cout << "Matrix A :" << endl;   //age eshtebah vared kard dobare vared kone
			print_matrix(A1, ma1, na1);
			cout << "is it right? Y/N" << endl;
			cin >> key;
			if (key != 'y' && key != 'Y') {
				for (int i = 0; i < ma1; i++) {
					for (int j = 0; j < na1; j++) {
						cout << "A(" << i + 1 << "," << j + 1 << ") :";
						cin >> A1[i][j];
					}
				}
			}
			system("cls");
			cout << "Matrix B :" << endl;     //age eshtebah vared kard dobare vared kone
			print_matrix(A2, ma2, na2);
			cout << "is it right? Y/N" << endl;
			cin >> key;
			if (key != 'y' && key != 'Y') {
				for (int i = 0; i < ma2; i++) {
					for (int j = 0; j < na2; j++) {
						cout << "A(" << i + 1 << "," << j + 1 << ") :";
						cin >> A2[i][j];
					}
				}
			}
			system("cls");
			for (int i = 0; i < ma1; i++) {           //meghdar haye matrix jadid ro 0 gharar bede
				for (int j = 0; j < na2; j++) {
					matMulti[i][j] = 0;
				}
			}
			multi(A1, A2, matMulti, ma1, na1, na2);
			cout << "Matrix ans :" << endl;
			print_matrix(matMulti, ma1, na2);
			cout << "press any key to continue ..." << endl;
			getch();
			system("cls");
			break; }
		case 'b': {
		case 'B':
			char L, key;
			int mb, nb;
			cout << "enter length :";
			cin >> mb;
			cout << "enter width :";
			cin >> nb;
			system("cls");
			L = 'A';
			int B1[mb][100];
			read_matrix(B1, mb, nb, L);
			system("cls");
			L = 'B';
			int B2[mb][100];
			read_matrix(B2, mb, nb, L);
			system("cls");
			cout << "Matrix A :" << endl;
			print_matrix(B1, mb, nb);
			cout << "is it right? Y/N" << endl;
			cin >> key;
			if (key != 'y' && key != 'Y') {
				for (int i = 0; i < mb; i++) {
					for (int j = 0; j < nb; j++) {
						cout << "A(" << i + 1 << "," << j + 1 << ") :";
						cin >> B1[i][j];
					}
				}
			}
			system("cls");
			cout << "Matrix B :" << endl;
			print_matrix(B2, mb, nb);
			cout << "is it right? Y/N" << endl;
			cin >> key;
			if (key != 'y' && key != 'Y') {
				for (int i = 0; i < mb; i++) {
					for (int j = 0; j < nb; j++) {
						cout << "B(" << i + 1 << "," << j + 1 << ") :";
						cin >> B2[i][j];
					}
				}
			}
			system("cls");
			int Sum[mb][100];
			sum(B1, B2, Sum, mb, nb);
			cout << "Matrix ans :" << endl;
			print_matrix(Sum, mb, nb);
			cout << "press any key to continue ..." << endl;
			getch();
			system("cls");
			break; }
		case 'c': {
		case 'C':
			double a, b;
			bool test = true;
			bool test2 = true;
			char L, key;
			int m, abc, satri_ke_deraye_avalesh_0_nist, arayee0va0 = 1;
			double temp = 0;                                     //baraye jabejayee satr 1 va n
			double Determinant = 1;
			double C[m][100];
			cout << "enter length :";
			cin >> m;
			system("cls");
			L = 'A';
			read_matrix_double(C, m, m, L);
			system("cls");
			cout << "Matrix A :" << endl;
			print_matrix_double(C, m, m);
			cout << "is it right? Y/N" << endl;
			cin >> key;
			if (key != 'y' && key != 'Y') {
				for (int i = 0; i < m; i++) {
					for (int j = 0; j < m; j++) {
						cout << "A(" << i + 1 << "," << j + 1 << ") :";
						cin >> C[i][j];
					}
				}
			}
			if (C[0][0] == 0) {                                                //barresi inke avalin deraye barabar 0 nabashe
				for (int j = 0; j < 3; j++) {                                 //
					if (test2) {                                             //
						for (int k = 0; k < 3; k++) {                       //
							if (C[k][0] != 0) {                            //
								satri_ke_deraye_avalesh_0_nist = k;       //
								test2 = false;                           //
								break;                                  //
							}                                          //
						}                                             //
					}                                                //
					temp = C[0][j];                                 //
					C[0][j] = C[satri_ke_deraye_avalesh_0_nist][j];//
					C[satri_ke_deraye_avalesh_0_nist][j] = temp;  //
					arayee0va0 = -1;                             //
				}                                               //
			}                                                  //
			for (int i = 0; i < m; i++) {
				for (int j = 0; j < m; j++) {
					test = true;
					if (i > j) {
						a = C[i][j];
						for (int l = i - 1; test; l--) {   //age deraye balayee barabar 0 bood ba satr haye ghabl tar karo anjam bede
							if (C[l][j] != 0) {           //
								test = false;            //
								abc = l;                //
							}                          //
						}                             //
						b = C[abc][j];
						for (int k = j; k < m; k++)
							C[i][k] = -((C[abc][k] / b) * a) + C[i][k];
					}
				}
			}
			for (int i = 0; i < m; i++) {
				Determinant *= C[i][i];
			}
			cout << "Determinant is :" << Determinant * arayee0va0 << "\n\n" << endl;
			cout << "press any key to continue ..." << endl;
			getch();
			system("cls");
			break;
		}
		case 'd': {
		case 'D':
			double a;
			char L, key;
			int m, n;
			cout << "enter length :";
			cin >> m;
			cout << "enter width :";
			cin >> n;
			system("cls");
			L = 'A';
			double D[m][100];
			read_matrix_double(D, m, n, L);
			system("cls");
			cout << "Matrix A :" << endl;
			print_matrix_double(D, m, n);
			cout << "is it right? Y/N" << endl;
			cin >> key;
			if (key != 'y' && key != 'Y') {
				for (int i = 0; i < m; i++) {
					for (int j = 0; j < n; j++) {
						cout << "A(" << i + 1 << "," << j + 1 << ") :";
						cin >> D[i][j];
					}
				}
			}
			for (int i = 0; i < m; i++) {
				bool ghotr = true;
				for (int j = 0; j < n; j++) {
					if (ghotr) {
						a = D[i][i];
						if(a!=0)
						for (int k = 0; k < n; k++) {
							D[i][k] /= a;
							ghotr = false;
						}
					}
					if (i < j) {
						a = D[j][i];
						for (int k = 0; k < n; k++) {
							D[j][k] += (-D[i][k] * a);
						}
					}
					if (i > j) {
						a = D[j][i];
						for (int k = 0; k < n; k++) {
							D[j][k] += (-D[i][k] * a);
						}
					}
				}
			}
			print_matrix_double(D, m, n);
			cout << "press any key to continue ..." << endl;
			getch();
			system("cls");
			break; }
		case 'e': {
		case 'E':
			double a;
			char L, key;
			int m;
			cout << "enter length :";
			cin >> m;
			system("cls");
			L = 'A';
			double E[m][100];
			read_matrix_double(E, m, m, L);
			system("cls");
			cout << "Matrix A :" << endl;
			print_matrix_double(E, m, m);
			cout << "is it right? Y/N" << endl;
			cin >> key;
			if (key != 'y' && key != 'Y') {
				for (int i = 0; i < m; i++) {
					for (int j = 0; j < m; j++) {
						cout << "A(" << i + 1 << "," << j + 1 << ") :";
						cin >> E[i][j];
					}
				}
			}
			int mi;                                    //ezafe kardan matrix jadid be matrix asli
			mi = m * 2;                               //
			for (int i = 0; i < m; i++) {            //
				for (int j = m; j < mi; j++) {      //
					if (i + m == j) {              //
						E[i][j] = 1;              //
					}                            //
					else {                      //
						E[i][j] = 0;           //
					}                         //
				}                            //
			}                               //
			for (int i = 0; i < m; i++) {
				bool ghotr = true;
				for (int j = 0; j < m; j++) {
					if (ghotr) {
						a = E[i][i];
						for (int k = 0; k < 2 * m; k++) {
							E[i][k] /= a;
							ghotr = false;
						}
					}
					if (i < j) {
						a = E[j][i];
						for (int k = 0; k < 2 * m; k++) {
							E[j][k] += (-E[i][k] * a);
						}
					}
					if (i > j) {
						a = E[j][i];
						for (int k = 0; k < 2 * m; k++) {
							E[j][k] += (-E[i][k] * a);
						}
					}
				}
			}
			cout <<"reverse is :"<<endl;
			print_matrix_reverse(E, m, mi);
			cout << "press any key to continue ..." << endl;
			getch();
			system("cls");
			break; }
		case 'f': {
		case 'F':
			break; }
		default: {
			cout << "wrong letter! Try again" << endl;
		}
		}
		n++;
	} while (entekhabe_menu[n - 1] != 'F' && entekhabe_menu[n - 1] != 'f');
	for (int i = 0; i < n; i++) {
		cout << entekhabe_menu[i];
		if (i != n - 1)
			cout << "-";
	}
	cout << endl << "Good Bye";
	getch();
	return 0;
}
