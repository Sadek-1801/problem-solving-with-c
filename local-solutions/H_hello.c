#include <stdio.h>

int main()
{
  int n;

  scanf("%d", &n);
  int sum = 0;
  int a[n];
  for (int i=0;i < n; i++) {
    scanf("%d", &a[i]);
    sum += a[i];
  }
  if (sum < 0) {
    printf("%d", sum * -1);
  }else {
    printf("%d", sum);
  }

  return 0;
}
