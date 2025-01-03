// Signed integer overflow example 
#include <limits.h>
#include <stdio.h>

int main (void)
{
  printf ("%d\n", (INT_MAX+1) < 0);
  // runtime error: signed integer overflow: 2147483647 + 1 cannot be represented in type 'int'
  return 0;
}

