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

int faktorial (int a) {
    if (a == 0) {
        return 1;
    } else {
        return a * faktorial(a - 1);
    }
}

int deretGanjil (int n) {
    if (n == 0) {
        return 0;
    } else {
        return deretGanjil(n - 1) + (n % 2 != 0);
    }
}

int deretFibonacci (int n) {
    if (n == 1 || n == 2) {
        return 1;
    } else {
        return deretFibonacci(n - 1) + deretFibonacci(n - 2);
    }
}

int deretAngka (int n) {
    if (n == 0) {
        return 0;
    } else {
        return deretAngka(n - 1) + n;
    }
}

int DeretPrima (int n) {
    if (n == 1) {
        return 1;
    } else {
        return DeretPrima(n - 1) + (n % 2 != 0 && n % 3 != 0 && n % 5 != 0);
    }
}

int deretGenap (int n) {
    if (n == 0) {
        return 0;
    } else {
        return deretGenap(n - 1) + (n % 2 == 0);
    }
}

int main() {
    int pilihan, a, b;
    cout << "Operator Sederhana" << endl;
    cout << "==================" << endl;
    cout << "1. Pertambahan\n2. Pengurangan\n3. Perkalian\n4. Pembagian\n5. Faktorial\n6. Deret Ganji\nl7. Deret Fibonacci\n8. Deret Angka\n9. Deret Prima\n10. Deret Genap" << endl;
    cout << "Masukkan pilihan: "; cin >> pilihan;

    if (pilihan == 1) {
        cout << "PERTAMBAHAN" << endl;
        cout << "Masukkan angka pertama: "; cin >> a;
        cout << "Masukkan angka kedua: "; cin >> b;
        cout << "Hasil pertambahan: " << pertambahan(a, b) << endl;
    } 
    else if (pilihan == 2) {
        cout << "PENGURANGAN" << endl;
        cout << "Masukkan angka pertama: "; cin >> a;
        cout << "Masukkan angka kedua: "; cin >> b;
        cout << "Hasil pengurangan: " << pengurangan(a, b) << endl;
    } 
    else if (pilihan == 3) {
        cout << "PERKALIAN" << endl;
        cout << "Masukkan angka pertama: "; cin >> a;
        cout << "Masukkan angka kedua: "; cin >> b;
        cout << "Hasil perkalian: " << perkalian(a, b) << endl;
    } 
    else if (pilihan == 4) {
        cout << "PEMBAGIAN" << endl;
        cout << "Masukkan angka pertama: "; cin >> a;
        cout << "Masukkan angka kedua: "; cin >> b;
        cout << "Hasil pembagian: " << pembagian(a, b) << endl;
    } 
    else if (pilihan == 5) {
        cout << "FAKTORIAL" << endl;
        cout << "Masukkan angka: "; cin >> a;
        cout << "Hasil faktorial: " << faktorial(a) << endl;
    } 
    else if (pilihan == 6) {
        cout << "DERET GANJIL" << endl;
        cout << "Masukkan angka: "; cin >> a;
        cout << "Hasil deret ganjil: " << deretGanjil(a) << endl;
    } 
    else if (pilihan == 7) {
        cout << "DERET FIBONACCI" << endl;
        cout << "Masukkan angka: "; cin >> a;    
        cout << "Hasil deret fibonacci: " << deretFibonacci(a) << endl;
    } 
    else if (pilihan == 8) {
        cout << "DERET ANGKA" << endl;
        cout << "Masukkan angka: "; cin >> a;
        cout << "Hasil deret angka: " << deretAngka(a) << endl;
    } 
    else if (pilihan == 9) {
        cout << "DERET PRIMA" << endl;
        cout << "Masukkan angka: "; cin >> a;
        cout << "Hasil deret prima: " << DeretPrima(a) << endl;
    } 
    else if (pilihan == 10) {
        cout << "DERET GENAP" << endl;
        cout << "Masukkan angka: "; cin >> a;
        cout << "Hasil deret genap: " << deretGenap(a) << endl;
    } 
    else {
        cout << "Pilihan tidak tersedia" << endl;
    }
    return 0;
}