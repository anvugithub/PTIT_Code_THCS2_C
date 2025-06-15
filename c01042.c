#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    long long sum = 0, term = 1;
    for (int i = 1; i <= n; i++) {
        term *= i;
        sum += term;
    }
    printf("%lld\n", sum);
    return 0;
}