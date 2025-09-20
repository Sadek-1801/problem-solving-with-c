#include <stdio.h>
#include <string.h>

int main() {
    char str[1001];
    scanf("%s", str);
    int size = strlen(str);
    char res[1001];
    for (int i = 0; i < size; i++)
    {
      res[i] = str[size-1-i];
    }
    res[size] = '\0';
    
    if (strcmp(str, res) == 0)
    {
      printf("YES\n");
    }
    else
    {
      printf("NO\n");
    }
    
    return 0;
}