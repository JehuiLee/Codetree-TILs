#include <iostream>
using namespace std;

int main() {
    char arr[10];

    for (int i = 0; i < 10; i++) {
        char c;
        cin >> c;
        
        arr[i] = c;
    }

    for (int i = 9; i >= 0; i--) {
        cout << arr[i];
    }

    return 0;
}