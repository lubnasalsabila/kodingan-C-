#include <iostream>
using namespace std;

int main()
{
int input;
    cout<<"masukan angka: ";
    cin>>input;
for (int i=1; i<=input; i++)

 {
    if (i%2==0)
    {
        cout <<"ini angkot ke "<<i<<"x yang berada di daerah genap"<< endl;
    }
    else
    {
        cout <<"ini angkot ke "<<i<<"x yang berada di daerah ganjil" <<  endl;
    }
 }

}

