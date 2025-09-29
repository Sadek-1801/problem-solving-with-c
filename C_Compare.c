#include <stdio.h>
#include <string.h>

int main() {
    char a[21], b[21];
    scanf("%s %s", a, b);
    if (strcmp(a, b) > 0)
    {
      printf("%s", b);
    }
    else if (strcmp(a, b) < 0)
    {
      printf("%s", a);
    }
    else
    {
      printf("%s", a);
    }
    
    return 0;
}