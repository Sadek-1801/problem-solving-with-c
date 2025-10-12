#include <stdio.h>
#include <string.h>

int is_palindrome(char a[])
{
  int size = strlen(a);
  int x = 0;
  int y = size - 1;
  int flag = 1;

  while (x < y)
  {
    if (a[x] != a[y])
    {
      flag  = 0;
    }
    
    x++;
    y--;
  }
  
  return flag;
}
int main() 
{
    char a[1001];
    scanf("%s", a);
    int flag = is_palindrome(a);
    if (flag == 1)
    {
      printf("Palindrome");
    }
    else
    {
      printf("Not Palindrome");
    }
    
    return 0;
}