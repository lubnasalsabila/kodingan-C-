#include<iostream>
using namespace std;

int main ()
{
    char nilai;
    cout<<"input nilai (A-D): ";
    cin>>nilai;
    switch (nilai)
    {
        case 'A':
        cout << "Nilai anda diantara 95-100 "<< endl;
        break;

        case 'B':
        cout << "Nilai anda diantara 85-94 "<< endl;
        break;
        
        case 'C':
        cout << "Nilai anda diantara 75-84 "<< endl;
        break;
        
        case 'D':
        cout << "Nilai anda <75 "<< endl;
        break;
        
    default:
        cout << "mohon maaf nilai tidak ada";
        break;
    }

    return 0;
    