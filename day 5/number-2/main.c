#include <stdio.h>
#include <string.h>

int main()
{
    //Write a program in C to find the length of a string
    //length with built-in function
   char a[20] ;
   char i;
   printf("Enter a string: ");
   fgets(a ,sizeof(a) , stdin);
   printf("Length of string a = %zu \n",strlen(a));

    return 0;
}
