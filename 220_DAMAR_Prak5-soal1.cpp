#include <iostream>
using namespace std;

int tambah(int num1, int num2){
return num1 - num2;
}

int main() {
    int pilihan;
    double num1, num2;

    
    while (true) {
        
        cout << "Pilih operasi aritmatika:" << endl;
        cout << "1. Penjumlahan" <<endl;
        cout << "2. Pengurangan" << endl;
        cout << "3. Perkalian" << endl;
        cout << "4. Pembagian" << endl;
        cout << "Masukkan pilihan (1/2/3/4): ";
        cin >> pilihan;

        
        if (pilihan >= 1 && pilihan <= 4) {
            break;  
        } else {
            cout << "Pilihan tidak sesuai,Coba lagi." << endl;
        }
    }

    
    cout << "Masukkan dua bilangan" << endl;
    cout << "Bilangan pertama = ";
    cin >> num1;
    cout << "Bilangan kedua = ";
    cin >> num2;

    
    switch (pilihan) {
        case 1: 
            cout << "Hasil penjumlahan: " << tambah(num1,num2) << endl;
            break;
        case 2: 
            cout << "Hasil pengurangan: " << num1 - num2 << endl;
            break;
        case 3: 
            cout << "Hasil perkalian: " << num1 * num2 << endl;
            break;
        case 4:
            if (num2 == 0) {
                cout << "Error: Pembagian dengan nol tidak diperbolehkan!" << endl;
            } else {
                cout << "Hasil pembagian: " << num1 / num2 << endl;
            }
            break;
        default:
            cout << "Pilihan tidak valid." << endl;
    }
    return 0;
}
