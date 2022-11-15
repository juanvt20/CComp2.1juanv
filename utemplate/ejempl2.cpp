#include <iostream>
#include "point.h"
using namespace std;

int main() {
    Point<float> fpoint(2.5,5.4);
    cout<<fpoint.getx()<<","<<fpoint.gety()<<endl;
    return 0;
}