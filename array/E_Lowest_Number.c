#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
      scanf("%d", &a[i]);
    }

    int lowest_num = a[0];
    for (int i = 0; i < n; i++)
    {
      if (a[i] < lowest_num)
      {
        lowest_num = a[i];
      }
      
    }
    printf("%d ", lowest_num);

    for (int i = 0; i < n; i++)
    {
      if (a[i] == lowest_num)
      {
        printf("%d", i+1);
        break;
      }
    }
    
    return 0;
}