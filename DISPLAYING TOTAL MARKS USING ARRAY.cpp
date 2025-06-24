#include <stdio.h>
int main() {
    int n, i, total = 0;
    printf("Enter number of subjects: ");
    scanf("%d", &n);
    int marks[n];
    printf("Enter marks: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &marks[i]);
        total += marks[i];
    }
    printf("Total marks = %d\n", total);
    return 0;
}

