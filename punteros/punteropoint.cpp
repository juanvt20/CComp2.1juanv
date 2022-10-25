#include <iostream>
#include "Point.h"

using namespace std;
int main(){
    Point p;

    Point* ptr;

    ptr=&p;

    ptr->print();

    return 0;
}