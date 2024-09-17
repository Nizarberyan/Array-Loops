#include <stdio.h>

int main()
{
    const char *days[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    int choice, i;

    printf("Choose a day of the week:\n");
    for (i = 0; i < 7; i++)
    {
        printf("%d. %s\n", i + 1, days[i]);
    }

    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice >= 1 && choice <= 7)
    {
        printf("You chose: %s\n", days[choice - 1]);
        printf("The following days are:\n");
        for (i = choice; i < 7; i++)
        {
            printf("%s\n", days[i]);
        }
    }
    else
    {
        printf("Invalid choice.\n");
    }

    return 0;
}