#include <iostream>
using namespace std;

struct DetailAlamat {
	char desa[20];
	char kota[20];
};

struct Mahasiswa {
	char NIM[20];
	char Nama[20] ;
	DetailAlamat Alamat;
	int Umur;
};

int main() {
	Mahasiswa mhs[3];

	for (int i = 0; i < 3; i++) {
		cout << "\nMasukkan NIM : ";
		cin.getline(mhs[i].NIM, 20);
		cout << "Masukkan Nama : ";
		cin.getline(mhs[i].Nama, 20);
		cout << "Alamat" << endl;
		cout << "\tMasukkan Desa : ";
		cin.getline(mhs[i].Alamat.desa, 20);
		cout << "\tMasukkan Kota : ";
		cin.getline(mhs[i].Alamat.kota, 20);
		cout << "Masukkan Umur : ";
		cin >> mhs[i].Umur;
		cin.ignore(1, '\n');
	}

	for (int i = 0; i < 3; i++) {
		cout << "\nNIM : " << mhs[i].NIM;
		cout << "\nNama : " << mhs[i].Nama;
		cout << "\nAlamat" << endl;
		cout << "\tDesa : " << mhs[i].Alamat.desa << endl;
		cout << "\tKota : " << mhs[i].Alamat.kota;
		cout << "\nUmur : " << mhs[i].Umur << endl;
	}
}