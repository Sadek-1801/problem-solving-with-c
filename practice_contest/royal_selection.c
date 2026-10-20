#include <stdio.h>

int main () {
    int a, i, s, e;
    scanf("%d %d %d %d", &a, &i, &s, &e);

    if ((a >= 21 && a <= 35) && (i >= 80 && i <= 100) && (s >= 70 && s <= 100))
    {
      if ((a >= 30 ) && (i >= 95) && (s >= 90))
      {
        printf("Selected\n");
      }
      else if (e >= 2)
      {
        printf("Selected\n");
      }
      else
      {
        printf("Rejected\n");
      }
    }
    else
    {
      printf("Rejected\n");
    }
    
    return 0;
}