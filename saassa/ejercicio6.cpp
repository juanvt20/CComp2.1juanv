#include<iostream>
using namespace std;
int main(){
 int resto,numInv,x=0;
 int num=1001;
 x=num;
 while(num>0){
    
    resto=num%10;
    num=num/10;
    numInv=numInv*10+resto;
 }
 if(numInv==x){cout<<"El numero invertido es :"<<numInv<<x;}
 return 0;
}