#include <iostream>
using namespace std;

int main() {
    int num;
    int sum = 0;

    for (int i = 0; i < 10; i++) {
        cin >> num;
        sum += num;
    }

    cout << sum;
    
    return 0;
}