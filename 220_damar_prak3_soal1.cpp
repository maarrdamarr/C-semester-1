#include <iostream>
using namespace std;

int main(){
    int angka,hasil=0;
    cout <<"masukan bilangan bulat (ctrl+d pada unix/linux,ctrl+z untuk windows) "<< endl;
    cout <<"masukan angka  =";
    while (cin>>angka)
    {
        hasil += angka;
    }
    cout <<"Hasilnya :"<< hasil << endl;
    return 0;
    

}