#include <iostream>

using namespace std;

int main(){
    int x=1; 
    int a=3;  
    while (x<10001){
        while(a>0){
            bool b=false;
            for(int i=2; i<a;i++){
                if (a%i==0){
                    b=true;
                }
            }if (b==false){
                x=x+1;
            }
                a=a+1;
                break;
        }
    }
    cout<<a-1;
    return 0;
}