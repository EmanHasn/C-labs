#include <stdio.h>
#include <string.h>

int main()
{
    char a[20];
    printf("Enter a string 1: ");
    fgets(a ,sizeof(a) , stdin);

    char b[20];
    printf("Enter b string 2: ");
    fgets(b ,sizeof(b) , stdin);

  int i, j;

  // store length of s1 in the length variable
  i = 0;
  while (a[i] != '\0') {
    ++i;
  }

  // concatenate s2 to s1
  for (j = 0; b[j] != '\0'; ++j, ++i) {
    a[i] += b[j];
  }

  printf("After concatenation: ");
  puts(a);

    return 0;
}
