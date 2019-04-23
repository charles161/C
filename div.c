#include <stdio.h>
#include <math.h>

int main()
{

  int x, y;
  while (1)
  {
    printf("Enter no:\n");
    scanf("%d%d", &x, &y);
    printf("%d", x / y);
  }
  return 0;
}