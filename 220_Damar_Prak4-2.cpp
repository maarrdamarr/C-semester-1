#include <iostream>
#include <string>
using namespace std;

int main() {
    string words[] = {"truck","motor","kereta","pesawat","kapal"};
    int n = 4 ;

    cout << "[";
    for (int i = 0; i < n; i++) {
        cout << words[i];
        if (i < n - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;

    return 0;
}