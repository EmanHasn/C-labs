#include <stdio.h>

int main() {
    // sum of 2 matrix
  int r, c,
  a[100][100],
  b[100][100],
  sum[100][100], i, j;

  printf("Enter the number of rows (between 1 and 100): ");
  scanf("%d", &r);
  printf("Enter the number of columns (between 1 and 100): ");
  scanf("%d", &c);

   while(r<1 || r>100)
    {
        printf("Please enter valid number of cities: \n");
        scanf("%d" , &r);
    }
    while(c<1 || c>7)
    {
        printf("Please enter valid number of days in week: \n");
        scanf("%d" , &c);
    }

  printf("\nEnter elements of 1st matrix:\n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      printf("Enter element a%d%d: ", i + 1, j + 1);
      scanf("%d", &a[i][j]);
    }

  printf("Enter elements of 2nd matrix:\n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      printf("Enter element b%d%d: ", i + 1, j + 1);
      scanf("%d", &b[i][j]);
    }

  // adding two matrices
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      sum[i][j] = a[i][j] + b[i][j];
    }

  // the result
  printf("\nSum of two matrices: \n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      printf("%d   ", sum[i][j]);
     if (j == c -1) {
        printf("\n\n");
      }
    }
  return 0;
}
