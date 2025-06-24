#include <stdio.h>
int main() {
    int n, i, min;
    printf("Enter number of subjects: ");
    scanf("%d", &n);
    int marks[n];
    printf("Enter marks: ");
    for (i = 0; i < n; i++)
        scanf("%d", &marks[i]);
    min = marks[0];
    for (i = 1; i < n; i++)
        if (marks[i] < min)
            min = marks[i];
    printf("Lowest marks = %d\n", min);
    return 0;
}

