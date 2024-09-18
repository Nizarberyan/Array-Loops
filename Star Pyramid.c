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
    int lines;

    printf("Enter the number of lines for the pyramid: ");
    scanf("%d", &lines);

    int prime_count = 0;
    int number = 2;

    while (prime_count < lines)
    {
        if (is_prime(number))
        {
            for (int i = 0; i < (lines - prime_count - 1); i++)
            {
                printf(" ");
            }
            for (int i = 0; i < number; i++)
            {
                printf("*");
            }
            printf("\n");
            prime_count++;
        }
        number++;
    }

    return 0;
}
