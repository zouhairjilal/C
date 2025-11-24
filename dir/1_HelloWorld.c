#include <stdio.h>

int main(){

    // variable = Allocated space in memory to store a value

    
    int a;          //declaration
    a = 5;
    int b = 10;     //declaration + initialization

    int age = 21;   //integer
    float gpa = 2.05; //floating point number
    char grade = 'C'; //single characters
    char name[] = "Bro"; //array of characters

    printf("Hello %s \n", name); //%s string
    printf("You are %d years old \n", age); //%d decimal
    printf("Your average grade is %c \n", grade); //%c character
    printf("Your GPA is %f \n", gpa); //%.2f floating point number with 2 decimal places 


    return 0;
}