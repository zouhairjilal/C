#include <stdio.h>
// void, double, char
double square(double x) {
    return x * x ; 
}

int main()
{
    double result = square(5);
    printf("%.2lf", result);

    return 0;
}