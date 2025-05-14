#include <stdio.h>

int main()
{
    // while loop = check a condition then excute a block of code if condition is true
    // do while loop = always excutes a block of code once, then check a condition 
    // nested loop = a loop inside of another loop

    int rows;
    int cols;

    printf("Enter # of rows: ");
    scanf("%d", &rows);

    printf("Enter # of cols: ");
    scanf("%d", &cols);

    for(int i = 1; i <= rows; i++){

        for(int j = 1; j <= cols; j++){
            printf("$");
        }
        printf("\n");
    }


    return 0;
}
