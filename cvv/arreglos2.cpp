#include <iostream>
#include "Point.h"
using namespace std;

void print(Point array[], int tam){
    cout<<"[";
    for (int i=0; i<tam; i++){
        array[i].print();
    }cout<<"]"<<endl;
}
void intercambio(Point &a, Point &b){
    Point tmp= a;
    a=b;
    b=tmp;
}


void insertionsort(Point array[], int tam){
    for (int i=1; i<tam; i++){
        int j=i-1;
        while (j>=0){
            if (array[i].getX()>array[j].getX()){
                intercambio(array[i], array[j]);     
            }
            j--;
        }
    }
}

int main(){
    Point p1;
    Point p2(4,5);
    Point p3(6,5);
    Point p4(4,8);
    Point p5(14,15);
    Point arr[]={p1,p2,p3,p4,p5};
    int tam=sizeof(arr)/ sizeof(arr[0]);
    print(arr,tam);
    insertionsort(arr,tam);
    print(arr,tam);
    return 0;
}