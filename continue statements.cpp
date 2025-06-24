#include <stdio.h>

int main() {
    int i;

    for(i = 1; i <= 5; i++)
	{
        if(i == 3)
		{
            continue; // Skip the rest and go to next i
        }
        printf("%d\n", i);
    }

    return 0;
}
