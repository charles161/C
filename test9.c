#include <stdio.h>
#include <math.h>
int main()
{
  while (1)
  {
    int b, t, n = 0, i;
    unsigned long long a, temp;
    scanf("%llu%d", &a, &b);
    temp = a;
    while (a)
    {
      n++;
      a = a / 10;
    }
    a = temp;

    for (i = 1; i <= b % n; i++)
    {
      temp = a % (int)pow(10, n - 1);
      t = a / (int)pow(10, n - 1);
      a = temp * 10 + t;
    }

    printf("%llu\n\n", a);
  }
}