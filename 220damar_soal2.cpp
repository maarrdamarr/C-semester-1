#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    char operation;

    cout << "Masukan  bilangan satu == ";
    cin>>num1;
    cout << "Masukan  bilangan dua == ";
    cin >>num2; 
    cout << "Masukan operator = "; 
    cin >> operation;
    switch (operation)
    {
    case '+':
            cout << "jawaban " << num1 + num2 << endl;
            break;
    case '-':
            cout << "jawaban" << num1 - num2 << endl;
            break;
    case '*':
            cout << "jawaban" << num1 * num2 << endl;
            break;
    case '/':
        if (num2 != 0)
            cout << "jawaban " << num1 / num2 << endl;
        else
        cout << "maaf,gagal pembagian dengan nol" << endl;
            break;
    case '%':
        if (num2 != 0)
           cout << "Hasil " << num1 % num2 << endl;
        else
        cout << "maaf,gagal pembagian dengan nol" << endl;
            break;
         
    }

    return 0;
}