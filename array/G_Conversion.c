#include <stdio.h>

int main() {
    char c[100001];
    scanf("%s", c);
    int size = strlen(c);
    for (int i = 0; i < size; i++)
    {
      if (c[i] == ',')
      {
        printf("%c", ' ');
      }
      else if(c[i] >= 'A' && c[i] <= 'Z')
      {
        printf("%c", c[i]+32);
      }
      else if (c[i]  >= 'a' && c[i] <= 'z')
      {
        printf("%c", c[i]-32);
      }
    }
    
    return 0;
}