#include <iostream>
using namespace std;

int main() {
    int a = 13;
    double b = 0.165;
    cout << a << " * ";

    cout << fixed;

    cout.precision(6);
    cout << b << " = ";
    cout << (a * b);
    
    return 0;
}