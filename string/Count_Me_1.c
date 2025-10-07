#include <stdio.h>

// int main() {
//   int n;
//   scanf("%d", &n);
//   int star = n, space = 0;
//   for (int i = 1; i <= n; i++) 
//   {
//     for (int j = 1; j <= space; j++)
//     {
//       printf(" ");
//     }

//     for (int j = 1; j <= star; j++)
//     {
//       printf("*");
//     }
//     printf("\n");
//     star -= 2;
//     space ++;
//   }

//   return 0;
// }

int  main() {
  int n;
  scanf("%d", &n);
  int a[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }
  
  int x;
  scanf("%d", &x);
  for (int i = 0; i < n; i++)
  {
    for (int j = i+1; j < n; j++)
    {
      if (a[i] + a[j] == x)
      {
        // printf("%d %d\n", a[i], a[j]);
        printf("YES");
      }
    }
  }
  
  return 0;
}