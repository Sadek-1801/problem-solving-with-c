#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    int x = 0;
    int y = n-1;
    int res = 1;
    while ( x < y)
    {
      if (a[x] != a[y])
      {
        res = 0;
        break;
      }
      
      x ++;
      y --;
    }

    // for (int i = 0, j = n-1; i < j; i++, j--)
    // {
    //   if (a[i] == a[j])
    //   {
    //     res = 1;
    //   }else
    //   {
    //     res = 0;
    //   }
    // }
    

    if (res == 1)
    {
      printf("YES\n");
    }else
    {
      printf("NO\n");
    }
    
    return 0;
}