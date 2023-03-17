#include <iostream>
using namespace std;

int main(){
    
    // array multi/dua dimensi
    int j,l;
    char ulang;
    string p;
    
    
    do{
        cout<<"masukan berapa kolom: ";
        cin>> j;
        cout<<"masukan berapa baris: ";
        cin>> l;
    
    int nilaix[j][l];
    int nilaiy[j][l];

    for(int i=0; i<j;i++)
    {
        for(int a=0; a<l; a++)
        {
        cout << "masukan angka x: ";
        cin >> nilaix[i][a];
        }
        
    }
    cout<<"\n";
    for(int x=0; x<j;x++)
    {
        for(int y=0; y<l; y++)
        {
        cout << "masukan angka y: ";
        cin >> nilaiy[x][y];
        }
    }
    cout<<"nilai x"<<endl;
    for(int i=0; i<j;i++)
    {
        for(int a=0; a<l; a++)
        {
        cout << " | " <<nilaix[i][a]<<" | ";
        
        }
        cout<<"\n";
    }

    cout<<"nilai y"<<endl;
    for(int x=0; x<j; x++)
    {
        for(int y=0; y<l; y++){
            cout<<" | "<<nilaiy[x][y]<<" | ";
        }
        cout<<"\n";
    }

    cout<<"pilih operator +,-,*,/: ";
    cin >>p;
    
    if(p=="+"){
        cout<<" Operator Penjumlahan"<<endl;
    for(int x=0; x<j; x++)
    {
        for(int y=0; y<l; y++){
            cout<<"   " <<nilaix[x][y] + nilaiy[x][y]<<"   ";
        }
        cout<<"\n";
    }
    }
    
    else if(p=="-"){
        cout<<" Operator Pengurangan"<<endl;
    for(int x=0; x<j; x++)
    {
        for(int y=0; y<l; y++){
            cout<<"   " <<nilaix[x][y] - nilaiy[x][y]<<"   ";
        }
        cout<<"\n";
    }
    }
    else if(p=="*"){
        cout<<" Operator Perkalian"<<endl;
    for(int x=0; x<j; x++)
    {
        for(int y=0; y<l; y++){
            cout<<"   " <<nilaix[x][y] * nilaiy[x][y]<<"   ";
        }
        cout<<"\n";
    }
    }
    else if(p=="/"){
        cout<<" Operator pembagian"<<endl;
    for(int x=0; x<j; x++)
    {
        for(int y=0; y<l; y++){
            cout<<"  " <<nilaix[x][y] / nilaiy[x][y]<<"   ";
        }
        cout<<"\n";
    }
    }
    
    else if(p=="%"){
        cout<<" Modulus"<<endl;
    for(int x=0; x<j; x++){
        for(int y=0; y<l; y++){
            if(nilaiy[x][y] == 2){
                if(nilaix[x][y] % nilaiy[x][y] == 0){
                cout<<" | Genap | ";
                }
                else{
                cout<<" | Ganjil | ";
                }
            }
            else{
                cout <<" | Invalid | ";
            }
        }
        cout<<"\n";
    }
    }
    
    

    

    cout<<"Apakah ingin menginput angka lagi (y/t)? " ;
    cin>>ulang;
    cout<<endl;
    } while (ulang== 'y' || ulang == 'Y');
    
        if (ulang == 't' || ulang == 'T') {
            cout << "terimakasih sudah menginput angka" << endl;
        } else {
            cout << "input invalid" << endl;
        }

    return 0;
}