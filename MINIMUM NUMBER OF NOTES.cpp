#include <stdio.h>
int main() {
    int amount, notes[] = {2000, 500, 200, 100, 50, 20, 10, 5, 1}, count;
    printf("Enter amount: ");
    scanf("%d", &amount);
    for (int i = 0; i < 9; i++) {
        count = amount / notes[i];
        if (count != 0)
            printf("%d x %d notes\n", count, notes[i]);
        amount %= notes[i];
    }
    return 0;
}

