#include "MyMath.h"

double my_abs( double arg )
{
  if (arg < 0)
    return -1 * arg;

  return arg;
}

double my_n_pow(double arg, int pow)
{
  if (pow == 0) return 1;

  double res = 1;

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

float my_abs(float arg)
{
    if (arg < 0)
        return -1 * arg;

    return arg;
}

float my_n_pow(float arg, int pow)
{
    if (pow == 0) return 1;

    float res = 1;

    if (pow > 0)
    {
        for (int i = 0; i < pow; i++)
        {
            res *= arg;
        }
    }
    else
    {
        for (int i = 0; i < -1 * pow; i++)
        {
            res /= arg;
        }
    }

    return res;
}

int my_abs(int arg)
{
    if (arg < 0)
        return -1 * arg;

    return arg;
}

int my_n_pow(int arg, int pow)
{
    if (pow == 0) return 1;

    int res = 1;

    if (pow > 0)
    {
        for (int i = 0; i < pow; i++)
        {
            res *= arg;
        }
    }
    else
    {
        for (int i = 0; i < -1 * pow; i++)
        {
            res /= arg;
        }
    }

    return res;
}
