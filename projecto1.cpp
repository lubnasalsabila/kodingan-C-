#include <iostream>
using namespace std;

int main()
{
    int i,j,max;
    int maksimal;
    int nilai[15];
    int mng[15];
    int main[15];
    string nama[15];

    cout<<"berapa club yang akan dimasukan? ";
    cin>>j;
    max=0;
    for(i=0 ; i<j ; i++) {
        cout <<"masukan nama club ke-"<<i+1<<" :";
        cin>> nama[i];
        cout <<"berapa kali club ke-"<<i+1<<" itu bermain : ";
        cin >> main[i];
        cout <<"berapa kali club ke-"<<i+1<<" itu menang : ";
        cin >> mng[i];
        cout <<"berapa kali club ke-"<<i+1<<" itu kalah : ";
        cin >> nilai[i];
        if (mng[i] > maksimal){
            maksimal = mng[i];
        }
        cout <<max;
    }


        cout<<"HASIL PERTANDINGAN " <<endl;
        cout<<"    BOLA VOLLY     " <<endl;
        cout<<"TURNAMEN ANTAR SMP " <<endl;
        cout<<"==============================================="<<endl;
        cout<<"NO"<<"     "<<"CLUB"<<"       "<<"MAIN"<<"     "<<"MENANG"<<"       "<<"KALAH"<<"      "<<endl;
        cout<<"==============================================="<<endl;


    for(i=0 ; i<j ; i++){
        cout<<i+1<<"      "<<nama[i]<<"      "<< main[i]<<"         "<<mng[i]<<"             "<<nilai[i]<<"      "<<endl;

    }
        cout<<"==============================================="<<endl;
    
    
    
    cout<<"tertinggi adalah : "<< "ok" <<endl;

    return 0;
}