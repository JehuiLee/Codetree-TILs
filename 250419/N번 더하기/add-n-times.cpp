#include <iostream>
using namespace std;

int main() {
    int A, N, sum;
    cin >> A >> N;
    sum = A + N;
    for (int i = 0; i < N; i++) {
        cout << sum << endl;
        sum += N;
    }
    return 0;
}