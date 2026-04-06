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
}