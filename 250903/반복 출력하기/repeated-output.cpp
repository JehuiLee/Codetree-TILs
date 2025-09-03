#include <iostream>

using namespace std;

int N;

void PrintNLines(int N) {
    for (int i = 0; i < N; i++) {
        cout << "12345^&*()_" << "\n";
    }   
}

int main() {
    cin >> N;

    PrintNLines(N);

    return 0;
}