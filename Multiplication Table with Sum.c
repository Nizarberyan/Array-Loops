#include <stdio.h>

int num, sum = 0, multiple = 0;

int main()
{
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Multiplication table of %d is:\n", num);

    for (int i = 1; i <= 10; i++)
    {
        multiple = num * i;
        printf("%d * %d = %d\n", num, i, multiple);
        sum += multiple;
    }
    printf("\nthe sum of the numbers is: %d\n", sum);
    return 0;
}