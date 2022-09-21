#include <iostream>

using namespace std;

int main(){
    int x=1000;
    int c=0;
    for (int a=1; a<x/3; a++){
        for (int b=a; b<x/2; b++){
            c=x-(a+b);
            if ((a*a)+(b*b)==(c*c)){
                cout<<a*b*c;
            }

        }
    }return 0;
}