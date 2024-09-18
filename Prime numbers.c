#include <stdio.h>
#include <math.h>

int is_prime(int num)
{
    if (num <= 1)
    {
        return 0;
    }
    int sqrt_num = (int)sqrt((double)num);
    for (int i = 2; i <= sqrt_num; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int count;
    for (int i = 0; i < n ; i++)
    {
        if (is_prime(i))
        {
            printf("%d ", i);
            ;
        }
    }

    return 0;
}