#include <stdio.h>
int compare(char[],char[]);
int main()
{
   char str1[20];
   char str2[20];
   printf("Enter the first string : ");
   scanf("%s",str1);
   printf("Enter the second string : ");
   scanf("%s",str2);

   int c = compare(str1,str2);

   if(c==0)
   printf("strings are matching");
   else
   printf("strings are not matching");

    return 0;
}

// Comparing both the strings.
int compare(char a[],char b[])
{
    int flag=0,i=0;
    while(a[i]!='\0' &&b[i]!='\0')
    {
       if(a[i]!=b[i])
       {
           flag=1;
           break;
       }
       i++;
    }
    if(flag==0)
    return 0; // flag=0 matching
    else
    return 1; // flag=1 not matching
}
