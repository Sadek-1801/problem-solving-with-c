#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
      char a[10001];
      scanf("%s", a);
      int size = strlen(a);
      int digit = 0;
      int capital = 0;
      int small = 0;

      for (int i = 0; i < size; i++)
      {
        if (a[i] >= '0' && a[i] <= '9')
        {
          digit++;
        } 
        else if (a[i] >= 'A' && a[i] <= 'Z')
        {
          capital++;
        }
        else if (a[i] >= 'a' && a[i] <= 'z')
        {
          small++;
        }
      }
      
      printf("%d %d %d\n", capital, small, digit);
    }
    
    return 0;
}