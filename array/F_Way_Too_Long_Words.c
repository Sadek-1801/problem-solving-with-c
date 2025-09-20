#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
      char a[100];
      scanf("%s", &a);
      int size = strlen(a);
      if(size > 10)
      {
        printf("%c%d%c\n", a[0],size-2,a[size-1]);
      }else
      {
        printf("%s\n", a);
      }
    }
    
    return 0;
}