#include <stdio.h>

int main()
{
    double prices[] = {5.0, 10.0, 15.0, 25.0, 20};
    printf("number of bits as single: %d\n", sizeof(prices[0]));
    printf("number of bits on total: %d\n", sizeof(prices));
    printf("double is 8bits * num of array is 5 = %d\n", sizeof(prices)/sizeof(prices[0]));

    for (int i = 0; i < sizeof(prices)/sizeof(prices[0]); i++ )
    {
        printf("$%.1lf\n", prices[i] );
    }


    return 0;
}