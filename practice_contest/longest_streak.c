#include <stdio.h>

int main () {
    int n;
    scanf("%d", &n);

    int a[n];
    int streak = 0;
    int max_streak = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i<n; i++)
    {
      if (a[i] == 0)
      {
        streak = 0;
      }
      else
      {
        streak++;
        if (streak > max_streak)
        {
          max_streak = streak;
        }
      }
    }

    printf("%d", max_streak);
    return 0;
}