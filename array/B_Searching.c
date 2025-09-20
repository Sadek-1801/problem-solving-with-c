#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n];
    int result = -1;

    for (int i = 0; i < n; i++)
    {
      scanf("%d", &a[i]);
    }

    int idx;
    scanf("%d", &idx);

    for (int i = 0; i < n; i++)
    {
      if (idx == a[i])
      {
        result = i;
        break;
      }
    }
    printf("%d", result);
    return 0;
}