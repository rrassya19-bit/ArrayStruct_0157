#include <iostream>
using namespace std;

int main() {
    // Deklarasi array dengan inisialisasi
    int aku[5] = {10, 20, 30, 40, 50};

    // Deklarasi array tanpa inisialisasi (hanya cadangan)
    int kamu[5];

    // Tampilkan data awal array aku
    cout << "Data pada index 1 = " << aku[1] << endl;

    // Ganti nilai index ke 1
    aku[1] = 200;

    // Tampilkan data setelah diubah
    cout << "Data pada index 1 = " << aku[1] << endl;

    // Mengisi Satu per Satu dengan input dari user
    cout << "Data index 0 = ";
    cin >> kamu[0];
    
    cout << "Data index 1 = ";
    cin >> kamu[1];
    
    cout << "Data index 2 = ";
    cin >> kamu[2];
    
    cout << "Data index 3 = ";
    cin >> kamu[3];
    
    cout << "Data index 4 = ";
    cin >> kamu[4];
    cout << endl;

    // Mengisi data dengan menggunakan perulangan for
    cout << "Data pertama = " << kamu[0] << endl;
    cout << "Data kedua = " << kamu[1] << endl;
    cout << "Data ketiga = " << kamu[2] << endl;
    cout << "Data keempat = " << kamu[3] << endl;
    cout << "Data kelima = " << kamu[4] << endl;
    cout << endl;

    //mengisi dengan perulangan for
    for (int i = 0; i < 4; i++) {
        cout << "Data index ke-" << i << " = ";
        cin >> kamu[i];
    }
    cout << endl;

    //menampilkan dengan menggunakan perulangan for
    for (int i = 0; i < 4; i++) {
        cout << "Data ke-" << i << " = " << kamu[i] << endl;
    }
}