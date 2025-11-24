#include <stdio.h>  

int main(){
    // format specifier % is used to format the output

    // %.1 = decimal precision
    // %1 = minimum field with
    // %- = left align 

    // %d is used to print integer values
    // %f is used to print float values
    // %c is used to print character values
    // %s is used to print string values
    // %lf is used to print double values
    // %u is used to print unsigned integer values
    // %ld is used to print long integer values
    // %lu is used to print unsigned long integer values
    // %lld is used to print long long integer values
    // %llu is used to print unsigned long long integer values
    // %x is used to print hexadecimal values
    // %o is used to print octal values
    // %p is used to print pointer values
    // %e is used to print scientific notation values
    // %g is used to print general format values
    // %a is used to print hexadecimal floating point values

    float item1 = 5.5;
    float item2 = 10.00;
    float item3 = 100.99;

    printf("Item 1: $%.2f \n", item1);
    printf("Item 1: $%8.2f \n", item2);
    printf("Item 1: $%-8.2f .\n", item3);


    return 0;
}
