#include <iostream>
using namespace std;

//Struct Orang
struct Orang {
    string nama;     // Menyimpan nama (teks)
    string alamat;   // Menyimpan alamat (teks)
    int umur;        // Menyimpan umur (angka bulat)
};

int main() {
    // Deklarasi variabel bertipe struct Orang
    Orang mhs;

    // Input data
    cout << "Nama : ";
    cin >> mhs.nama;          // Masukkan nama ke dalam struct

    cout << "Alamat : ";
    cin >> mhs.alamat;        // Masukkan alamat ke dalam struct

    cout << "Umur : ";
    cin >> mhs.umur;          // Masukkan umur ke dalam struct

    cout << endl;             // Baris baru untuk tampilan lebih rapi

    // Tampilkan data yang sudah diinput
    cout << "Nama : " << mhs.nama << endl;
    cout << "Alamat : " << mhs.alamat << endl;
    cout << "Umur : " << mhs.umur << endl;
}