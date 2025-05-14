#include <stdio.h>
#include <ctype.h>

int main(){

    char unit; // F or C
    float temp;

    printf("Is Temperature in (F) or (C)?: ");
    scanf("%c", &unit);

    unit = toupper(unit);

    printf("what you want to convert: ");
    scanf("%f", &temp);

    if(unit == 'F'){
        temp = (temp - 32) * 5/9;
        printf("Fahrenheit: %.1f", temp);
    }
    else if (unit == 'C'){
        temp = (temp * 9/5) + 32;
        printf("Celsius: %.1f", temp);
    }
    else{
        printf("%c Not a valid unit", unit);
    }

    return 0;
}
