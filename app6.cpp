#include <iostream>
#include <string>
using namespace std;

struct alamatDetail
{
    string Desa;
    string Kota;
};

struct mahasiswa
{
    string nama;
    alamatDetail alamat;
    int umur;
};

int main()
{
    //Deklarasi variabel struct
    mahasiswa mhs;
    //Mengisi data
    cout << "Isikan Data Nama : ";
    getline(cin, mhs.nama);
    cout << "Isikan Data Kota : ";
    getline(cin, mhs.alamat.Kota);
    cout << "Isikan Data Desa : ";
    getline(cin, mhs.alamat.Desa);
    cout << "Isikan Data Usia : ";
    cin >> mhs.umur;

    cout << "Data Mahasiswa" << endl;
    cout << "Nama : " << mhs.nama << endl;
    cout << "Kota : " << mhs.alamat.Kota << endl;
    cout << "Desa : " << mhs.alamat.Desa << endl;
    cout << "Usia : " << mhs.umur << endl;
}