#include <stdio.h>

void pirnt_numbers(int n) 
{
  if (n == 1)
  {
    printf("%d", n);
    return;
  }
  
  printf("%d ", n);
  pirnt_numbers(n - 1);
}

int main() 
{
    int n;
    scanf("%d", &n);

    int number = 1;
    pirnt_numbers(n);
    return 0;
}