#include <stdio.h>

int main() {

    int age;
    
    printf("Enter your Age: ");
    scanf("%d", &age);

    if (age >= 18){
        printf("You are now signed up");
    }
    else if (age <= 0){
        printf("you havn't born yet");
    }
    else {
        printf("you are too young to sign up!");
    }
    

    return 0;
}