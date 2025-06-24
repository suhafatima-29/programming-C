#include <stdio.h>

int main() {
    int n;
    long fact = 1;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Factorial Series: ");
    for (int i = 1; i <= n; i++) {
        fact *= i;
        printf("%ld ", fact);
    }
    return 0;
}

