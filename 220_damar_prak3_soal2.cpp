#include <iostream>
using namespace std;

int main(){
    int number;
    cout<<"masukan angka \t:";
    cin>>number;

    int digitcount =0;
        if (number == 0){
            digitcount =1;
        } else {
            while (number != 0){
                number /=10;
                digitcount ++;
            }
        }
        cout<<"JUMLAH DIGIT :"<<digitcount<<endl;

        return 0;
    

}

