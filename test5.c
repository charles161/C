//negative values
#include <stdio.h>

int main()
{
  int a;
  while (1)
  {
    scanf("%d", &a);
    if (a == 0)
    {
      printf("zero\n");
    }
    else if (a > 0)
    {
      printf("positvie\n");
    }
    else
    {
      printf("negative\n");
    }
  }

  return 0;
}