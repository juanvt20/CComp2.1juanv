#include <iostream>

using namespace std;

int main()
{   int n{100};
    int x=0;
    int y=0;
    while(n>0){
        x=x+(n*n);
        y=y + n;
        n=n-1;
    }
    y=y*y;
    cout<<y-x;
    return 0;
}