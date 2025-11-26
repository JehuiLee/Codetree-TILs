#include <iostream>

using namespace std;

int N;

void recursive(int N) {
    if (N == 0) return;
    cout << "HelloWorld\n";
    recursive(N - 1);
}

int main() {
    cin >> N;

    recursive(N);

    return 0;
}