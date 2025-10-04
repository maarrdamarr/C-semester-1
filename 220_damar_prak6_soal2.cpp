#include <iostream>
#include <string>

using namespace std;


struct Akun {
    string username;
    string password;
};


bool cekUsername(const Akun akun[], int jumlahAkun, const string& username) {
    for (int i = 0; i < jumlahAkun; ++i) {
        if (akun[i].username == username) {
            return true;
        }
    }
    return false;
}


bool cekAkun(const Akun akun[], int jumlahAkun, const string& username, const string& password) {
    for (int i = 0; i < jumlahAkun; ++i) {
        if (akun[i].username == username && akun[i].password == password) {
            return true;
        }
    }
    return false;
}


void registrasi(Akun akun[], int& jumlahAkun) {
    Akun akunBaru;
    cout << "\n### PENDAFTARAN AKUN ###\n";

    
    cout << "Username: ";
    getline(cin, akunBaru.username);


    if (cekUsername(akun, jumlahAkun, akunBaru.username)) {
        cout << "Username Terdaftar/Terpakai.\n";
        return;
    }

   
    cout << "Password = ";
    getline(cin, akunBaru.password);


    if (akunBaru.password.find(' ') != string::npos) {
        cout << "Menggunakan spasi/Gagal.\n";
        return;
    }

    
    akun[jumlahAkun] = akunBaru;
    jumlahAkun++;

    cout << "Registrasi berhasil! Akun Tersimpan.\n";
}


void login(const Akun akun[], int jumlahAkun) {
    Akun akunLogin;
    cout << "\n### Login Akun ###\n";

   
    cout << "Username = ";
    getline(cin, akunLogin.username);

    cout << "Password = ";
    getline(cin, akunLogin.password);

    if (cekAkun(akun, jumlahAkun, akunLogin.username, akunLogin.password)) {
        cout << "Login berhasil! " << akunLogin.username << ".\n";
    } else {
        cout << "EROR/Username atau Password salah.\n";
    }
}

int main() {
    Akun akun[100];  
    int jumlahAkun = 0; 
    int pilihan;

    
    while (true) {
        cout << "\n### WELCOME ###\n";
        cout << "1. Registrasi Akun\n";
        cout << "2. Login Akun\n";
        cout << "3. Log Out\n";
        cout << "Masukkan pilihan (1/2/3): ";
        cin >> pilihan;
        cin.ignore(); 

        switch (pilihan) {
            case 1:
                registrasi(akun, jumlahAkun);
                break;
            case 2:
                login(akun, jumlahAkun);
                break;
            case 3:
                cout << "Thank you.\n";
                return 0;
            default:
                cout << "Pilihan Gagal. Coba lagi.\n";
        }
    }
}