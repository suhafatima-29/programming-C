#include <stdio.h>
int main() {
    int num, original, rev = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    original = num;
    while (num != 0) {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    if (original == rev)
        printf("Palindrome\n");
    else
        printf("Not a palindrome\n");
    return 0;
}

