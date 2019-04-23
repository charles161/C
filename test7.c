//even first odd second

#include <stdio.h>

int main()
{

  while (1)
  {
    int a, t, i, j, n = 0, obnd = 0, ebnd = 0, temp, k = 0;
    scanf("%d", &a);
    t = a;
    while (a != 0)
    {
      n++;
      a = a / 10;
    }
    // printf("%d\n\n", n);
    int c[n];
    obnd = n - 1;
    for (i = 0; i < n; i++)
    {
      c[i] = -1;
      // printf("%d\n", c[i]);
    }
    // printf("\n\n");
    for (i = 0; i < n; i++)
    {
      a = t % 10;
      t = t / 10;
      // printf("%d\n", a);
      if (a % 2 == 0)
      {
        for (j = 0; j <= obnd; j++)
        {
          if ((a < c[j] || c[j] == -1) && a != -1)
          {
            temp = c[j];
            c[j] = a;
            a = temp;
          }
        }
        ebnd++;
      }
      else
      {
        for (j = n - 1; j >= ebnd; j--)
        {
          if ((a > c[j] || c[j] == -1) && a != -1)
          {
            temp = c[j];
            c[j] = a;
            a = temp;
          }
        }
        obnd--;
      }
    }
    // for (i = 0; i < n; i++)
    //   k = 10 * k + c[i];
    // printf("%d\n", k);

    for (i = 0; i < n; i++)
    {
      printf("\r%d", c[i]);
      fflush(stdout);
    }

    printf("\n\n");
  }

  return 0;
}