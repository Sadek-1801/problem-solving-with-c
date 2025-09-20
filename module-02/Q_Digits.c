#include <stdio.h>
 
int main() {
	// your code goes here
  // 3984
  // int n;
  // scanf("%d", &n);

  // while(n--)
  // {
  //   int val;
  //   scanf("%d", &val);

  //   do
  //   {
  //     printf("%d ", val % 10);
  //     val /= 10;
  //   }while (val > 0);

  //   printf("\n");
  // }
  
  int t;
  scanf("%d", &t);
  while (t--)
  {
    int val;
    scanf("%d", &val);

    do
    {
      printf("%d ", val % 10);
      val /= 10;
    }while (val > 0);

    printf("\n");
  }
  
  
  return 0;
}