#include <iostream>
using namespace std;

int main()
{
    int tahun;
    cout<<"masukan tahun ="<<endl;
    cin>>tahun;

    if (tahun % 400 == 0){
        cout<<"tahun kabisa"<<endl;
    } else if (tahun % 100){
        cout<<"bukan tahun kabisa"<<endl;
    } else {
        cout<<"hasil tidak ditemukan"<<endl;
    }
    
}