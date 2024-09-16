#include <stdio.h>

int main()
{
    int n, reversed = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    while (n != 0)
    {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }

    printf("Reversed number: %d\n", reversed);

    return 0;
}