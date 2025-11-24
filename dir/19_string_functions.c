#include <stdio.h>
#include <string.h>

int main()
{
    char string1[] = "Bro";
    char string2[] = "Code";

    // strlwr(string1);               //Convert string1 to lowercase
    // strupr(string1);               //Convert string1 to uppercase 
    strcat(string1, string2);      //append string2 to end of string1
    // strncat(string1, string2, 1);  //append 1 character from string2 to string1
    // strcpy(string1, string2);      //Copy string2 to string1
    // strncpy(string1, string2, 2);  //Copy n characters from string2 to string1
    // strrev(string1);
    
    // int result = strlen(string1);
    // int result = strcmp(string1, string2);      //Compare string1 and string2
    // int result = strcmpi(string1, string2);     //Compare string1 and string2 ignoring case
    // int result = strnicmp(string1, string2, 1); //Compare n characters of string1 and string2

    printf("%s", string1);
    // printf("%d", result);

    return 0;
}
