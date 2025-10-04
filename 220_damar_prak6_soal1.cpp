#include <iostream>
#include <string>

using namespace std;


struct Mahasiswa {
    string nama;
    float ipk;
};

int main() {
    int n;
    int terbaikIndex = 0;

    cout << "Masukan data jumlah mahasiswa = ";
    cin >> n;

   
    if (n <= 0) {
        cout << " 0/ gagal,masukan jumlah mahasiswa" << endl;
        return 1;
    }

    Mahasiswa mahasiswa[n];

    
    for (int i = 0; i < n; ++i) {
        cin.ignore();  

        cout << "\nMasukkan nama mahasiswa " << i + 1 << ": ";
        getline(cin, mahasiswa[i].nama);  

        cout << "Masukkan IPK mahasiswa " << i + 1 << ": ";
        cin >> mahasiswa[i].ipk;

  
        if (mahasiswa[i].ipk < 0 || mahasiswa[i].ipk > 4) {
            cout << "IPK EROR/LEBIH DARI 4. Coba lagi.\n";
            --i;  
            continue;
        }

      
        if (mahasiswa[i].ipk > mahasiswa[terbaikIndex].ipk) {
            terbaikIndex = i;
        }
    }

    
    cout << "\nNama Mahasiswa dengan IPK tertinggi adalah " 
         << mahasiswa[terbaikIndex].nama 
         << " Memperoleh IPK " 
         << mahasiswa[terbaikIndex].ipk 
         << " SELAMAT NILAI ANDA TERBAIK" << endl;

    return 0;
}