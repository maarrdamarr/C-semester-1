#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <cstring>
#include <cstdint>
#include <iomanip>

const int MAKS_SISWA = 100; // Jumlah maksimum siswa

// Struktur Siswa untuk menyimpan informasi siswa
struct Siswa {
    std::string nama;
    uint16_t umur;
    double nilai[4]; // Array untuk menyimpan 4 nilai mata pelajaran
    double rataRata;
    time_t tanggalPendaftaran;
    bool lulus;
};

// Fungsi untuk menambahkan siswa baru
void tambahSiswa(Siswa siswa[], int& jumlahSiswa) {
    if (jumlahSiswa >= MAKS_SISWA) {
        std::cout << "Jumlah maksimum siswa telah tercapai.\n";
        return;
    }

    Siswa& siswaBaru = siswa[jumlahSiswa];
    std::cout << "Masukkan nama siswa: ";
    std::getline(std::cin >> std::ws, siswaBaru.nama);
    
    std::cout << "Masukkan umur siswa: ";
    std::cin >> siswaBaru.umur;
    
    double totalNilai = 0;
    for (int i = 0; i < 4; i++) {
        std::cout << "Masukkan nilai mata pelajaran " << i+1 << ": ";
        std::cin >> siswaBaru.nilai[i];
        totalNilai += siswaBaru.nilai[i];
    }
    
    siswaBaru.rataRata = totalNilai / 4;
    siswaBaru.tanggalPendaftaran = std::time(nullptr);
    siswaBaru.lulus = (siswaBaru.rataRata >= 75.0); // Anggap nilai kelulusan adalah 75
    
    jumlahSiswa++;
    std::cout << "Siswa berhasil ditambahkan!\n";
}

// Fungsi untuk menampilkan semua siswa
void tampilkanSiswa(const Siswa siswa[], int jumlahSiswa) {
    if (jumlahSiswa == 0) {
        std::cout << " ##### Belum ada siswa yang terdaftar ##### \n";
        return;
    }
    
    std::cout << "Daftar siswa:\n";
    for (int i = 0; i < jumlahSiswa; i++) {
        const auto& s = siswa[i];
        std::cout << "Nama: " << s.nama << "\n";
        std::cout << "Umur: " << s.umur << "\n";
        for (int j = 0; j < 4; j++) {
            std::cout << "Nilai mata pelajaran " << j+1 << ": " << std::fixed << std::setprecision(2) << s.nilai[j] << "\n";
        }
        std::cout << "Rata-rata nilai: " << std::fixed << std::setprecision(2) << s.rataRata << "\n";
        std::cout << "Tanggal Pendaftaran: " << std::ctime(&s.tanggalPendaftaran);
        std::cout << "Status: " << (s.lulus ? "Lulus" : "Tidak Lulus") << "\n";
        std::cout << "------------------------\n";
    }
}

// Fungsi untuk mencari siswa berdasarkan nama
void cariSiswa(const Siswa siswa[], int jumlahSiswa, const std::string& nama) {
    for (int i = 0; i < jumlahSiswa; i++) {
        const auto& s = siswa[i];
        if (strcasecmp(s.nama.c_str(), nama.c_str()) == 0) {
            std::cout << "Siswa ditemukan:\n";
            std::cout << "Nama: " << s.nama << "\n";
            std::cout << "Umur: " << s.umur << "\n";
            for (int j = 0; j < 4; j++) {
                std::cout << "Nilai mata pelajaran " << j+1 << ": " << std::fixed << std::setprecision(2) << s.nilai[j] << "\n";
            }
            std::cout << "Rata-rata nilai: " << std::fixed << std::setprecision(2) << s.rataRata << "\n";
            std::cout << "Tanggal Pendaftaran: " << std::ctime(&s.tanggalPendaftaran);
            std::cout << "Status: " << (s.lulus ? "Lulus" : "Tidak Lulus") << "\n";
            return;
        }
    }
    std::cout << "Siswa tidak ditemukan.\n";
}

// Fungsi untuk menampilkan hasil kelulusan
void tampilkanHasilKelulusan(const Siswa siswa[], int jumlahSiswa) {
    std::cout << "Hasil Kelulusan:\n";
    for (int i = 0; i < jumlahSiswa; i++) {
        const auto& s = siswa[i];
        std::cout << s.nama << ": " << (s.lulus ? "Lulus" : "Tidak Lulus") << "\n";
    }
}

int main() {
    Siswa siswa[MAKS_SISWA];
    int jumlahSiswa = 0;
    int pilihan;
    
    do {
        std::cout << "\nManajemen Penerimaan Siswa Baru\n";
        std::cout << "1. Tambah Siswa\n";
        std::cout << "2. Tampilkan Siswa\n";
        std::cout << "3. Cari Siswa\n";
        std::cout << "4. Lihat Hasil Kelulusan\n";
        std::cout << "5. Keluar\n";
        std::cout << "Masukkan pilihan Anda: ";
        std::cin >> pilihan;
        
        switch (pilihan) {
            case 1:
                tambahSiswa(siswa, jumlahSiswa);
                break;
            case 2:
                tampilkanSiswa(siswa, jumlahSiswa);
                break;
            case 3: {
                std::string namaCari;
                std::cout << "Masukkan nama siswa: ";
                std::getline(std::cin >> std::ws, namaCari);
                cariSiswa(siswa, jumlahSiswa, namaCari);
                break;
            }
            case 4:
                tampilkanHasilKelulusan(siswa, jumlahSiswa);
                break;
            case 5:
                std::cout << "Keluar dari menu,See you!\n";
                break;
            default:
                std::cout << "Pilihan Gagal. Coba lagi.\n";
        }
    } while (pilihan != 5);
    
    return 0;
}