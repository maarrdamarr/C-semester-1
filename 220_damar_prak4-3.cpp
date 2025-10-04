#include <iostream>
#include <string>

using namespace std;

int main() {
    string kalimat = "domba besar"; 
    string hasil = ""; 

    for (int i = 0; i < kalimat.length(); i++) {
        if (kalimat[i] != ' ') { 
            if (kalimat[i] >= 'A' && kalimat[i] <= 'Z') {
                hasil += kalimat[i] + 32; 
            } else {
                hasil += kalimat[i];
            }
        }
    }

    string terbalik = "";
    for (int i = hasil.length() - 1; i >= 0; i--) {
        terbalik += hasil[i];
    }

    cout << terbalik << endl;

    return 0;
}