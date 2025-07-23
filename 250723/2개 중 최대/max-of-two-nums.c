#include <stdio.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);
    int s = A > B ? A : B;
    printf("%d", s);
    return 0;
}