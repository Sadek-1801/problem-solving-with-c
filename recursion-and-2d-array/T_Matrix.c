#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int n;
    scanf("%d", &n);
    int a[n][n];

    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
      {
        scanf("%d", &a[i][j]);
      }
    }

    int sum_of_main_diagonal = 0;
    int sum_of_secondary_diagonal = 0;

    for (int i = 0; i < n; i++)
    {
      sum_of_secondary_diagonal += a[i][n - i - 1];
      sum_of_main_diagonal += a[i][i];
    }
    
    printf("%d", abs(sum_of_main_diagonal - sum_of_secondary_diagonal));
    return 0;
}