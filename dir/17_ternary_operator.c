#include <stdio.h>

int findMax(int a, int b){
    if (a > b){
        return a;
    }
    else {
        return b;
    }
}

int main()
{
    int max = findMax(3, 4);

    printf("Max is: %d", max);

    return 0;
}