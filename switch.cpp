#include<iostream>
using namespace std;

int main (int argc, char const *argv[]){
    int nilai;
    cout<<"input nilai : ";
    cin>>nilai;
    switch (nilai)
    {
        case 1:
        cout<<"tidak lulus!";
        break;
        case 2:
        cout<<"Nilai 2";
        break;

    default:
        cout<<"anda tidak menginput!";
        break;
    }
}