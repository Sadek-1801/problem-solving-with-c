#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
      scanf("%d", &a[i]);
    }
    
    int idx, val;
    scanf("%d", &idx);
    scanf("%d", &val);
    a[idx] = val;
    
    for (int i = n-1; i >= 0; i--)
    {
      printf("%d ", a[i]);
    }
    return 0;
}