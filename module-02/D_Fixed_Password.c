#include <stdio.h>
 
int main() {
	// your code goes here
	int n;

  while (scanf("%d", &n))
  {
    if(n == 1999)
    {
      printf("Correct\n");
      break;
    }
    else
    {
      printf("Wrong\n");
    }
  }
  
  return 0;
}