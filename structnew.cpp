#include <iostream>
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
    // Deklarasi variabel bertipe struct Orang
    Orang mhs;

    // Input data
    cout << "Nama : ";
    cin >> mhs.nama;          // Masukkan nama ke dalam struct

    cout << "Alamat : ";
    cin >> mhs.alamat.desa;
    cin >> mhs.alamat.kota;

    cout << "Umur : ";
    cin >> mhs.umur;          // Masukkan umur ke dalam struct

    cout << endl;             // Baris baru untuk tampilan lebih rapi

    // Tampilkan data yang sudah diinput
    cout << "Nama : " << mhs.nama << endl;
    cout << "Alamat : " << mhs.alamat.desa << ", " << mhs.alamat.kota << endl;
    cout << "Umur : " << mhs.umur << endl;
}