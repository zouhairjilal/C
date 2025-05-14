#include <stdio.h>
#include <string.h>

int main()
{
    char name[25];

    printf("What's your name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';  // Remove newline character if exists

    while (strlen(name) == 0) // check a condition then excute a block of code if condition is true
    {
        printf("You did not enter your name.\n");
        printf("What's your name: ");
        fgets(name, sizeof(name), stdin);
        name[strcspn(name, "\n")] = '\0';  // Remove newline again
    }

    printf("Hello %s\n", name);

    return 0;
}
