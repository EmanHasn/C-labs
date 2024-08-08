#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[20];
    printf("Enter a string 1: ");
    fgets(a ,sizeof(a) , stdin);

    char b[20];
    printf("Enter b string 2: ");
    fgets(b ,sizeof(b) , stdin);

    int i;

    // put each i from a to b
    for (i = 0; a[i] != '\0'; ++i) {
        b[i] = a[i];
    }

    printf("String s2: %s", b);

    return 0;
}
