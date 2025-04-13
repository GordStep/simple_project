#include "MyMath.h"

template <typename T>
T my_abs( T arg )
{
  if (arg < 0)
    return -1 * arg;

  return arg;
}

template <typename T>
T my_n_pow(T arg, int pow)
{
  if (pow == 0) return T(1);

  T res = 1;

  if (pow > 0)
  {
    for ( int i = 0; i < pow; i++ )
    {
      res *= arg;
    }
  }
  else 
  {
    for ( int i = 0; i < -1 * pow; i++ )
    {
      res /= arg;
    }
  }

  return res;
}
