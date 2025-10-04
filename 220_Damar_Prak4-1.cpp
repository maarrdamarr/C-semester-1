#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah elemen dalam array = ";
    cin >> n;

    
    if (n < 1) {
        cout << "Jumlah elemen harus lebih dari nol =" << endl;
        return 0;
    }

    int angka;
    cout << "Masukkan elemen array: ";
    cin >> angka; 

    
    int terbesar = angka;
    int terkecil = angka;
    
    for (int i = 1; i < n; i++) {
        cin >> angka;
        if (angka > terbesar) {
            terbesar = angka;
        }
        if (angka < terkecil) {
            terkecil = angka;
        }
    }

    cout << "Terbesar: " << terbesar << endl;
    cout << "Terkecil: " << terkecil << endl;

    return 0;
}