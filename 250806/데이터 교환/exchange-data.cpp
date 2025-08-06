#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 6, c = 7, temp, temp2;
    

    temp = b;
    temp2 = c;
    b = a;
    c = temp;
    a = temp2;

    cout << a << endl << b << endl << c;
    return 0;
}