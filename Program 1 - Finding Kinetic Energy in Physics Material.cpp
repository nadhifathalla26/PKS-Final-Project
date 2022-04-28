// Muhammad Nadhif Athalla
// 119140209
// TPB 43
// Tugas Besar Pengantar Komputer dan Software 
// Materi Energi Kinetik Fisika

#include<iostream>
#include<math.h>
using namespace std;

int main (){
	int n;
	cout << "---PROGRAM PENCARIAN NILAI ENERGI KINETIK DARI SUATU BENDA---"<<endl;
	cout << "Banyak Percobaan = "; 
	cin >> n;
	float mass[n],velocity[n],vel[n],kinetic[n];
	float m[n], v[n], ek[n];
	int besaran[n];
	
	cout << endl;
	cout << "---PILIHAN BESARAN---"<<endl;
	cout << "1.Energi Kinetik" <<endl;
	cout << "2.Massa Benda" <<endl;
	cout << "3.Kecepatan Benda"<<endl;
	cout << endl;
	
	for (int i=0;i<n;i++){
		cout << "Percobaan ke-"<<i+1<<endl;
		cout << "Masukkan besaran yang ingin dicari [1/2/3] = ";
		cin >> besaran[i];
		if (besaran[i]==1){
			cout << "Masukkan nilai massa benda = ";
			cin >> m[i];
			cout << "Masukkan nilai kecepatan benda = ";
			cin >> v[i];
			kinetic[i]=0.5*m[i]*v[i]*v[i];
		}
		else if (besaran[i]==2){
			cout << "Masukkan energi kinetik benda = ";
			cin >> ek[i];
			cout << "Masukkan kecepatan benda = ";
			cin >> v[i];
			mass[i]=(2*ek[i])/(v[i]*v[i]);
		}
		else if (besaran[i]==3){
			cout << "Masukkan energi kinetik benda = ";
			cin >> ek[i];
			cout << "Masukkan massa benda = ";
			cin >> m[i];
			vel[i]=(2*ek[i])/(m[i]);
			velocity[i]=sqrt(vel[i]);
		}
		else {
			cout << endl;
		}
		cout << endl;
	}
	
	for (int i=0;i<n;i++){
		cout << "Percobaan ke-"<<i+1<<" = "<<endl;
		if(besaran[i]==1){
			cout << "Nilai Energi Kinetik adalah = "<<kinetic[i]<<" Joule";
		}
		else if (besaran[i]==2){
			cout << "Nilai Massa Benda adalah = "<<mass[i]<<" KiloGram";
		}
		else if (besaran[i]==3){
			cout << "Nilai Kecepatan benda adalah = "<<velocity[i]<<" m/s";			
		}
		else {
			cout << "Silahkan diulang kembali"<<endl;
		}
		cout << endl;
	}
	return 0;
}
