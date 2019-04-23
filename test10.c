//eve and odd much simpleralgorithm
#include <stdio.h>

int main()
{
  while (1)
  {
    int num, digit, oddplace = 1, evenplace = 1, oddgroup = 0, evengroup = 0, res;
    scanf("%d", &num);
    while (num)
    {
      digit = num % 10;
      if (digit % 2 == 0)
      {
        evengroup = evengroup + digit * evenplace;
        evenplace *= 10;
      }
      else
      {
        oddgroup = oddgroup + digit * oddplace;
        oddplace *= 10;
      }
      num /= 10;
    }
    res = evengroup * oddplace + oddgroup;
    printf("%d\n\n", res);
  }

  return 0;
}