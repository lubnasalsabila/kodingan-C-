#include<iostream>
using namespace std;

int main() {
   int a;
    cout<<"input nilai : ";
    cin>>a;
    if (a < 0) {
        cout<<"nilai harus lebih dari 0";
    } else if (a>100){
        cout<<"nilai maksimal adalah 100";
        cout<<"Nilai "<<a<<" A+";
    } else if (a>80) {
        cout<<"Nilai "<<a<<" A";
    } else if (a>75) {
        cout<<"Nilai "<<a<<" B";
    } else if (a>70) {
        cout<<"Nilai "<<a<<" C";
    } else{
        cout<<"Nilai "<<a<<" tidak lulus";
    }


}