#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generatePassword(int length)
{
    char password[length + 1];
    char characters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$^&*()_+";

    for (int i = 0; i < length; i++)
    {
        password[i] = characters[rand() % (sizeof(characters) - 1)];
    }

    password[length] = '\0';

    printf("Generated password: %s\n", password);
}

int main()
{
    int length;

    printf("Enter the desired password length: ");
    scanf("%d", &length);

    if (length < 1)
    {
        printf("Password length should be at least 1.\n");
        return 1;
    }

    srand(time(0));
    generatePassword(length);

    return 0;
}
