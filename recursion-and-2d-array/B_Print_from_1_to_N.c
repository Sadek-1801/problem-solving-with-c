#include <stdio.h>

void pirnt_numbers(int n, int number) 
{
  if (number == n + 1)
  {
    return;
  }
  
  printf("%d\n", number);
  pirnt_numbers(n, number + 1);
}

int main() 
{
    int n;
    scanf("%d", &n);

    int number = 1;
    pirnt_numbers(n, number);
    return 0;
}