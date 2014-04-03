#ifndef TH_GENERIC_FILE
#define TH_GENERIC_FILE "generic/THTensorFunctor.c"
#else

void THTensor_(sum_functor)(long sz, real *x, long incx, void *sum_)
{
  long i;
  accreal sum = 0;
  if(incx == 1)
  {
    for(i = 0; i < sz; i++)
      sum += x[i];
  }
  else
  {
    for(i = 0; i < sz; i++)
      sum += x[i*incx];
  }
  *(accreal*)sum_ += sum;
}

void THTensor_(add_functor)(long sz, real *x, long incx, real *y, long incy, void *value_)
{
  real value = *(real*)value_;
  long i;
  if(incx == 1 && incy == 1)
  {
    for(i = 0; i < sz; i++)
      y[i] = x[i] + value;
  }
  else if(incx == 1)
  {
    for(i = 0; i < sz; i++)
      y[i*incy] = x[i] + value;
  }
  else if(incy == 1)
  {
    for(i = 0; i < sz; i++)
      y[i] = x[i*incx] + value;
  }
  else
  {
    for(i = 0; i < sz; i++)
    y[i*incy] = x[i*incx] + value;
  }
}

#endif
