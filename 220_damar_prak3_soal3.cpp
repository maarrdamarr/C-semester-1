#include <iostream>
using namespace std;

void cetakSegitiga(int n) {
    int angka = 1; 
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            cout << angka << " ";
            angka++; 
        }
        cout << endl; 
    }
}

int main() {
    int N;
    cout << "Masukkan jumlah baris (N): ";
    cin >> N;
    cetakSegitiga(N); 
    return 0;
}