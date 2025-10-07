#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
      char s[1001];
      char t[1001];
      
      scanf("%s %s", s, t);
      
      int len_s = strlen(s);
      int len_t = strlen(t);
      
      int max_len = len_s;
      if (len_s < len_t) {
        max_len = len_t;
      }
      
      for (int j = 0; j < max_len; j++) {
        if (j < len_s) {
          printf("%c", s[j]);
        }
        if (j < len_t) {
          printf("%c", t[j]);
        }
      }
      
      printf("\n");
    }
    
    return 0;
}