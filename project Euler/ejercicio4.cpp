#include<iostream>
using namespace std;

int main(){
    
    int long long x=0;
    int y=0;
    for (int i=101; i<1000; i++){
        for (int a=101; a <1000; a++){
            int resto=0;
            int numInv=0;
            int num=0;
            x = i*a;
            num=x;
            while(num>0){
                resto=num%10;
                num=num/10;
                numInv=numInv*10+resto;  
            }if (numInv==x){
                if(y>x){
                    y=y; 
            } else{
                y=x;
            }   
           }
        }
    }
    cout<<"es el palindromo mas grande: "<<y;
    return 0;
}