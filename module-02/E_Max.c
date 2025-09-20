#include <stdio.h>
#include <limits.h>
 
int main() {
	// your code goes here
	int n;
  scanf("%d", &n);
  
  int max = INT_MIN;
  
  for (int i = 0; i <= n - 1; i++)
  {
    int val;
    scanf("%d", &val);

    if(val > max)
    {
      max = val;
    }
  }
  
  printf("%d", max);
  return 0;
}