#include <iostream>
using namespace std;


bool isAlphanumeric(char c) {
    return isalnum(c); 
}


void reverseString(string &s, int start, int end) {
    
    if (start >= end) {
        return;
    }

    
    if (!isAlphanumeric(s[start])) {
        start++;
        reverseString(s, start, end);
        return;
    }

    
    if (!isAlphanumeric(s[end])) {
        end--;
        reverseString(s, start, end);
        return;
    }

    
    swap(s[start], s[end]);

    
    reverseString(s, start + 1, end - 1);
}

int main() {
    string input;

    cout << "ketik kalimat: ";
    getline(cin, input); 

    reverseString(input, 0, input.length() - 1);


    cout << "Hasil: " << input << endl;

    return 0;
}