#include <Lib/Bar.h>

int Bar()
{
  int i = 0;
  int j = 0;
  
  i++ = j++;
  i++ = ++j;
  return i;
}
