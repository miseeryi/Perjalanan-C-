#include <iostream>
using namespace std;

int main(){
    int var = 20;       // Deklarasi variabel integer
    int *ptr;           // Deklarasi pointer ke integer

    ptr = &var;         // Menyimpan alamat var dalam pointer

    // Menampilkan nilai var
    cout << "Nilai var: " << var << endl;

    // Menampilkan alamat var
    cout << "Alamat var: " << &var << endl;

    // Menampilkan nilai yang disimpan dalam pointer (alamat var)
    cout << "Nilai yang disimpan dalam ptr (alamat var): " << ptr << endl;

    // Menampilkan nilai yang ditunjuk oleh pointer (nilai var)
    cout << "Nilai yang ditunjuk oleh ptr: " << *ptr << endl;

    

    cout << endl << endl;
    int angka;
    cin >> angka;

    int *point;
    point = &angka;
    cout << angka <<endl;
    cout << &angka << endl;
    cout << point << endl;
    cout << *point << endl;
}