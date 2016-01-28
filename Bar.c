#include <Lib/Bar.h>

int Bar()
{
  int i = 0;
  int j = 0;
  
  i++ = j++;
  i++ = ++j;

  if (i == j) {
    return i;
  } else {
    return j;
  }
}
