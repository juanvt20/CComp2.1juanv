#include <iostream>

using namespace std;

int main(){
    int n=2000000;
    int x=2;   
    for(int a=3;a<n; a++){
        bool b=false;
        for(int i=2; i<a;i++){
            if (a%i==0){
                b=true;
            }
        }if (b==false){
            x=x+a;
        }
    }cout<<x;
    return 0;
}