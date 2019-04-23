// center text using printf
#include <stdio.h>
#include <string.h>
int main()
{
  int space = 20;
  char *string = "Hello";
  printf("%-15s", string);
  return 0;
}