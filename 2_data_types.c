#include <stdio.h>
#include <stdbool.h>

int main() {

    char a = 'C';           // single character             -> %c
    char b[] = "Bro";       // array of characters (string) -> %s

    float c = 3.141592653589793f;   // 4 bytes (32-bit precision), ~6-7 digits -> %f
    double d = 3.141592653589793;   // 8 bytes (64-bit precision), ~15-16 digits -> %lf

    bool e = true;          // 1 byte (true or false)       -> %d (prints as 0 or 1)

    char f = 100;                   // 1 byte (can be printed as int %d or char %c)
    unsigned char g = 255;          // 1 byte (0 to 255)        -> %d or %c

    short int h = 32767;            // 2 bytes (-32,768 to +32,767) -> %d
    unsigned short int i = 65535;   // 2 bytes (0 to 65,535)         -> %d

    int j = 2147483647;             // 4 bytes (-2^31 to +2^31 - 1) -> %d
    unsigned int k = 4294967295U;   // 4 bytes (0 to 2^32 - 1)      -> %u

    long int l = 2147483647L;       // Typically 4 bytes (on 32-bit systems) -> %ld
    unsigned long int m = 4294967295UL; // Typically 4 bytes                 -> %lu

    long long int n = 9223372036854775807LL;           // 8 bytes (64-bit) (-9 quintillion to +9 quintillion) -> %lld
    unsigned long long int o = 18446744073709551615ULL; // 8 bytes (0 to 18 quintillion) -> %llu

    // Print values
    printf("Character a: %c\n", a);
    printf("String b: %s\n", b);
    printf("Float c: %f\n", c);
    printf("Double d: %lf\n", d);
    printf("Boolean e: %d\n", e);
    printf("Char f: %d (or %c)\n", f, f);
    printf("Unsigned char g: %d (or %c)\n", g, g);
    printf("Short int h: %d\n", h);
    printf("Unsigned short int i: %d\n", i);
    printf("Int j: %d\n", j);
    printf("Unsigned int k: %u\n", k);
    printf("Long int l: %ld\n", l);
    printf("Unsigned long int m: %lu\n", m);
    printf("Long long int n: %lld\n", n);
    printf("Unsigned long long int o: %llu\n", o);

    return 0;
}
