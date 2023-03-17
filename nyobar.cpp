#include <iostream>
using namespace std;

int main(){
    int angka[2][2];
    string haha[2][2];


    for (int i=0; i<2; i++){
        for (int b=0; b<2; b++){
            cout<<"masukan nama: ";
            cin>>haha[i][b];
            cout<<"masukan absen: ";
            cin>>angka[i][b];
        };
    }
    for (int i=0; i<2; i++){
        for (int b=0; b<2; b++){
            cout<<angka[i][b]<<endl;
            
        };
    }
}