#include <iostream>
using namespace std;

struct Mahasiswa {
    string nama;
    int nim;
    string jurusan;
};

int main() {
    
    int n;
    cout << "Masukkan Jumlah mahasiswa: "; cin >> n;
    
    Mahasiswa mhs[n];
    for (int i = 0; i < n; i++) {
        cout << "input data mahasiswa : " << i+1 << endl;
        cout << "Masukkan nama      : "; cin >> mhs[i].nama;
        cout << "Masukkan NIM       : "; cin >> mhs[i].nim;
        cout << "Masukkan jurusan   : "; cin >> mhs[i].jurusan;
        cout << endl;
    }

    for (int i = 0; i < n; i++) {
        cout << "Mahasiswa ke-" << i+1 << endl;
        cout << "Nama   : " << mhs[i].nama << endl;
        cout << "NIM    : " << mhs[i].nim << endl;
        cout << "Jurusan: " << mhs[i].jurusan << endl;
        cout << endl;
    }
    return 0;
}