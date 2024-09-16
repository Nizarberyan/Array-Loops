#include <stdio.h>

int binarySearch(int arr[], int size, int target)
{
    int low = 0;
    int high = size - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target)
            return mid;

        if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}

int main()
{
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25};
    int size = sizeof(arr) / sizeof(arr[0]);

    int target;
    printf("Enter the number to search: ");
    scanf("%d", &target);

    int result = binarySearch(arr, size, target);

    if (result != -1)
    {
        printf("Number %d found at index %d.\n", target, result);
    }
    else
    {
        printf("Number %d not found in the array.\n", target);
    }

    return 0;
}
