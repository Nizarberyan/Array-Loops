#include <stdio.h>

int main()
{
    int num, exponent, result = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    int base = num;
    int count = exponent;

    while (count > 0)
    {
        result *= base;
        count--;
    }

    printf("%d^%d = %d\n", base, exponent, result);
    return 0;
}
