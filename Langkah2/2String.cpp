#include <iostream>
#include <string>
using namespace std;

int main(){
     string sapa = "Halo!, ";

     cout << sapa <<endl;

    string nama = "Alfaraby";
    string sayHi = " Hallo Dunia";

    string greeting = sapa + nama + sayHi;

    cout << greeting << endl;

    cout << "Length of greeting: " << sapa.length() << endl;

    cout << "First character of greeting: " << greeting[0] << endl; //angka yang ada didalam [] adalah huruf apa yang ada di fungsi, angka di mulai dari indeks 0, 0 sama dengan huruf paling awal.
}
