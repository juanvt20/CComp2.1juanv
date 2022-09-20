#include <iostream>

using namespace std;

int main()
{   int y=1;
    int z=1;
    int a;
    cout<< "ingrese un numero: ";
    int x;
    cin>>x;
    while (x>0){
        cout<<z<<"; ";
        a=z+y;
        y=z;
        z=a;
        x=x-1;
    }

    return 0;
}