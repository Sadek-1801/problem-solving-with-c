#include <stdio.h>
#include <string.h>

int count_vowels(char s[], int i) 
{
  if (s[i] == '\0')
  {
    return 0;
  }
  int count = 0;
  
  if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' )
  {
    count = 1 + count_vowels(s, i + 1);
  }
  else
  {
    count = 0 + count_vowels(s, i + 1);
  }
  
  return count;
}
int main() 
{
    char s[201];
    fgets(&s, 201, stdin);
    int answer = count_vowels(s, 0);
    printf("%d", answer);
    return 0;
}