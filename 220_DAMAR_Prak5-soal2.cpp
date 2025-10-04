#include <iostream>
#include <algorithm>
using namespace std;


string desimalKeBiner(int n) {
    
    if (n == 0) {
        return "";
    } else {
        
        return desimalKeBiner(n / 2) + to_string(n % 2);
    }
}


string konversiBiner8Bit(int n) {
    
    string biner = desimalKeBiner(n);

    
    if (biner.empty()) {
        biner = "0";
    }

    
    while (biner.length() < 8) {
        biner = "0" + biner;
    }

    return biner;
}

int main() {
    int bilanganDesimal;

    
    cout << "Masukkan bilangan desimal: ";
    cin >> bilanganDesimal;

    
    cout << "Biner dengan panjang 8 bit: " << konversiBiner8Bit(bilanganDesimal) << endl;

    return 0;
}