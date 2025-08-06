#include <iostream>
using namespace std;

int main() {
    int a = 1, b = 2, c = 3, sum;

    sum = a + b + c;

    a = b = c = sum;

    cout << a << " " << b << " " << c << " ";

    return 0;
}