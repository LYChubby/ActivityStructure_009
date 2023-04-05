#include <iostream>
using namespace std;

struct DetailAlamat {
	string desa;
	string kota;
};

struct Mahasiswa {
	string NIM;
	string Nama;
	DetailAlamat alamat;
	int Umur;
};

int main() {
	Mahasiswa mhs;

	cout << "Masukkan NIM : ";
	cin >> mhs.NIM;
	cout << "Masukkan Nama : ";
	cin >> mhs.Nama;
	cout << "Alamat" << endl;
	cout << "\tMasukkan Desa : ";
	cin >> mhs.alamat.desa;
	cout << "\tMasukkan Kota : ";
	cin >> mhs.alamat.kota;
	cout << "Masukkan Umur : ";
	cin >> mhs.Umur;

	cout << "\nNIM : " << mhs.NIM;
	cout << "\nNama : " << mhs.Nama;
	cout << "\nAlamat" << endl;
	cout << "\tDesa : " << mhs.alamat.desa << endl;
	cout << "\tKota : " << mhs.alamat.kota;
	cout << "\nUmur : " << mhs.Umur;

}