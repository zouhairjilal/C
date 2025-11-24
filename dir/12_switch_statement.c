#include <stdio.h>

int main() {

    // switch = A more efficient alternative to using many "else if" statements

    char grade;

    printf("Enter a letter grade: ");
    scanf("%c", &grade);

    switch (grade)
    {
    case 'A':
        printf("Excellent!\n");
        break;
    case 'B':
        printf("Good job!\n");
        break;
    case 'C':
        printf("Well done!\n");
        break;
    case 'D':
        printf("You passed.\n");
        break;
    case 'F':
        printf("Better try again.\n");
        break;
    default:
        printf("Invalid grade.\n");
        // No break needed here, as this is the last case
    }

    return 0;
}