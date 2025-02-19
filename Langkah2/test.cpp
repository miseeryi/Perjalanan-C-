#include <iostream>
using namespace std;


int main(){
    int n;
    cout << "Masukkan angka: "; cin >> n;

    for (int i=1; i<n; i++){
        if (i%2==0){
            cout << i << " adalah genap" << endl;
        }
        else {
            cout << i << " adalah ganjil" << endl;
        }
    }
    
}