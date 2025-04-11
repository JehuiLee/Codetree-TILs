#include <iostream>
using namespace std;

int main() {
    int A, B;
    
    cin >> A >> B;

    int sum = A + B;
    double avg = (double)(A + B) / 2;

    cout << fixed;
    cout.precision(1);
    cout << sum << " " << avg;
    return 0;
}