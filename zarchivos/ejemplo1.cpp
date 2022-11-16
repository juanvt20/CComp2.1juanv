#include <fstream>
#include <iostream>
using namespace std;

int main(){
    ifstream source("source-file.txt");
    ofstream destination("dest_file.txt");
    int x;
    source>>x;
    cout << x;
    source.close();
    destination<<x;
    return 0;
}