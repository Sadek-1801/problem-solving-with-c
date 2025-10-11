#include <stdio.h>
#include <math.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
      int m1, m2, d;
      scanf("%d %d %d", &m1, &m2, &d);
      int total_work = m1*d;
      int total_farmers = m1+m2;
      int total_working_days = total_work / total_farmers;
      int fewer_days = d - total_working_days;
      printf("%d \n", fewer_days);
    }
    
    return 0;
}