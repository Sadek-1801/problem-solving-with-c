#include <stdio.h>
#include <string.h>

int main() {
    char a[1000001];
    fgets(a, 1000001, stdin);
    int b = strlen(a);
    int alf[26] = {0};

    for (int i = 0; i < b; i++)
    {
      int val = a[i] -  'a';
      alf[val]++;
    }
    
    for (int i = 0; i < 26; i++)
    {
      if (alf[i] != 0)
      {
        printf("%c : %d\n", i + 'a', alf[i]);
      }
    }
    
    return 0;
}