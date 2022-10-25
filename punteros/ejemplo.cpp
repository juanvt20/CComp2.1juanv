#include <iostream>

using namespace std;

int main(){
    int a{7};
    int *aptr=&a;

    cout<<&a<<endl;
    cout<<aptr<<endl;
    cout<<a<<endl;
    cout<<*aptr<<endl;

return 0;
}