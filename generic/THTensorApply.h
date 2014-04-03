#ifndef TH_GENERIC_FILE
#define TH_GENERIC_FILE "generic/THTensorApply.h"
#else

void THTensor_(apply)(THTensor *t1,
                             void (*func)(long, real*, long, void*),
                             void *data);
/*

{
  if(THTensor_(isContiguous)(t1))
    func(THTensor_(nElement)(t1),THTensor_(data)(t1), 1, data);
  else
  {
    switch(t1->nDimension)
    {
      case 1:
      {
        long t1sz0 = t1->size[0];
        long t1st0 = t1->stride[0];
        real *t1data = t1->storage->data + t1->storageOffset;
        long t1i0 = 0;
        long r = t1sz0-t1i0;
        func(r, t1data + t1i0*t1st0, t1st0, data);
        t1i0 += r;
        break;
      }

      case 2:
      {
        long t1sz0 = t1->size[0];
        long t1st0 = t1->stride[0];
        long t1sz1 = t1->size[1];
        long t1st1 = t1->stride[1];
        real *t1data = t1->storage->data + t1->storageOffset;
        long t1i0 = 0;
        long t1i1 = 0;
        while(t1i0 < t1sz0) {
          long r = t1sz1-t1i1;
          func(r, t1data + t1i0*t1st0 + t1i1*t1st1, t1st1, data);
          t1i1 += r;
          if(t1i1 == t1sz1) {
            t1i1 = 0;
            t1i0++;
          }
        }
        break;
      }

      default:
        THError("apply on that many dimensions not support yet");
    }
  }
}
*/

#endif
