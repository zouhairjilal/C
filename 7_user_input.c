#include <stdio.h>
#include <string.h>

int main() {
    char name[25]; //bytes
    int age;

    printf("What's your name? : ");
    // scanf("%s", &name); // & is used to get the address of the variable age
    fgets(name, 25, stdin); // if you want to have any white spaces
    name[strlen(name) - 1] = '\0'; // to get rid of new line character

    printf("How old are you? : ");
    scanf("%d", &age);  
    
    printf("Hello, %s \n", name);
    printf("you are %d years old", age);

    return 0;
}