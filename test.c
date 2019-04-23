#include <stdio.h>
// gets the complete sentence
int main()
{
  char z[100];

  printf("Enter a string\n");
  gets(z);

  printf("The string: %s\n", z);
  return 0;
}