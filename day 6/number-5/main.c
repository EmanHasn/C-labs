#include <stdio.h>
#include <stdlib.h>

int main()
{
    //getch() describe function with simple demo
    char c = getch();

    printf("\nchar = %c\n" , c);

    char ch[6] = {0}; int x;
    for ( x = 0; x < 5; x++) {
        ch[x] = getch(); // getch() function to take input
        printf("*");
    }
    printf("\nReceived 5 character Input: %s\n", ch);

    return 0;
}
