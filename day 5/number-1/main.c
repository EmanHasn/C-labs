#include <stdio.h>
#include <string.h>

int main()
{
    // a program in C to input a string and print it

    // string a line with space
    char fullName[30];
    printf("enter full name:");
    fgets(fullName , sizeof(fullName) , stdin);
    printf("\n your name :");
    puts(fullName);

    //a word without space

    char fname[20];
    printf("\n enter your first name: ");
    scanf("%s", &fname);

    char lname[20];
    printf("\n enter your last name: ");
    scanf("%s", &lname);

    printf("\n your first name is: %s \n" , fname);
    printf("\n your last name is: %s \n" , lname);

    return 0;
}
