#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  int a[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }
  int freq[4] = {0};

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      if (a[i]  == j)
      {
        freq[j]++;
      }
    }
  }

  for (int i = 0; i < 4; i++)
  {
    printf("%d = %d\n", i, freq[i]);
  }
  

  return 0;
}