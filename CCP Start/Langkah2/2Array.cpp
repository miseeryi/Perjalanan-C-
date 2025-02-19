#include <iostream>
using namespace std;

int main() {
    int umur[10];
    int n;
    int total = 0;
    
    for (int i = 0; i < 10; i++){
        cout << "Masukkan Umur : "; cin>>n;
        total += n;
    }

       
    cout << "Total semua umur : "<< total << endl;
    

    float hasil;
    hasil = total / 10;
    cout << "Rata Rata umur adalah : " << hasil;

}