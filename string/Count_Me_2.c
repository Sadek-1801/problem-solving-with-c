#include <stdio.h>
#include <string.h>

int main() {
    char s[10-001];
    scanf("%s", s);
    int size = strlen(s);
    int consonant_count = 0;
    for (int i = 0; i < size; i++)
    {
      if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u')
      {
       consonant_count++;
      }
    }

    printf("%d", consonant_count);
    
    return 0;
}