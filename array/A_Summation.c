#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    long long a[n];
    long long sum = 0;
    for(int i = 0; i < n; i++)
    {
      scanf("%lld", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
      sum += a[i];
    }
    printf("%lld", llabs(sum));
    
    return 0;
}

// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     int n;
//     scanf("%d", &n);
//     long long sum = 0; 

//     for (int i = 0; i < n; i++) {
//         int x;
//         scanf("%d", &x);
//         sum += abs(x);
//     }
    
//     printf("%lld", sum);
    
//     return 0;
// }