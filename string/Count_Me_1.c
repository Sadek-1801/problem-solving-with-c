#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  int a[n];
  int two_divider = 0;
  int three_divider = 0;

  for (int i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
    if (a[i] % 2 == 0)
    {
      two_divider ++;
    }
    else if (a[i] % 3 == 0)
    {
      three_divider++;
    }
  }

  printf("%d %d", two_divider, three_divider);
  
  return 0;
}
