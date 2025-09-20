#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    int positive_sum = 0;
    int negetive_sum = 0;
    for (int i = 0; i < n; i++)
    {
      scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
      if (a[i] > 0)
      {
        positive_sum += a[i];
      }
      else if (a[i] < 0)
      {
        negetive_sum += a[i];
      }
    }
    
    printf("%d %d", positive_sum, negetive_sum);
    
    return 0;
}