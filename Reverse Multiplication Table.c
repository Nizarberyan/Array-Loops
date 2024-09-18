#include <stdio.h>

int n;

int main()
{

    printf("enter the number: ");
    scanf("%d", &n);

    for (int i = 10; i > 0; i--)
    {
        printf("%d x %d is: %d \n", n, i, n * i);
    }
}