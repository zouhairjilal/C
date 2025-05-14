#include <stdio.h>

void hello(char name[], int age); // function prototype
// Easier to navigate a program w/ main() at the top
// Helps with debugging 
// Commonly used in header files
int main()
{
    char name[] = "Zouhair";
    int age = 19;

    hello(name, age);

    return 0;
}

void hello(char name[], int age)
{
    printf("Hello %s\n", name);
    printf("You are %d years old", age);
}