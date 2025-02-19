#include <iostream>
using namespace std;

int pertambahan (int a, int b) {
    return a + b;
}

int pengurangan (int a, int b) {
    return a - b;
}

int perkalian (int a, int b) {
    return a * b;
}

int pembagian (int a, int b) {
    return a / b;
}

int main() {
    int pilihan, a, b;
    char  ulang;
    do {
        cout << "Operator Sederhana" << endl;
        cout << "==================" << endl;
        cout << "1. Pertambahan\n2. Pengurangan\n3. Perkalian\n4. Pembagian\n";
        cout << "Masukkan pilihan: "; cin >> pilihan;

        if (pilihan == 1) {
            cout << "PERTAMBAHAN" << endl;
            cout << "Masukkan angka pertama: "; cin >> a;
            cout << "Masukkan angka kedua: "; cin >> b;
            cout << "Hasil pertambahan: " << pertambahan(a, b) << endl;
        } else if (pilihan == 2) {
            cout << "PENGURANGAN" << endl;
            cout << "Masukkan angka pertama: "; cin >> a;
            cout << "Masukkan angka kedua: "; cin >> b; 
            cout << "Hasil pengurangan: " << pengurangan(a, b) << endl;
        } else if (pilihan == 3) {
            cout << "PERKALIAN" << endl;
            cout << "Masukkan angka pertama: "; cin >> a;
            cout << "Masukkan angka kedua: "; cin >> b;
            cout << "Hasil perkalian: " << perkalian(a, b) << endl;
        } else if (pilihan == 4) {
            cout << "PEMBAGIAN" << endl;
            cout << "Masukkan angka pertama: "; cin >> a;
            cout << "Masukkan angka kedua: "; cin >> b;
            cout << "Hasil pembagian: " << pembagian(a, b) << endl;
        }
        else {
            cout << "input tidak valid" << endl;
        }
        cout << "Ulang program? (y/n): "; cin >> ulang;
        system("cls");
    } while (ulang == 'y' || ulang == 'Y');
}