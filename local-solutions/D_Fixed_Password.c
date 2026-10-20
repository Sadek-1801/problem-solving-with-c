#include <stdio.h>

int main()
{
  for (int i = 0; ; i++)
  {
    int a;
    scanf("%d", &a);
    if (a == 1999)
    {
      printf("Correct\n");
      break;
    }
    else {
      printf("Wrong\n");
    }
  }
  
  return 0;
}