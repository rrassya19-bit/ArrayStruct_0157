#include <iostream>
#include <string>
using namespace std;

//Struct Alamat
struct detailAlamat
{
    string desa;
    string kota;
};

//Struct Orang
struct Orang 
{
    string nama;     // Menyimpan nama (teks)
    detailAlamat alamat;   // Menyimpan alamat (teks)
    int umur;        // Menyimpan umur (angka bulat)
};

int main() {
    Orang mhs[3];

    for (int i = 0; i < 2; i++)
    {
        cout << "Nama : ";
        getline(cin, mhs[i].nama);          // Masukkan nama ke dalam struct

        cout << "Desa : ";
        getline(cin, mhs[i].alamat.desa);   // Masukkan desa ke dalam struct

        cout << "Kota : ";
        getline(cin, mhs[i].alamat.kota);   // Masukkan kota ke dalam struct

        cout << "Umur : ";
        cin >> mhs[i].umur;                 // Masukkan umur ke dalam struct
        cin.ignore();                       // Membersihkan buffer setelah membaca angka

        cout << endl;                      // Baris baru untuk tampilan lebih rapi
    }

    for (int i = 0; i < 2; i++)
    {
        cout << "Data Penduduk : " << endl;
        cout << "Nama : " << mhs[i].nama << endl;
        cout << "Alamat : " << mhs[i].alamat.desa << ", " << mhs[i].alamat.kota << endl;
        cout << "Umur : " << mhs[i].umur << endl;
        cout << endl;                      // Baris baru untuk tampilan lebih rapi
    }
}