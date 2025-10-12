#include <stdio.h>

void print_all(int x)
{
  printf("%d", 1);
    for (int i = 2; i <= x; i++)
    {
      printf(" %d", i);
    }
    ;
}
int main() 
{
    int n;
    scanf("%d", &n);
    print_all(n);
    return 0;
}