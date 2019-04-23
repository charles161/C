#include <stdio.h>
#include <math.h>

int main()
{

  int max, count, factor, t, i;
  scanf("%d", &t);
  while (t--)
  {
    printf("Enter no:");
    scanf("%d", &max);
    scanf("%d", &count);
    int pdts[count];
    int chars[count + 1];
    int f1, f2, n;
    for (i = 0; i < count; i++)
    {
      scanf("%d", &pdts[i]);
      if (i == 0)
      {
        n = pdts[0];
        for (factor = 2; factor < sqrt(n); factor++)
        {
          if (n % factor == 0)
          {
            f1 = factor;
            if (factor * factor != n)
              f2 = n / factor;
          }
        }
      }
      if (pdts[i] % f1 == 0)
      {
        chars[i] = f1;
        f2 = pdts[i] / f1;
      }
      else
      {
        chars[i] = f2;
        f1 = f2;
        f2 = pdts[i] / f2;
      }
    }
    chars[i] = f2;

    
    for (i = 0; i < count + 1; i++)
    {
      printf("\n%d. %d", i + 1, chars[i]);
    }
  }
  return 0;
}