#include <stdio.h>

int main()
{
    int num;
    int sum = 0;
    int count = 0;
    printf("enter the numbers array (0 to terminate): ");

    while (1)
    {
        scanf("%d", &num);
        if (num == 0)
        {
            break;
        }
        sum += num;
        count++;
    }
    printf("the average of the numbers array is ");

    if (count > 0)
    {
        double average = (double)sum / count;
        printf("%.2f ", average);
    }
    else
    {
        printf("invalid input.\n");
    }
    return 0;
}