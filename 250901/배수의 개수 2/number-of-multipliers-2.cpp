#include <iostream>
using namespace std;

int main() {
    int cnt;
    for (int i = 0; i <= 9; i++) {
        if (i % 2 == 1) cnt++;
    }
    cout << cnt;
    return 0;
}