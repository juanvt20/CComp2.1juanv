#include <iostream>

using namespace std;

int main()
{   int p=1;
    int s=1;
    int a=0;
    int x=0;
    while (a<4000000){  
        if (a%2==0){
            x=x+a;
        }      
        a=p+s;
        p=s;
        s=a;
        
    }cout<<x;

    return 0;
}