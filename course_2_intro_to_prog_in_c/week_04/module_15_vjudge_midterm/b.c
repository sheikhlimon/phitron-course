/**
 *	author : sheikhlimon
 *	created : 13.05.2022
 **/

#include <stdio.h>
#include <string.h>
int main()
{
  int n, a, s = 0, max = 0;
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &a);
    if (a > max)
    {
      max = a;
    }
    s += a;
  }
  printf("%d", n * max - s);
}