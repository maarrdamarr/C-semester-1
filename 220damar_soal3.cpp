#include <iostream>
using namespace std;

int main() {
    int x, y;
    cout << "Masukkan koordinat x dan y: ";
    cin >> x >> y;

    if (x == 0 && y == 0) {
        cout << "Pusat" << endl;
    } else if (x == 0) {
        cout << "Sumbu Y" << endl;
    } else if (y == 0) {
        cout << "Sumbu X" << endl;
    } else if (x > 0 && y > 0) {
        cout << "Kuadran I" << endl;
    } else if (x < 0 && y > 0) {
        cout << "Kuadran II" << endl;
    } else if (x < 0 && y < 0) {
        cout << "Kuadran III" << endl;
    } else if (x > 0 && y < 0) {
        cout << "Kuadran IV" << endl;
    }

    return 0;
}