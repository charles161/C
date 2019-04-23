#include <stdio.h>

int main()
{
  while (1)
  {
    int a, t, n = 0, i, j, temp;
    scanf("%d", &a);
    t = a;
    while (a)
    {
      n++;
      a = a / 10;
    }
    a = t;
    int c[n];
    for (i = n - 1; i >= 0; i--, a = a / 10)
    {
      c[i] = a % 10;
    }
    for (j = 0; j < n; j++)
      for (i = 0; i < n - 1; i++)
      {
        if (c[i] % 2 != 0 && c[i + 1] % 2 == 0)
        {
          temp = c[i];
          c[i] = c[i + 1];
          c[i + 1] = temp;
        }
      }
    for (i = 0; i < n; i++)
    {
      printf("%d", c[i]);
    }
    printf("\n\n");
  }
}