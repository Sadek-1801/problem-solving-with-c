#include <stdio.h>

int main()
{
  int num;
  scanf("%d", &num);
  int even = 0, odd = 0, positive = 0, negative = 0;
  for (int i = 0; i < num; i++)
  {
    int a;
    scanf("%d", &a);
    if (a % 2 == 0)
    {
      even++;
    }
    else
    {
      odd++;
    }

    if (a > 0)
    {
      positive++;
    }
    else if( a < 0)
    {
      negative++;
    }
  }
  
  printf("Even: %d\n", even);
  printf("Odd: %d\n", odd);
  printf("Positive: %d\n", positive);
  printf("Negative: %d\n", negative);

  return 0;
}
