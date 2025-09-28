#include <stdio.h>

long long factorial(int n) {
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main(void) {
    int n;
    printf("Enter a non-negative integer n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Error: n must be >= 0.\n");
    } else {
        long long fact = factorial(n);
        printf("Factorial of %d is %lld\n", n, fact);
    }

    return 0;
}
