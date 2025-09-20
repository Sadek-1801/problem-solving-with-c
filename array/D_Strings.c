#include <stdio.h>
#include <string.h>

int main() {
    char a[11];
    scanf("%s", a);
    char b[11];
    scanf("%s", b);
    int sizeA =  strlen(a);
    int sizeB =  strlen(b);

    printf("%d %d\n", sizeA, sizeB);

    char c[sizeA + sizeB + 1];

    for (int i = 0; i < sizeA; i++)
    {
      c[i] = a[i];
    }

    for (int i = 0; i < sizeB; i++)
    {
      c[i+sizeA] = b[i];
    }
    c[sizeA+sizeB] = '\0';
    printf("%s\n", c);
    
    char temp =  a[0];
    a[0] = b[0];
    b[0] = temp;
    printf("%s %s", a, b);
    return 0;
}