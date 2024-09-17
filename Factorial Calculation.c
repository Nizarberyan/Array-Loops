#include <stdio.h>

int n;
int fnum = 1;

int main()
{
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        fnum *= i;
    }

    printf("Factorial of %d is %d\n", n, fnum);

    return 0;
}