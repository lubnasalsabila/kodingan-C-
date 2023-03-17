#include <iostream>
using namespace std;

int main(){

    float k;
    float km,m,cm,mm;
    string p;

    cout<<"Jenis-jenis Konversi:"<<endl<<"1. KM"<<endl<<"2. M"<<endl<<"3. CM"<<endl<<"4. MM"<<endl;
    cout<<"Masukan jenis konversi: ";
    cin>> p;
    cout<<"Masukan angka: ";
    cin>> k;

    if (p=="1"){
        cout<<"    === Hasil Konversi "<< k <<" ==="<<endl;
        cout <<" "<< k * 1000 <<"  M"<<endl;
        cout <<" "<< k * 100000 <<"  CM"<<endl;
        cout <<" "<< k * 1000000 <<"  MM"<<endl;
    } else if (p=="2"){
        cout<<"    === Hasil Konversi "<< k <<" ==="<<endl;
        cout <<" "<< k / 1000 <<"  KM"<<endl;
        cout <<" "<< k * 100 <<"  CM"<<endl;
        cout <<" "<< k * 1000 <<"  MM"<<endl;
    } else if (p=="3"){
        cout<<"    === Hasil Konversi "<< k <<" ==="<<endl;
        cout <<" "<< k / 100000 <<"  KM"<<endl;
        cout <<" "<< k / 100 <<"  M"<<endl;
        cout <<" "<< k * 10 <<"  MM"<<endl;
    } else if (p=="4"){
        cout<<"    === Hasil Konversi "<< k <<" ==="<<endl;
        cout <<" "<< k / 1000000 <<"  KM"<<endl;
        cout <<" "<< k / 1000 <<"  M"<<endl;
        cout <<" "<< k / 10 <<"  CM"<<endl;
    }
    cout<<"____________________________________________ ";

}