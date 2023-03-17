// SITI LUBNA SALSABILA MUSLIMAH
#include <iostream>
using namespace std;
int main()
{
    int i,j,max,min;
    int nilai[10];
    string nama[10];
    float jumlah, mean;

    cout << "Berapa jumlah elemen yang ingin diisi? ";
    cin>>j;

    for(i = 0; i < j; i++){
        cout <<"Masukan nama ke-"<<i+1<<" = ";
        cin >>nama[i];
        cout << "Masukan Nilai ke-"<<i+1<<" = ";
        cin >>nilai[i];
    }
    cout << "\nCetak" << endl;
        cout<<"DAFTAR NILAI MATEMATIKA"<<endl;
        cout<<"PPLG X-4"<<endl;
        cout<<"SMK WIKRAMA BOGOR"<<endl;
        cout<<"=================================="<<endl;
        cout<<"NO."<<"          "<<"NAMA"<<"           "<<"NILAI"<<endl;
        cout<<"====================================="<<endl;

    for(i=0;i<j;i++){
         cout<<i+1<<"             "<< nama[i]<<"            "<<nilai[i]<<"      "<<endl;

         
     }
        cout<<"====================================="<<endl;
    for(i=0;i<j;i++){
        if (nilai[i] > max)
        {
            max=nilai[i];
        }
    }
    for(i=0;i<j;i++){
        if (nilai[i] < min)
        {
            min=nilai[i];
        }
    }
    jumlah = 0;
    for(i=0;i<j;i++){
        jumlah = jumlah+nilai[i];
    }
    mean = (jumlah/j);

    cout << "Angka terbesar adalah: "<< max << endl;
    cout <<"Angka terkecil adalah: "<<min << endl;
    cout <<"rata-rata nya adalah: "<<mean << endl;
    return 0;
    
}