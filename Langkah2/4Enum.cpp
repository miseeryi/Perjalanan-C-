#include <iostream>
using namespace std;

enum Hari {Senin, Selasa, Rabu, Kamis, Jumat, Sabtu, Minggu};
enum Level {Low = 1, Medium = 5, High = 10};
enum Warna {Merah, Hijau, Biru};

int main() {
    
    Hari hariini = Senin;
    if (hariini == Senin) {
        cout << "Hari ini adalah hari senin" << endl;
    }

    cout << endl <<endl;
    
    Level status = High;
    cout << "Level anda sekarang adalah : " << status << endl;

    cout << endl <<endl;

    Warna colour = Warna::Biru;
    if (colour == Warna::Merah) {
        cout << "Warna anda adalah biru" << endl;
    }
    else if(colour == Warna::Hijau) {
        cout << "Warna anda adalah biru" << endl;
    }
    else if (colour == Warna::Biru) {
        cout << "Warna anda adalah biru" << endl;
    }
}