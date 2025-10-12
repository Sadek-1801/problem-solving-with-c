#include <stdio.h>
#include <string.h>

int main() {
    char a[10001];
    scanf("%s", a);
    int size = strlen(a);
    char freq[27] = "abcdefghijklmnopqrstuvwxyz";
    int counter[27] =  {0}; 

    for (int i = 0; i < size; i++)
    {
      for (int j = 0; j < 27; j++)
      {
        if (a[i] == freq[j])
        {
          counter[j]++;
        }
      }
    }

    for (int i = 0; i < 27; i++)
    {
      if (counter[i] > 0)
      {
        printf("%c - %d\n", freq[i], counter[i]);
      }
    }
    
    return 0;
}