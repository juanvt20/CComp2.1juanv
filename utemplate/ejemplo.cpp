#include <iostream>
#include <string>
using namespace std;

template <typename t, typename u>

u sum(const t a, const u b){
    return a+b;
}

int main(){

    cout<< sum<int, float>(8,5.45)<<endl;
    cout<< sum<double, int>(8.85,5)<<endl;

    return 0 ;
}