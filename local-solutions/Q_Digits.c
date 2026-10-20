#include <stdio.h>

int main() 
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
      int a;
      int size = 0;
      scanf("%d", &a);

      while (a > 0)
      {
        printf("%d ", a % 10);
        a = a / 10;
        size++;
      }
      
      printf("\n");
    }
    
    return 0;
}