#include <stdio.h>

int main() 
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
      scanf("%d", &a[i]);
    }

    int x = 0;
    int y = n -1;
    while (x <= y)
    {
      if (x == y)
      {
        printf("%d", a[x]);
        break;
      }
      
      printf("%d %d ", a[x], a[y]);
      x++;
      y--;
    }
    
    return 0;
}