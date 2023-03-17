#include <iostream>
using namespace std;
  
int main(){
    int input;
    int arr[5];

    for (int input; input < 5; input++ )
    {
        cout<< "masukan angka: "<<endl;
        cin >>arr[input];
    }
    for (int input; input < 5; input++)
    {
        cout<<" angka ke "<<arr[input]<<endl;
        cin >>arr[input];
    }
} 