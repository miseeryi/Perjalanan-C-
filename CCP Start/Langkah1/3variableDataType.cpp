#include <iostream>
using namespace std;

int main(){
    string nama;
    string nim;
    int umur;
    char kelas;
    float nilai;

    cout << "Masukkan nama: ";
    getline (cin, nama);
    cout << "Masukkan NIM   : "; cin >> nim;
    cout << "Masukkan umur  : "; cin >> umur;
    cout << "Masukkan kelas : "; cin >> kelas;
    cout << "Masukkan nilai : "; cin >> nilai;

    cout << endl << endl;
    cout << "Berikut Data yang anda inputkan: " << endl;
    cout << "Nama   : " << nama << endl;   
    cout << "NIM    : " << nim << endl;
    cout << "Umur   : " << umur << endl;
    cout << "Kelas  : " << kelas << endl;
    cout << "Nilai  : " << nilai << endl;
}