#include <stdio.h>

int main()
{
    // while loop = check a condition then excute a block of code if condition is true
    // do while loop = always excutes a block of code once, then check a condition 

    int num = 0;
    int sum = 0;

    /*while (num > 0)
    {
        printf("Enter a number above 0:");
        scanf("%d", &num);

        if(num > 0)
        {
            sum += num;    
        }
    }*/

    do {
        printf("Enter a number above 0: ");
        scanf("%d", &num);

        if(num > 0)
        {
            sum += num;    
        }
    }while (num > 0);

    printf("sum: %d", sum);

    return 0;
}
