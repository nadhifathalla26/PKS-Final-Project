// Muhammad Nadhif Athalla
// 119140209
// TPB 43
// Tugas Besar Pengantar Komputer dan Software 
// Materi Matriks Matematika

#include<iostream>
#include<math.h>
using namespace std;

int main (){
	int n;
	cout << "---PROGRAM PERHITUNGAN DETERMINAN MATRIKS---"<<endl;
	cout << "1.Matriks Ordo 3x3"<<endl;
	cout << "2.Matriks Ordo 2x2"<<endl;
	cout << "Masukkan jumlah ordo matriks [1/2] = ";
	cin >> n;
	
	int matriks3[3][3];
	int matriks2[2][2];
	int det3;
	int det2;
	
	if (n==1){
		cout <<endl<< "Masukkan matriks ordo 3x3"<<endl;
		for (int i=1;i<=3;i++){
			for (int j=1;j<=3;j++){
				cout << "Input matriks baris ke "<<i<<" kolom ke "<<j<< " = ";
				cin >> matriks3[i-1][j-1];
			}
			cout << endl;
		}
		for (int i=1;i<=3;i++){
			cout << endl<<" ";
			for (int j=1;j<=3;j++){
				cout << matriks3[i-1][j-1]<<" ";
				det3=((matriks3[0][0]*matriks3[1][1]*matriks3[2][2])+(matriks3[0][1]*matriks3[1][2]*matriks3[2][0])+(matriks3[0][2]*matriks3[1][0]*matriks3[2][1]))-
				(matriks3[0][2]*matriks3[1][1]*matriks3[2][0])-(matriks3[0][0]*matriks3[1][2]*matriks3[2][1])-(matriks3[0][1]*matriks3[1][0]*matriks3[2][2]);
			}
		}
		cout << endl <<endl;
		cout << "Determinan dari matriks ordo 3x3 ini adalah = "<<det3;
	}
	else if (n==2){
		cout <<endl<< "Masukkan matriks ordo 2x2"<<endl;
		for (int i=1;i<=2;i++){
			for (int j=1;j<=2;j++){
				cout << "Input matriks baris ke "<<i<<" kolom ke "<<j<< " = ";
				cin >> matriks2[i-1][j-1];
			}
			cout << endl;
		}
		for (int i=1;i<=2;i++){
			cout << endl << " ";
			for (int j=1;j<=2;j++){
				cout << matriks2[i-1][j-1]<<" ";
				det2=(matriks2[0][0]*matriks2[1][1])-(matriks2[0][1]*matriks2[1][0]);
			}
		}
		cout << endl <<endl;
		cout << "Determinan dari matriks ordo 2x2 ini adalah = "<<det2;				
	}
	else {
		cout << endl;
		cout << "Silahkan Ulang Kembali"<<endl;
	}
	return 0;
}
