#include <stdio.h>
 
int main() {
	// your code goes here
  int n;
  scanf("%d", &n);
  for (int i = 1; i <= 12; i++)
  {
    /* code */
    printf("%d * %d = %d\n", n, i, n*i);
  }
  
  
  return 0;
}