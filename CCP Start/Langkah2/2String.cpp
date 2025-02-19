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

    cout << "First character of greeting: " << greeting[1] << endl;
}
