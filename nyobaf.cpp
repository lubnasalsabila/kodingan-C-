#include <iostream>
using namespace std;

int main(){
    int input;
    cout<< "masukkan column: ";
    cin>> input;
    int jumlah;
    int angka;
    cout << "Masukkan row: ";
    cin>> angka;
    int arr[input][angka];

    for(int i = 0; i < input; i++)
    {
        for (int a = 0; a < angka; a++){
            cout<< "Masukkan angka: "<< endl;
            cin>> arr[i][a];
        }
    }
    
    jumlah = 0;
    for(int i = 0; i < input; i++)
    {
        for (int a = 0; a < angka; a++){
            jumlah = jumlah + arr[i][a];
        }
    }

    cout << endl;
    cout << "Jumlahnya adalah: " << jumlah << endl;
   return 0;
}