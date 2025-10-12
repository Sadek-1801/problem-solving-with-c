#include <stdio.h>

int main() 
{
    int n;
    scanf("%d", &n);
    int star = 1, space = n - 1;
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < space; j++)
      {
        printf(" ");
      }
      
      if (i % 2 == 0)
      {
        for (int j = 0; j < star; j++)
        {
          printf("#");
        }
      }
      else
      { 
        for (int j = 0; j < star; j++)
        {
          printf("-");
        }
      }      
      
      printf("\n");
      space--;
      star += 2;
    }
    
    space  = 1;
    star -= 4;

    for (int i = 0; i < n-1; i++)
    {
      for (int j = 0; j < space; j++)
      {
        printf(" ");
      }
      
      if ((n+i) % 2 == 0)
      {
        for (int j = 0; j < star; j++)
        {
          printf("#");
        }
      }
      else
      { 
        for (int j = 0; j < star; j++)
        {
          printf("-");
        }
      }      
      
      printf("\n");
      space++;
      star -= 2;
    }
    return 0;
}