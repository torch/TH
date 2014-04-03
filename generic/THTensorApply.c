#ifndef TH_GENERIC_FILE
#define TH_GENERIC_FILE "generic/THTensorApply.c"
#else

static void THTensor_(apply_1)(THTensor *t1, void (*func)(long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t1i0 = 0;
  long r = t1sz0-t1i0;
  func(r, t1data + t1i0*t1st0, t1st0, data);
  t1i0 += r;
}

static void THTensor_(apply_2)(THTensor *t1, void (*func)(long, real*, long, void*), void *data)
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
}

static void THTensor_(apply_3)(THTensor *t1, void (*func)(long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  long t1sz2 = t1->size[2];
  long t1st2 = t1->stride[2];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t1i2 = 0;
  while(t1i0 < t1sz0) {
    long r = t1sz2-t1i2;
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1 + t1i2*t1st2, t1st2, data);
    t1i2 += r;
    if(t1i2 == t1sz2) {
      t1i2 = 0;
      t1i1++;
      if(t1i1 == t1sz1) {
        t1i1 = 0;
        t1i0++;
      }
    }
  }
}

static void THTensor_(apply_4)(THTensor *t1, void (*func)(long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  long t1sz2 = t1->size[2];
  long t1st2 = t1->stride[2];
  long t1sz3 = t1->size[3];
  long t1st3 = t1->stride[3];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t1i2 = 0;
  long t1i3 = 0;
  while(t1i0 < t1sz0) {
    long r = t1sz3-t1i3;
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1 + t1i2*t1st2 + t1i3*t1st3, t1st3, data);
    t1i3 += r;
    if(t1i3 == t1sz3) {
      t1i3 = 0;
      t1i2++;
      if(t1i2 == t1sz2) {
        t1i2 = 0;
        t1i1++;
        if(t1i1 == t1sz1) {
          t1i1 = 0;
          t1i0++;
        }
      }
    }
  }
}

static void THTensor_(apply_5)(THTensor *t1, void (*func)(long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  long t1sz2 = t1->size[2];
  long t1st2 = t1->stride[2];
  long t1sz3 = t1->size[3];
  long t1st3 = t1->stride[3];
  long t1sz4 = t1->size[4];
  long t1st4 = t1->stride[4];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t1i2 = 0;
  long t1i3 = 0;
  long t1i4 = 0;
  while(t1i0 < t1sz0) {
    long r = t1sz4-t1i4;
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1 + t1i2*t1st2 + t1i3*t1st3 + t1i4*t1st4, t1st4, data);
    t1i4 += r;
    if(t1i4 == t1sz4) {
      t1i4 = 0;
      t1i3++;
      if(t1i3 == t1sz3) {
        t1i3 = 0;
        t1i2++;
        if(t1i2 == t1sz2) {
          t1i2 = 0;
          t1i1++;
          if(t1i1 == t1sz1) {
            t1i1 = 0;
            t1i0++;
          }
        }
      }
    }
  }
}

static void THTensor_(apply_1_1)(THTensor *t1, THTensor *t2, void (*func)(long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t1i0 = 0;
  long t2i0 = 0;
  long r = (t1sz0-t1i0 < t2sz0-t2i0 ? t1sz0-t1i0 : t2sz0-t2i0);
  func(r, t1data + t1i0*t1st0, t1st0, t2data + t2i0*t2st0, t2st0, data);
  t1i0 += r;
  t2i0 += r;
}

static void THTensor_(apply_1_2)(THTensor *t1, THTensor *t2, void (*func)(long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t1i0 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  while(t2i0 < t2sz0) {
    long r = (t1sz0-t1i0 < t2sz1-t2i1 ? t1sz0-t1i0 : t2sz1-t2i1);
    func(r, t1data + t1i0*t1st0, t1st0, t2data + t2i0*t2st0 + t2i1*t2st1, t2st1, data);
    t1i0 += r;
    t2i1 += r;
    if(t2i1 == t2sz1) {
      t2i1 = 0;
      t2i0++;
    }
  }
}

static void THTensor_(apply_1_3)(THTensor *t1, THTensor *t2, void (*func)(long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  long t2sz2 = t2->size[2];
  long t2st2 = t2->stride[2];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t1i0 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t2i2 = 0;
  while(t2i0 < t2sz0) {
    long r = (t1sz0-t1i0 < t2sz2-t2i2 ? t1sz0-t1i0 : t2sz2-t2i2);
    func(r, t1data + t1i0*t1st0, t1st0, t2data + t2i0*t2st0 + t2i1*t2st1 + t2i2*t2st2, t2st2, data);
    t1i0 += r;
    t2i2 += r;
    if(t2i2 == t2sz2) {
      t2i2 = 0;
      t2i1++;
      if(t2i1 == t2sz1) {
        t2i1 = 0;
        t2i0++;
      }
    }
  }
}

static void THTensor_(apply_1_4)(THTensor *t1, THTensor *t2, void (*func)(long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  long t2sz2 = t2->size[2];
  long t2st2 = t2->stride[2];
  long t2sz3 = t2->size[3];
  long t2st3 = t2->stride[3];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t1i0 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t2i2 = 0;
  long t2i3 = 0;
  while(t2i0 < t2sz0) {
    long r = (t1sz0-t1i0 < t2sz3-t2i3 ? t1sz0-t1i0 : t2sz3-t2i3);
    func(r, t1data + t1i0*t1st0, t1st0, t2data + t2i0*t2st0 + t2i1*t2st1 + t2i2*t2st2 + t2i3*t2st3, t2st3, data);
    t1i0 += r;
    t2i3 += r;
    if(t2i3 == t2sz3) {
      t2i3 = 0;
      t2i2++;
      if(t2i2 == t2sz2) {
        t2i2 = 0;
        t2i1++;
        if(t2i1 == t2sz1) {
          t2i1 = 0;
          t2i0++;
        }
      }
    }
  }
}

static void THTensor_(apply_1_5)(THTensor *t1, THTensor *t2, void (*func)(long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  long t2sz2 = t2->size[2];
  long t2st2 = t2->stride[2];
  long t2sz3 = t2->size[3];
  long t2st3 = t2->stride[3];
  long t2sz4 = t2->size[4];
  long t2st4 = t2->stride[4];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t1i0 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t2i2 = 0;
  long t2i3 = 0;
  long t2i4 = 0;
  while(t2i0 < t2sz0) {
    long r = (t1sz0-t1i0 < t2sz4-t2i4 ? t1sz0-t1i0 : t2sz4-t2i4);
    func(r, t1data + t1i0*t1st0, t1st0, t2data + t2i0*t2st0 + t2i1*t2st1 + t2i2*t2st2 + t2i3*t2st3 + t2i4*t2st4, t2st4, data);
    t1i0 += r;
    t2i4 += r;
    if(t2i4 == t2sz4) {
      t2i4 = 0;
      t2i3++;
      if(t2i3 == t2sz3) {
        t2i3 = 0;
        t2i2++;
        if(t2i2 == t2sz2) {
          t2i2 = 0;
          t2i1++;
          if(t2i1 == t2sz1) {
            t2i1 = 0;
            t2i0++;
          }
        }
      }
    }
  }
}

static void THTensor_(apply_2_1)(THTensor *t1, THTensor *t2, void (*func)(long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t2i0 = 0;
  while(t1i0 < t1sz0) {
    long r = (t1sz1-t1i1 < t2sz0-t2i0 ? t1sz1-t1i1 : t2sz0-t2i0);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1, t1st1, t2data + t2i0*t2st0, t2st0, data);
    t1i1 += r;
    if(t1i1 == t1sz1) {
      t1i1 = 0;
      t1i0++;
    }
    t2i0 += r;
  }
}

static void THTensor_(apply_2_2)(THTensor *t1, THTensor *t2, void (*func)(long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  while(t1i0 < t1sz0 && t2i0 < t2sz0) {
    long r = (t1sz1-t1i1 < t2sz1-t2i1 ? t1sz1-t1i1 : t2sz1-t2i1);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1, t1st1, t2data + t2i0*t2st0 + t2i1*t2st1, t2st1, data);
    t1i1 += r;
    if(t1i1 == t1sz1) {
      t1i1 = 0;
      t1i0++;
    }
    t2i1 += r;
    if(t2i1 == t2sz1) {
      t2i1 = 0;
      t2i0++;
    }
  }
}

static void THTensor_(apply_2_3)(THTensor *t1, THTensor *t2, void (*func)(long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  long t2sz2 = t2->size[2];
  long t2st2 = t2->stride[2];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t2i2 = 0;
  while(t1i0 < t1sz0 && t2i0 < t2sz0) {
    long r = (t1sz1-t1i1 < t2sz2-t2i2 ? t1sz1-t1i1 : t2sz2-t2i2);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1, t1st1, t2data + t2i0*t2st0 + t2i1*t2st1 + t2i2*t2st2, t2st2, data);
    t1i1 += r;
    if(t1i1 == t1sz1) {
      t1i1 = 0;
      t1i0++;
    }
    t2i2 += r;
    if(t2i2 == t2sz2) {
      t2i2 = 0;
      t2i1++;
      if(t2i1 == t2sz1) {
        t2i1 = 0;
        t2i0++;
      }
    }
  }
}

static void THTensor_(apply_2_4)(THTensor *t1, THTensor *t2, void (*func)(long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  long t2sz2 = t2->size[2];
  long t2st2 = t2->stride[2];
  long t2sz3 = t2->size[3];
  long t2st3 = t2->stride[3];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t2i2 = 0;
  long t2i3 = 0;
  while(t1i0 < t1sz0 && t2i0 < t2sz0) {
    long r = (t1sz1-t1i1 < t2sz3-t2i3 ? t1sz1-t1i1 : t2sz3-t2i3);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1, t1st1, t2data + t2i0*t2st0 + t2i1*t2st1 + t2i2*t2st2 + t2i3*t2st3, t2st3, data);
    t1i1 += r;
    if(t1i1 == t1sz1) {
      t1i1 = 0;
      t1i0++;
    }
    t2i3 += r;
    if(t2i3 == t2sz3) {
      t2i3 = 0;
      t2i2++;
      if(t2i2 == t2sz2) {
        t2i2 = 0;
        t2i1++;
        if(t2i1 == t2sz1) {
          t2i1 = 0;
          t2i0++;
        }
      }
    }
  }
}

static void THTensor_(apply_2_5)(THTensor *t1, THTensor *t2, void (*func)(long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  long t2sz2 = t2->size[2];
  long t2st2 = t2->stride[2];
  long t2sz3 = t2->size[3];
  long t2st3 = t2->stride[3];
  long t2sz4 = t2->size[4];
  long t2st4 = t2->stride[4];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t2i2 = 0;
  long t2i3 = 0;
  long t2i4 = 0;
  while(t1i0 < t1sz0 && t2i0 < t2sz0) {
    long r = (t1sz1-t1i1 < t2sz4-t2i4 ? t1sz1-t1i1 : t2sz4-t2i4);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1, t1st1, t2data + t2i0*t2st0 + t2i1*t2st1 + t2i2*t2st2 + t2i3*t2st3 + t2i4*t2st4, t2st4, data);
    t1i1 += r;
    if(t1i1 == t1sz1) {
      t1i1 = 0;
      t1i0++;
    }
    t2i4 += r;
    if(t2i4 == t2sz4) {
      t2i4 = 0;
      t2i3++;
      if(t2i3 == t2sz3) {
        t2i3 = 0;
        t2i2++;
        if(t2i2 == t2sz2) {
          t2i2 = 0;
          t2i1++;
          if(t2i1 == t2sz1) {
            t2i1 = 0;
            t2i0++;
          }
        }
      }
    }
  }
}

static void THTensor_(apply_3_1)(THTensor *t1, THTensor *t2, void (*func)(long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  long t1sz2 = t1->size[2];
  long t1st2 = t1->stride[2];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t1i2 = 0;
  long t2i0 = 0;
  while(t1i0 < t1sz0) {
    long r = (t1sz2-t1i2 < t2sz0-t2i0 ? t1sz2-t1i2 : t2sz0-t2i0);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1 + t1i2*t1st2, t1st2, t2data + t2i0*t2st0, t2st0, data);
    t1i2 += r;
    if(t1i2 == t1sz2) {
      t1i2 = 0;
      t1i1++;
      if(t1i1 == t1sz1) {
        t1i1 = 0;
        t1i0++;
      }
    }
    t2i0 += r;
  }
}

static void THTensor_(apply_3_2)(THTensor *t1, THTensor *t2, void (*func)(long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  long t1sz2 = t1->size[2];
  long t1st2 = t1->stride[2];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t1i2 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  while(t1i0 < t1sz0 && t2i0 < t2sz0) {
    long r = (t1sz2-t1i2 < t2sz1-t2i1 ? t1sz2-t1i2 : t2sz1-t2i1);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1 + t1i2*t1st2, t1st2, t2data + t2i0*t2st0 + t2i1*t2st1, t2st1, data);
    t1i2 += r;
    if(t1i2 == t1sz2) {
      t1i2 = 0;
      t1i1++;
      if(t1i1 == t1sz1) {
        t1i1 = 0;
        t1i0++;
      }
    }
    t2i1 += r;
    if(t2i1 == t2sz1) {
      t2i1 = 0;
      t2i0++;
    }
  }
}

static void THTensor_(apply_3_3)(THTensor *t1, THTensor *t2, void (*func)(long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  long t1sz2 = t1->size[2];
  long t1st2 = t1->stride[2];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  long t2sz2 = t2->size[2];
  long t2st2 = t2->stride[2];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t1i2 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t2i2 = 0;
  while(t1i0 < t1sz0 && t2i0 < t2sz0) {
    long r = (t1sz2-t1i2 < t2sz2-t2i2 ? t1sz2-t1i2 : t2sz2-t2i2);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1 + t1i2*t1st2, t1st2, t2data + t2i0*t2st0 + t2i1*t2st1 + t2i2*t2st2, t2st2, data);
    t1i2 += r;
    if(t1i2 == t1sz2) {
      t1i2 = 0;
      t1i1++;
      if(t1i1 == t1sz1) {
        t1i1 = 0;
        t1i0++;
      }
    }
    t2i2 += r;
    if(t2i2 == t2sz2) {
      t2i2 = 0;
      t2i1++;
      if(t2i1 == t2sz1) {
        t2i1 = 0;
        t2i0++;
      }
    }
  }
}

static void THTensor_(apply_3_4)(THTensor *t1, THTensor *t2, void (*func)(long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  long t1sz2 = t1->size[2];
  long t1st2 = t1->stride[2];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  long t2sz2 = t2->size[2];
  long t2st2 = t2->stride[2];
  long t2sz3 = t2->size[3];
  long t2st3 = t2->stride[3];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t1i2 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t2i2 = 0;
  long t2i3 = 0;
  while(t1i0 < t1sz0 && t2i0 < t2sz0) {
    long r = (t1sz2-t1i2 < t2sz3-t2i3 ? t1sz2-t1i2 : t2sz3-t2i3);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1 + t1i2*t1st2, t1st2, t2data + t2i0*t2st0 + t2i1*t2st1 + t2i2*t2st2 + t2i3*t2st3, t2st3, data);
    t1i2 += r;
    if(t1i2 == t1sz2) {
      t1i2 = 0;
      t1i1++;
      if(t1i1 == t1sz1) {
        t1i1 = 0;
        t1i0++;
      }
    }
    t2i3 += r;
    if(t2i3 == t2sz3) {
      t2i3 = 0;
      t2i2++;
      if(t2i2 == t2sz2) {
        t2i2 = 0;
        t2i1++;
        if(t2i1 == t2sz1) {
          t2i1 = 0;
          t2i0++;
        }
      }
    }
  }
}

static void THTensor_(apply_3_5)(THTensor *t1, THTensor *t2, void (*func)(long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  long t1sz2 = t1->size[2];
  long t1st2 = t1->stride[2];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  long t2sz2 = t2->size[2];
  long t2st2 = t2->stride[2];
  long t2sz3 = t2->size[3];
  long t2st3 = t2->stride[3];
  long t2sz4 = t2->size[4];
  long t2st4 = t2->stride[4];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t1i2 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t2i2 = 0;
  long t2i3 = 0;
  long t2i4 = 0;
  while(t1i0 < t1sz0 && t2i0 < t2sz0) {
    long r = (t1sz2-t1i2 < t2sz4-t2i4 ? t1sz2-t1i2 : t2sz4-t2i4);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1 + t1i2*t1st2, t1st2, t2data + t2i0*t2st0 + t2i1*t2st1 + t2i2*t2st2 + t2i3*t2st3 + t2i4*t2st4, t2st4, data);
    t1i2 += r;
    if(t1i2 == t1sz2) {
      t1i2 = 0;
      t1i1++;
      if(t1i1 == t1sz1) {
        t1i1 = 0;
        t1i0++;
      }
    }
    t2i4 += r;
    if(t2i4 == t2sz4) {
      t2i4 = 0;
      t2i3++;
      if(t2i3 == t2sz3) {
        t2i3 = 0;
        t2i2++;
        if(t2i2 == t2sz2) {
          t2i2 = 0;
          t2i1++;
          if(t2i1 == t2sz1) {
            t2i1 = 0;
            t2i0++;
          }
        }
      }
    }
  }
}

static void THTensor_(apply_4_1)(THTensor *t1, THTensor *t2, void (*func)(long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  long t1sz2 = t1->size[2];
  long t1st2 = t1->stride[2];
  long t1sz3 = t1->size[3];
  long t1st3 = t1->stride[3];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t1i2 = 0;
  long t1i3 = 0;
  long t2i0 = 0;
  while(t1i0 < t1sz0) {
    long r = (t1sz3-t1i3 < t2sz0-t2i0 ? t1sz3-t1i3 : t2sz0-t2i0);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1 + t1i2*t1st2 + t1i3*t1st3, t1st3, t2data + t2i0*t2st0, t2st0, data);
    t1i3 += r;
    if(t1i3 == t1sz3) {
      t1i3 = 0;
      t1i2++;
      if(t1i2 == t1sz2) {
        t1i2 = 0;
        t1i1++;
        if(t1i1 == t1sz1) {
          t1i1 = 0;
          t1i0++;
        }
      }
    }
    t2i0 += r;
  }
}

static void THTensor_(apply_4_2)(THTensor *t1, THTensor *t2, void (*func)(long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  long t1sz2 = t1->size[2];
  long t1st2 = t1->stride[2];
  long t1sz3 = t1->size[3];
  long t1st3 = t1->stride[3];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t1i2 = 0;
  long t1i3 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  while(t1i0 < t1sz0 && t2i0 < t2sz0) {
    long r = (t1sz3-t1i3 < t2sz1-t2i1 ? t1sz3-t1i3 : t2sz1-t2i1);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1 + t1i2*t1st2 + t1i3*t1st3, t1st3, t2data + t2i0*t2st0 + t2i1*t2st1, t2st1, data);
    t1i3 += r;
    if(t1i3 == t1sz3) {
      t1i3 = 0;
      t1i2++;
      if(t1i2 == t1sz2) {
        t1i2 = 0;
        t1i1++;
        if(t1i1 == t1sz1) {
          t1i1 = 0;
          t1i0++;
        }
      }
    }
    t2i1 += r;
    if(t2i1 == t2sz1) {
      t2i1 = 0;
      t2i0++;
    }
  }
}

static void THTensor_(apply_4_3)(THTensor *t1, THTensor *t2, void (*func)(long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  long t1sz2 = t1->size[2];
  long t1st2 = t1->stride[2];
  long t1sz3 = t1->size[3];
  long t1st3 = t1->stride[3];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  long t2sz2 = t2->size[2];
  long t2st2 = t2->stride[2];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t1i2 = 0;
  long t1i3 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t2i2 = 0;
  while(t1i0 < t1sz0 && t2i0 < t2sz0) {
    long r = (t1sz3-t1i3 < t2sz2-t2i2 ? t1sz3-t1i3 : t2sz2-t2i2);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1 + t1i2*t1st2 + t1i3*t1st3, t1st3, t2data + t2i0*t2st0 + t2i1*t2st1 + t2i2*t2st2, t2st2, data);
    t1i3 += r;
    if(t1i3 == t1sz3) {
      t1i3 = 0;
      t1i2++;
      if(t1i2 == t1sz2) {
        t1i2 = 0;
        t1i1++;
        if(t1i1 == t1sz1) {
          t1i1 = 0;
          t1i0++;
        }
      }
    }
    t2i2 += r;
    if(t2i2 == t2sz2) {
      t2i2 = 0;
      t2i1++;
      if(t2i1 == t2sz1) {
        t2i1 = 0;
        t2i0++;
      }
    }
  }
}

static void THTensor_(apply_4_4)(THTensor *t1, THTensor *t2, void (*func)(long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  long t1sz2 = t1->size[2];
  long t1st2 = t1->stride[2];
  long t1sz3 = t1->size[3];
  long t1st3 = t1->stride[3];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  long t2sz2 = t2->size[2];
  long t2st2 = t2->stride[2];
  long t2sz3 = t2->size[3];
  long t2st3 = t2->stride[3];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t1i2 = 0;
  long t1i3 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t2i2 = 0;
  long t2i3 = 0;
  while(t1i0 < t1sz0 && t2i0 < t2sz0) {
    long r = (t1sz3-t1i3 < t2sz3-t2i3 ? t1sz3-t1i3 : t2sz3-t2i3);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1 + t1i2*t1st2 + t1i3*t1st3, t1st3, t2data + t2i0*t2st0 + t2i1*t2st1 + t2i2*t2st2 + t2i3*t2st3, t2st3, data);
    t1i3 += r;
    if(t1i3 == t1sz3) {
      t1i3 = 0;
      t1i2++;
      if(t1i2 == t1sz2) {
        t1i2 = 0;
        t1i1++;
        if(t1i1 == t1sz1) {
          t1i1 = 0;
          t1i0++;
        }
      }
    }
    t2i3 += r;
    if(t2i3 == t2sz3) {
      t2i3 = 0;
      t2i2++;
      if(t2i2 == t2sz2) {
        t2i2 = 0;
        t2i1++;
        if(t2i1 == t2sz1) {
          t2i1 = 0;
          t2i0++;
        }
      }
    }
  }
}

static void THTensor_(apply_4_5)(THTensor *t1, THTensor *t2, void (*func)(long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  long t1sz2 = t1->size[2];
  long t1st2 = t1->stride[2];
  long t1sz3 = t1->size[3];
  long t1st3 = t1->stride[3];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  long t2sz2 = t2->size[2];
  long t2st2 = t2->stride[2];
  long t2sz3 = t2->size[3];
  long t2st3 = t2->stride[3];
  long t2sz4 = t2->size[4];
  long t2st4 = t2->stride[4];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t1i2 = 0;
  long t1i3 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t2i2 = 0;
  long t2i3 = 0;
  long t2i4 = 0;
  while(t1i0 < t1sz0 && t2i0 < t2sz0) {
    long r = (t1sz3-t1i3 < t2sz4-t2i4 ? t1sz3-t1i3 : t2sz4-t2i4);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1 + t1i2*t1st2 + t1i3*t1st3, t1st3, t2data + t2i0*t2st0 + t2i1*t2st1 + t2i2*t2st2 + t2i3*t2st3 + t2i4*t2st4, t2st4, data);
    t1i3 += r;
    if(t1i3 == t1sz3) {
      t1i3 = 0;
      t1i2++;
      if(t1i2 == t1sz2) {
        t1i2 = 0;
        t1i1++;
        if(t1i1 == t1sz1) {
          t1i1 = 0;
          t1i0++;
        }
      }
    }
    t2i4 += r;
    if(t2i4 == t2sz4) {
      t2i4 = 0;
      t2i3++;
      if(t2i3 == t2sz3) {
        t2i3 = 0;
        t2i2++;
        if(t2i2 == t2sz2) {
          t2i2 = 0;
          t2i1++;
          if(t2i1 == t2sz1) {
            t2i1 = 0;
            t2i0++;
          }
        }
      }
    }
  }
}

static void THTensor_(apply_5_1)(THTensor *t1, THTensor *t2, void (*func)(long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  long t1sz2 = t1->size[2];
  long t1st2 = t1->stride[2];
  long t1sz3 = t1->size[3];
  long t1st3 = t1->stride[3];
  long t1sz4 = t1->size[4];
  long t1st4 = t1->stride[4];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t1i2 = 0;
  long t1i3 = 0;
  long t1i4 = 0;
  long t2i0 = 0;
  while(t1i0 < t1sz0) {
    long r = (t1sz4-t1i4 < t2sz0-t2i0 ? t1sz4-t1i4 : t2sz0-t2i0);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1 + t1i2*t1st2 + t1i3*t1st3 + t1i4*t1st4, t1st4, t2data + t2i0*t2st0, t2st0, data);
    t1i4 += r;
    if(t1i4 == t1sz4) {
      t1i4 = 0;
      t1i3++;
      if(t1i3 == t1sz3) {
        t1i3 = 0;
        t1i2++;
        if(t1i2 == t1sz2) {
          t1i2 = 0;
          t1i1++;
          if(t1i1 == t1sz1) {
            t1i1 = 0;
            t1i0++;
          }
        }
      }
    }
    t2i0 += r;
  }
}

static void THTensor_(apply_5_2)(THTensor *t1, THTensor *t2, void (*func)(long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  long t1sz2 = t1->size[2];
  long t1st2 = t1->stride[2];
  long t1sz3 = t1->size[3];
  long t1st3 = t1->stride[3];
  long t1sz4 = t1->size[4];
  long t1st4 = t1->stride[4];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t1i2 = 0;
  long t1i3 = 0;
  long t1i4 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  while(t1i0 < t1sz0 && t2i0 < t2sz0) {
    long r = (t1sz4-t1i4 < t2sz1-t2i1 ? t1sz4-t1i4 : t2sz1-t2i1);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1 + t1i2*t1st2 + t1i3*t1st3 + t1i4*t1st4, t1st4, t2data + t2i0*t2st0 + t2i1*t2st1, t2st1, data);
    t1i4 += r;
    if(t1i4 == t1sz4) {
      t1i4 = 0;
      t1i3++;
      if(t1i3 == t1sz3) {
        t1i3 = 0;
        t1i2++;
        if(t1i2 == t1sz2) {
          t1i2 = 0;
          t1i1++;
          if(t1i1 == t1sz1) {
            t1i1 = 0;
            t1i0++;
          }
        }
      }
    }
    t2i1 += r;
    if(t2i1 == t2sz1) {
      t2i1 = 0;
      t2i0++;
    }
  }
}

static void THTensor_(apply_5_3)(THTensor *t1, THTensor *t2, void (*func)(long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  long t1sz2 = t1->size[2];
  long t1st2 = t1->stride[2];
  long t1sz3 = t1->size[3];
  long t1st3 = t1->stride[3];
  long t1sz4 = t1->size[4];
  long t1st4 = t1->stride[4];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  long t2sz2 = t2->size[2];
  long t2st2 = t2->stride[2];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t1i2 = 0;
  long t1i3 = 0;
  long t1i4 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t2i2 = 0;
  while(t1i0 < t1sz0 && t2i0 < t2sz0) {
    long r = (t1sz4-t1i4 < t2sz2-t2i2 ? t1sz4-t1i4 : t2sz2-t2i2);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1 + t1i2*t1st2 + t1i3*t1st3 + t1i4*t1st4, t1st4, t2data + t2i0*t2st0 + t2i1*t2st1 + t2i2*t2st2, t2st2, data);
    t1i4 += r;
    if(t1i4 == t1sz4) {
      t1i4 = 0;
      t1i3++;
      if(t1i3 == t1sz3) {
        t1i3 = 0;
        t1i2++;
        if(t1i2 == t1sz2) {
          t1i2 = 0;
          t1i1++;
          if(t1i1 == t1sz1) {
            t1i1 = 0;
            t1i0++;
          }
        }
      }
    }
    t2i2 += r;
    if(t2i2 == t2sz2) {
      t2i2 = 0;
      t2i1++;
      if(t2i1 == t2sz1) {
        t2i1 = 0;
        t2i0++;
      }
    }
  }
}

static void THTensor_(apply_5_4)(THTensor *t1, THTensor *t2, void (*func)(long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  long t1sz2 = t1->size[2];
  long t1st2 = t1->stride[2];
  long t1sz3 = t1->size[3];
  long t1st3 = t1->stride[3];
  long t1sz4 = t1->size[4];
  long t1st4 = t1->stride[4];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  long t2sz2 = t2->size[2];
  long t2st2 = t2->stride[2];
  long t2sz3 = t2->size[3];
  long t2st3 = t2->stride[3];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t1i2 = 0;
  long t1i3 = 0;
  long t1i4 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t2i2 = 0;
  long t2i3 = 0;
  while(t1i0 < t1sz0 && t2i0 < t2sz0) {
    long r = (t1sz4-t1i4 < t2sz3-t2i3 ? t1sz4-t1i4 : t2sz3-t2i3);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1 + t1i2*t1st2 + t1i3*t1st3 + t1i4*t1st4, t1st4, t2data + t2i0*t2st0 + t2i1*t2st1 + t2i2*t2st2 + t2i3*t2st3, t2st3, data);
    t1i4 += r;
    if(t1i4 == t1sz4) {
      t1i4 = 0;
      t1i3++;
      if(t1i3 == t1sz3) {
        t1i3 = 0;
        t1i2++;
        if(t1i2 == t1sz2) {
          t1i2 = 0;
          t1i1++;
          if(t1i1 == t1sz1) {
            t1i1 = 0;
            t1i0++;
          }
        }
      }
    }
    t2i3 += r;
    if(t2i3 == t2sz3) {
      t2i3 = 0;
      t2i2++;
      if(t2i2 == t2sz2) {
        t2i2 = 0;
        t2i1++;
        if(t2i1 == t2sz1) {
          t2i1 = 0;
          t2i0++;
        }
      }
    }
  }
}

static void THTensor_(apply_5_5)(THTensor *t1, THTensor *t2, void (*func)(long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  long t1sz2 = t1->size[2];
  long t1st2 = t1->stride[2];
  long t1sz3 = t1->size[3];
  long t1st3 = t1->stride[3];
  long t1sz4 = t1->size[4];
  long t1st4 = t1->stride[4];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  long t2sz2 = t2->size[2];
  long t2st2 = t2->stride[2];
  long t2sz3 = t2->size[3];
  long t2st3 = t2->stride[3];
  long t2sz4 = t2->size[4];
  long t2st4 = t2->stride[4];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t1i2 = 0;
  long t1i3 = 0;
  long t1i4 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t2i2 = 0;
  long t2i3 = 0;
  long t2i4 = 0;
  while(t1i0 < t1sz0 && t2i0 < t2sz0) {
    long r = (t1sz4-t1i4 < t2sz4-t2i4 ? t1sz4-t1i4 : t2sz4-t2i4);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1 + t1i2*t1st2 + t1i3*t1st3 + t1i4*t1st4, t1st4, t2data + t2i0*t2st0 + t2i1*t2st1 + t2i2*t2st2 + t2i3*t2st3 + t2i4*t2st4, t2st4, data);
    t1i4 += r;
    if(t1i4 == t1sz4) {
      t1i4 = 0;
      t1i3++;
      if(t1i3 == t1sz3) {
        t1i3 = 0;
        t1i2++;
        if(t1i2 == t1sz2) {
          t1i2 = 0;
          t1i1++;
          if(t1i1 == t1sz1) {
            t1i1 = 0;
            t1i0++;
          }
        }
      }
    }
    t2i4 += r;
    if(t2i4 == t2sz4) {
      t2i4 = 0;
      t2i3++;
      if(t2i3 == t2sz3) {
        t2i3 = 0;
        t2i2++;
        if(t2i2 == t2sz2) {
          t2i2 = 0;
          t2i1++;
          if(t2i1 == t2sz1) {
            t2i1 = 0;
            t2i0++;
          }
        }
      }
    }
  }
}

static void THTensor_(apply_1_1_1)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t2i0 = 0;
  long t3i0 = 0;
  long rr = (t1sz0-t1i0 < t2sz0-t2i0 ? t1sz0-t1i0 : t2sz0-t2i0);
  long r = (rr < t3sz0-t3i0 ? rr : t3sz0-t3i0);
  func(r, t1data + t1i0*t1st0, t1st0, t2data + t2i0*t2st0, t2st0, t3data + t3i0*t3st0, t3st0, data);
  t1i0 += r;
  t2i0 += r;
  t3i0 += r;
}

static void THTensor_(apply_1_1_2)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t2i0 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  while(t3i0 < t3sz0) {
    long rr = (t1sz0-t1i0 < t2sz0-t2i0 ? t1sz0-t1i0 : t2sz0-t2i0);
    long r = (rr < t3sz1-t3i1 ? rr : t3sz1-t3i1);
    func(r, t1data + t1i0*t1st0, t1st0, t2data + t2i0*t2st0, t2st0, t3data + t3i0*t3st0 + t3i1*t3st1, t3st1, data);
    t1i0 += r;
    t2i0 += r;
    t3i1 += r;
    if(t3i1 == t3sz1) {
      t3i1 = 0;
      t3i0++;
    }
  }
}

static void THTensor_(apply_1_1_3)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  long t3sz2 = t3->size[2];
  long t3st2 = t3->stride[2];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t2i0 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  long t3i2 = 0;
  while(t3i0 < t3sz0) {
    long rr = (t1sz0-t1i0 < t2sz0-t2i0 ? t1sz0-t1i0 : t2sz0-t2i0);
    long r = (rr < t3sz2-t3i2 ? rr : t3sz2-t3i2);
    func(r, t1data + t1i0*t1st0, t1st0, t2data + t2i0*t2st0, t2st0, t3data + t3i0*t3st0 + t3i1*t3st1 + t3i2*t3st2, t3st2, data);
    t1i0 += r;
    t2i0 += r;
    t3i2 += r;
    if(t3i2 == t3sz2) {
      t3i2 = 0;
      t3i1++;
      if(t3i1 == t3sz1) {
        t3i1 = 0;
        t3i0++;
      }
    }
  }
}

static void THTensor_(apply_1_1_4)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  long t3sz2 = t3->size[2];
  long t3st2 = t3->stride[2];
  long t3sz3 = t3->size[3];
  long t3st3 = t3->stride[3];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t2i0 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  long t3i2 = 0;
  long t3i3 = 0;
  while(t3i0 < t3sz0) {
    long rr = (t1sz0-t1i0 < t2sz0-t2i0 ? t1sz0-t1i0 : t2sz0-t2i0);
    long r = (rr < t3sz3-t3i3 ? rr : t3sz3-t3i3);
    func(r, t1data + t1i0*t1st0, t1st0, t2data + t2i0*t2st0, t2st0, t3data + t3i0*t3st0 + t3i1*t3st1 + t3i2*t3st2 + t3i3*t3st3, t3st3, data);
    t1i0 += r;
    t2i0 += r;
    t3i3 += r;
    if(t3i3 == t3sz3) {
      t3i3 = 0;
      t3i2++;
      if(t3i2 == t3sz2) {
        t3i2 = 0;
        t3i1++;
        if(t3i1 == t3sz1) {
          t3i1 = 0;
          t3i0++;
        }
      }
    }
  }
}

static void THTensor_(apply_1_1_5)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  long t3sz2 = t3->size[2];
  long t3st2 = t3->stride[2];
  long t3sz3 = t3->size[3];
  long t3st3 = t3->stride[3];
  long t3sz4 = t3->size[4];
  long t3st4 = t3->stride[4];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t2i0 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  long t3i2 = 0;
  long t3i3 = 0;
  long t3i4 = 0;
  while(t3i0 < t3sz0) {
    long rr = (t1sz0-t1i0 < t2sz0-t2i0 ? t1sz0-t1i0 : t2sz0-t2i0);
    long r = (rr < t3sz4-t3i4 ? rr : t3sz4-t3i4);
    func(r, t1data + t1i0*t1st0, t1st0, t2data + t2i0*t2st0, t2st0, t3data + t3i0*t3st0 + t3i1*t3st1 + t3i2*t3st2 + t3i3*t3st3 + t3i4*t3st4, t3st4, data);
    t1i0 += r;
    t2i0 += r;
    t3i4 += r;
    if(t3i4 == t3sz4) {
      t3i4 = 0;
      t3i3++;
      if(t3i3 == t3sz3) {
        t3i3 = 0;
        t3i2++;
        if(t3i2 == t3sz2) {
          t3i2 = 0;
          t3i1++;
          if(t3i1 == t3sz1) {
            t3i1 = 0;
            t3i0++;
          }
        }
      }
    }
  }
}

static void THTensor_(apply_1_2_1)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t3i0 = 0;
  while(t2i0 < t2sz0) {
    long rr = (t1sz0-t1i0 < t2sz1-t2i1 ? t1sz0-t1i0 : t2sz1-t2i1);
    long r = (rr < t3sz0-t3i0 ? rr : t3sz0-t3i0);
    func(r, t1data + t1i0*t1st0, t1st0, t2data + t2i0*t2st0 + t2i1*t2st1, t2st1, t3data + t3i0*t3st0, t3st0, data);
    t1i0 += r;
    t2i1 += r;
    if(t2i1 == t2sz1) {
      t2i1 = 0;
      t2i0++;
    }
    t3i0 += r;
  }
}

static void THTensor_(apply_1_2_2)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  while(t2i0 < t2sz0 && t3i0 < t3sz0) {
    long rr = (t1sz0-t1i0 < t2sz1-t2i1 ? t1sz0-t1i0 : t2sz1-t2i1);
    long r = (rr < t3sz1-t3i1 ? rr : t3sz1-t3i1);
    func(r, t1data + t1i0*t1st0, t1st0, t2data + t2i0*t2st0 + t2i1*t2st1, t2st1, t3data + t3i0*t3st0 + t3i1*t3st1, t3st1, data);
    t1i0 += r;
    t2i1 += r;
    if(t2i1 == t2sz1) {
      t2i1 = 0;
      t2i0++;
    }
    t3i1 += r;
    if(t3i1 == t3sz1) {
      t3i1 = 0;
      t3i0++;
    }
  }
}

static void THTensor_(apply_1_2_3)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  long t3sz2 = t3->size[2];
  long t3st2 = t3->stride[2];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  long t3i2 = 0;
  while(t2i0 < t2sz0 && t3i0 < t3sz0) {
    long rr = (t1sz0-t1i0 < t2sz1-t2i1 ? t1sz0-t1i0 : t2sz1-t2i1);
    long r = (rr < t3sz2-t3i2 ? rr : t3sz2-t3i2);
    func(r, t1data + t1i0*t1st0, t1st0, t2data + t2i0*t2st0 + t2i1*t2st1, t2st1, t3data + t3i0*t3st0 + t3i1*t3st1 + t3i2*t3st2, t3st2, data);
    t1i0 += r;
    t2i1 += r;
    if(t2i1 == t2sz1) {
      t2i1 = 0;
      t2i0++;
    }
    t3i2 += r;
    if(t3i2 == t3sz2) {
      t3i2 = 0;
      t3i1++;
      if(t3i1 == t3sz1) {
        t3i1 = 0;
        t3i0++;
      }
    }
  }
}

static void THTensor_(apply_1_2_4)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  long t3sz2 = t3->size[2];
  long t3st2 = t3->stride[2];
  long t3sz3 = t3->size[3];
  long t3st3 = t3->stride[3];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  long t3i2 = 0;
  long t3i3 = 0;
  while(t2i0 < t2sz0 && t3i0 < t3sz0) {
    long rr = (t1sz0-t1i0 < t2sz1-t2i1 ? t1sz0-t1i0 : t2sz1-t2i1);
    long r = (rr < t3sz3-t3i3 ? rr : t3sz3-t3i3);
    func(r, t1data + t1i0*t1st0, t1st0, t2data + t2i0*t2st0 + t2i1*t2st1, t2st1, t3data + t3i0*t3st0 + t3i1*t3st1 + t3i2*t3st2 + t3i3*t3st3, t3st3, data);
    t1i0 += r;
    t2i1 += r;
    if(t2i1 == t2sz1) {
      t2i1 = 0;
      t2i0++;
    }
    t3i3 += r;
    if(t3i3 == t3sz3) {
      t3i3 = 0;
      t3i2++;
      if(t3i2 == t3sz2) {
        t3i2 = 0;
        t3i1++;
        if(t3i1 == t3sz1) {
          t3i1 = 0;
          t3i0++;
        }
      }
    }
  }
}

static void THTensor_(apply_1_2_5)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  long t3sz2 = t3->size[2];
  long t3st2 = t3->stride[2];
  long t3sz3 = t3->size[3];
  long t3st3 = t3->stride[3];
  long t3sz4 = t3->size[4];
  long t3st4 = t3->stride[4];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  long t3i2 = 0;
  long t3i3 = 0;
  long t3i4 = 0;
  while(t2i0 < t2sz0 && t3i0 < t3sz0) {
    long rr = (t1sz0-t1i0 < t2sz1-t2i1 ? t1sz0-t1i0 : t2sz1-t2i1);
    long r = (rr < t3sz4-t3i4 ? rr : t3sz4-t3i4);
    func(r, t1data + t1i0*t1st0, t1st0, t2data + t2i0*t2st0 + t2i1*t2st1, t2st1, t3data + t3i0*t3st0 + t3i1*t3st1 + t3i2*t3st2 + t3i3*t3st3 + t3i4*t3st4, t3st4, data);
    t1i0 += r;
    t2i1 += r;
    if(t2i1 == t2sz1) {
      t2i1 = 0;
      t2i0++;
    }
    t3i4 += r;
    if(t3i4 == t3sz4) {
      t3i4 = 0;
      t3i3++;
      if(t3i3 == t3sz3) {
        t3i3 = 0;
        t3i2++;
        if(t3i2 == t3sz2) {
          t3i2 = 0;
          t3i1++;
          if(t3i1 == t3sz1) {
            t3i1 = 0;
            t3i0++;
          }
        }
      }
    }
  }
}

static void THTensor_(apply_1_3_1)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  long t2sz2 = t2->size[2];
  long t2st2 = t2->stride[2];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t2i2 = 0;
  long t3i0 = 0;
  while(t2i0 < t2sz0) {
    long rr = (t1sz0-t1i0 < t2sz2-t2i2 ? t1sz0-t1i0 : t2sz2-t2i2);
    long r = (rr < t3sz0-t3i0 ? rr : t3sz0-t3i0);
    func(r, t1data + t1i0*t1st0, t1st0, t2data + t2i0*t2st0 + t2i1*t2st1 + t2i2*t2st2, t2st2, t3data + t3i0*t3st0, t3st0, data);
    t1i0 += r;
    t2i2 += r;
    if(t2i2 == t2sz2) {
      t2i2 = 0;
      t2i1++;
      if(t2i1 == t2sz1) {
        t2i1 = 0;
        t2i0++;
      }
    }
    t3i0 += r;
  }
}

static void THTensor_(apply_1_3_2)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  long t2sz2 = t2->size[2];
  long t2st2 = t2->stride[2];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t2i2 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  while(t2i0 < t2sz0 && t3i0 < t3sz0) {
    long rr = (t1sz0-t1i0 < t2sz2-t2i2 ? t1sz0-t1i0 : t2sz2-t2i2);
    long r = (rr < t3sz1-t3i1 ? rr : t3sz1-t3i1);
    func(r, t1data + t1i0*t1st0, t1st0, t2data + t2i0*t2st0 + t2i1*t2st1 + t2i2*t2st2, t2st2, t3data + t3i0*t3st0 + t3i1*t3st1, t3st1, data);
    t1i0 += r;
    t2i2 += r;
    if(t2i2 == t2sz2) {
      t2i2 = 0;
      t2i1++;
      if(t2i1 == t2sz1) {
        t2i1 = 0;
        t2i0++;
      }
    }
    t3i1 += r;
    if(t3i1 == t3sz1) {
      t3i1 = 0;
      t3i0++;
    }
  }
}

static void THTensor_(apply_1_3_3)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  long t2sz2 = t2->size[2];
  long t2st2 = t2->stride[2];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  long t3sz2 = t3->size[2];
  long t3st2 = t3->stride[2];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t2i2 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  long t3i2 = 0;
  while(t2i0 < t2sz0 && t3i0 < t3sz0) {
    long rr = (t1sz0-t1i0 < t2sz2-t2i2 ? t1sz0-t1i0 : t2sz2-t2i2);
    long r = (rr < t3sz2-t3i2 ? rr : t3sz2-t3i2);
    func(r, t1data + t1i0*t1st0, t1st0, t2data + t2i0*t2st0 + t2i1*t2st1 + t2i2*t2st2, t2st2, t3data + t3i0*t3st0 + t3i1*t3st1 + t3i2*t3st2, t3st2, data);
    t1i0 += r;
    t2i2 += r;
    if(t2i2 == t2sz2) {
      t2i2 = 0;
      t2i1++;
      if(t2i1 == t2sz1) {
        t2i1 = 0;
        t2i0++;
      }
    }
    t3i2 += r;
    if(t3i2 == t3sz2) {
      t3i2 = 0;
      t3i1++;
      if(t3i1 == t3sz1) {
        t3i1 = 0;
        t3i0++;
      }
    }
  }
}

static void THTensor_(apply_1_3_4)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  long t2sz2 = t2->size[2];
  long t2st2 = t2->stride[2];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  long t3sz2 = t3->size[2];
  long t3st2 = t3->stride[2];
  long t3sz3 = t3->size[3];
  long t3st3 = t3->stride[3];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t2i2 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  long t3i2 = 0;
  long t3i3 = 0;
  while(t2i0 < t2sz0 && t3i0 < t3sz0) {
    long rr = (t1sz0-t1i0 < t2sz2-t2i2 ? t1sz0-t1i0 : t2sz2-t2i2);
    long r = (rr < t3sz3-t3i3 ? rr : t3sz3-t3i3);
    func(r, t1data + t1i0*t1st0, t1st0, t2data + t2i0*t2st0 + t2i1*t2st1 + t2i2*t2st2, t2st2, t3data + t3i0*t3st0 + t3i1*t3st1 + t3i2*t3st2 + t3i3*t3st3, t3st3, data);
    t1i0 += r;
    t2i2 += r;
    if(t2i2 == t2sz2) {
      t2i2 = 0;
      t2i1++;
      if(t2i1 == t2sz1) {
        t2i1 = 0;
        t2i0++;
      }
    }
    t3i3 += r;
    if(t3i3 == t3sz3) {
      t3i3 = 0;
      t3i2++;
      if(t3i2 == t3sz2) {
        t3i2 = 0;
        t3i1++;
        if(t3i1 == t3sz1) {
          t3i1 = 0;
          t3i0++;
        }
      }
    }
  }
}

static void THTensor_(apply_1_3_5)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  long t2sz2 = t2->size[2];
  long t2st2 = t2->stride[2];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  long t3sz2 = t3->size[2];
  long t3st2 = t3->stride[2];
  long t3sz3 = t3->size[3];
  long t3st3 = t3->stride[3];
  long t3sz4 = t3->size[4];
  long t3st4 = t3->stride[4];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t2i2 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  long t3i2 = 0;
  long t3i3 = 0;
  long t3i4 = 0;
  while(t2i0 < t2sz0 && t3i0 < t3sz0) {
    long rr = (t1sz0-t1i0 < t2sz2-t2i2 ? t1sz0-t1i0 : t2sz2-t2i2);
    long r = (rr < t3sz4-t3i4 ? rr : t3sz4-t3i4);
    func(r, t1data + t1i0*t1st0, t1st0, t2data + t2i0*t2st0 + t2i1*t2st1 + t2i2*t2st2, t2st2, t3data + t3i0*t3st0 + t3i1*t3st1 + t3i2*t3st2 + t3i3*t3st3 + t3i4*t3st4, t3st4, data);
    t1i0 += r;
    t2i2 += r;
    if(t2i2 == t2sz2) {
      t2i2 = 0;
      t2i1++;
      if(t2i1 == t2sz1) {
        t2i1 = 0;
        t2i0++;
      }
    }
    t3i4 += r;
    if(t3i4 == t3sz4) {
      t3i4 = 0;
      t3i3++;
      if(t3i3 == t3sz3) {
        t3i3 = 0;
        t3i2++;
        if(t3i2 == t3sz2) {
          t3i2 = 0;
          t3i1++;
          if(t3i1 == t3sz1) {
            t3i1 = 0;
            t3i0++;
          }
        }
      }
    }
  }
}

static void THTensor_(apply_1_4_1)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  long t2sz2 = t2->size[2];
  long t2st2 = t2->stride[2];
  long t2sz3 = t2->size[3];
  long t2st3 = t2->stride[3];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t2i2 = 0;
  long t2i3 = 0;
  long t3i0 = 0;
  while(t2i0 < t2sz0) {
    long rr = (t1sz0-t1i0 < t2sz3-t2i3 ? t1sz0-t1i0 : t2sz3-t2i3);
    long r = (rr < t3sz0-t3i0 ? rr : t3sz0-t3i0);
    func(r, t1data + t1i0*t1st0, t1st0, t2data + t2i0*t2st0 + t2i1*t2st1 + t2i2*t2st2 + t2i3*t2st3, t2st3, t3data + t3i0*t3st0, t3st0, data);
    t1i0 += r;
    t2i3 += r;
    if(t2i3 == t2sz3) {
      t2i3 = 0;
      t2i2++;
      if(t2i2 == t2sz2) {
        t2i2 = 0;
        t2i1++;
        if(t2i1 == t2sz1) {
          t2i1 = 0;
          t2i0++;
        }
      }
    }
    t3i0 += r;
  }
}

static void THTensor_(apply_1_4_2)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  long t2sz2 = t2->size[2];
  long t2st2 = t2->stride[2];
  long t2sz3 = t2->size[3];
  long t2st3 = t2->stride[3];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t2i2 = 0;
  long t2i3 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  while(t2i0 < t2sz0 && t3i0 < t3sz0) {
    long rr = (t1sz0-t1i0 < t2sz3-t2i3 ? t1sz0-t1i0 : t2sz3-t2i3);
    long r = (rr < t3sz1-t3i1 ? rr : t3sz1-t3i1);
    func(r, t1data + t1i0*t1st0, t1st0, t2data + t2i0*t2st0 + t2i1*t2st1 + t2i2*t2st2 + t2i3*t2st3, t2st3, t3data + t3i0*t3st0 + t3i1*t3st1, t3st1, data);
    t1i0 += r;
    t2i3 += r;
    if(t2i3 == t2sz3) {
      t2i3 = 0;
      t2i2++;
      if(t2i2 == t2sz2) {
        t2i2 = 0;
        t2i1++;
        if(t2i1 == t2sz1) {
          t2i1 = 0;
          t2i0++;
        }
      }
    }
    t3i1 += r;
    if(t3i1 == t3sz1) {
      t3i1 = 0;
      t3i0++;
    }
  }
}

static void THTensor_(apply_1_4_3)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  long t2sz2 = t2->size[2];
  long t2st2 = t2->stride[2];
  long t2sz3 = t2->size[3];
  long t2st3 = t2->stride[3];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  long t3sz2 = t3->size[2];
  long t3st2 = t3->stride[2];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t2i2 = 0;
  long t2i3 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  long t3i2 = 0;
  while(t2i0 < t2sz0 && t3i0 < t3sz0) {
    long rr = (t1sz0-t1i0 < t2sz3-t2i3 ? t1sz0-t1i0 : t2sz3-t2i3);
    long r = (rr < t3sz2-t3i2 ? rr : t3sz2-t3i2);
    func(r, t1data + t1i0*t1st0, t1st0, t2data + t2i0*t2st0 + t2i1*t2st1 + t2i2*t2st2 + t2i3*t2st3, t2st3, t3data + t3i0*t3st0 + t3i1*t3st1 + t3i2*t3st2, t3st2, data);
    t1i0 += r;
    t2i3 += r;
    if(t2i3 == t2sz3) {
      t2i3 = 0;
      t2i2++;
      if(t2i2 == t2sz2) {
        t2i2 = 0;
        t2i1++;
        if(t2i1 == t2sz1) {
          t2i1 = 0;
          t2i0++;
        }
      }
    }
    t3i2 += r;
    if(t3i2 == t3sz2) {
      t3i2 = 0;
      t3i1++;
      if(t3i1 == t3sz1) {
        t3i1 = 0;
        t3i0++;
      }
    }
  }
}

static void THTensor_(apply_1_4_4)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  long t2sz2 = t2->size[2];
  long t2st2 = t2->stride[2];
  long t2sz3 = t2->size[3];
  long t2st3 = t2->stride[3];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  long t3sz2 = t3->size[2];
  long t3st2 = t3->stride[2];
  long t3sz3 = t3->size[3];
  long t3st3 = t3->stride[3];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t2i2 = 0;
  long t2i3 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  long t3i2 = 0;
  long t3i3 = 0;
  while(t2i0 < t2sz0 && t3i0 < t3sz0) {
    long rr = (t1sz0-t1i0 < t2sz3-t2i3 ? t1sz0-t1i0 : t2sz3-t2i3);
    long r = (rr < t3sz3-t3i3 ? rr : t3sz3-t3i3);
    func(r, t1data + t1i0*t1st0, t1st0, t2data + t2i0*t2st0 + t2i1*t2st1 + t2i2*t2st2 + t2i3*t2st3, t2st3, t3data + t3i0*t3st0 + t3i1*t3st1 + t3i2*t3st2 + t3i3*t3st3, t3st3, data);
    t1i0 += r;
    t2i3 += r;
    if(t2i3 == t2sz3) {
      t2i3 = 0;
      t2i2++;
      if(t2i2 == t2sz2) {
        t2i2 = 0;
        t2i1++;
        if(t2i1 == t2sz1) {
          t2i1 = 0;
          t2i0++;
        }
      }
    }
    t3i3 += r;
    if(t3i3 == t3sz3) {
      t3i3 = 0;
      t3i2++;
      if(t3i2 == t3sz2) {
        t3i2 = 0;
        t3i1++;
        if(t3i1 == t3sz1) {
          t3i1 = 0;
          t3i0++;
        }
      }
    }
  }
}

static void THTensor_(apply_1_4_5)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  long t2sz2 = t2->size[2];
  long t2st2 = t2->stride[2];
  long t2sz3 = t2->size[3];
  long t2st3 = t2->stride[3];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  long t3sz2 = t3->size[2];
  long t3st2 = t3->stride[2];
  long t3sz3 = t3->size[3];
  long t3st3 = t3->stride[3];
  long t3sz4 = t3->size[4];
  long t3st4 = t3->stride[4];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t2i2 = 0;
  long t2i3 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  long t3i2 = 0;
  long t3i3 = 0;
  long t3i4 = 0;
  while(t2i0 < t2sz0 && t3i0 < t3sz0) {
    long rr = (t1sz0-t1i0 < t2sz3-t2i3 ? t1sz0-t1i0 : t2sz3-t2i3);
    long r = (rr < t3sz4-t3i4 ? rr : t3sz4-t3i4);
    func(r, t1data + t1i0*t1st0, t1st0, t2data + t2i0*t2st0 + t2i1*t2st1 + t2i2*t2st2 + t2i3*t2st3, t2st3, t3data + t3i0*t3st0 + t3i1*t3st1 + t3i2*t3st2 + t3i3*t3st3 + t3i4*t3st4, t3st4, data);
    t1i0 += r;
    t2i3 += r;
    if(t2i3 == t2sz3) {
      t2i3 = 0;
      t2i2++;
      if(t2i2 == t2sz2) {
        t2i2 = 0;
        t2i1++;
        if(t2i1 == t2sz1) {
          t2i1 = 0;
          t2i0++;
        }
      }
    }
    t3i4 += r;
    if(t3i4 == t3sz4) {
      t3i4 = 0;
      t3i3++;
      if(t3i3 == t3sz3) {
        t3i3 = 0;
        t3i2++;
        if(t3i2 == t3sz2) {
          t3i2 = 0;
          t3i1++;
          if(t3i1 == t3sz1) {
            t3i1 = 0;
            t3i0++;
          }
        }
      }
    }
  }
}

static void THTensor_(apply_1_5_1)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  long t2sz2 = t2->size[2];
  long t2st2 = t2->stride[2];
  long t2sz3 = t2->size[3];
  long t2st3 = t2->stride[3];
  long t2sz4 = t2->size[4];
  long t2st4 = t2->stride[4];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t2i2 = 0;
  long t2i3 = 0;
  long t2i4 = 0;
  long t3i0 = 0;
  while(t2i0 < t2sz0) {
    long rr = (t1sz0-t1i0 < t2sz4-t2i4 ? t1sz0-t1i0 : t2sz4-t2i4);
    long r = (rr < t3sz0-t3i0 ? rr : t3sz0-t3i0);
    func(r, t1data + t1i0*t1st0, t1st0, t2data + t2i0*t2st0 + t2i1*t2st1 + t2i2*t2st2 + t2i3*t2st3 + t2i4*t2st4, t2st4, t3data + t3i0*t3st0, t3st0, data);
    t1i0 += r;
    t2i4 += r;
    if(t2i4 == t2sz4) {
      t2i4 = 0;
      t2i3++;
      if(t2i3 == t2sz3) {
        t2i3 = 0;
        t2i2++;
        if(t2i2 == t2sz2) {
          t2i2 = 0;
          t2i1++;
          if(t2i1 == t2sz1) {
            t2i1 = 0;
            t2i0++;
          }
        }
      }
    }
    t3i0 += r;
  }
}

static void THTensor_(apply_1_5_2)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  long t2sz2 = t2->size[2];
  long t2st2 = t2->stride[2];
  long t2sz3 = t2->size[3];
  long t2st3 = t2->stride[3];
  long t2sz4 = t2->size[4];
  long t2st4 = t2->stride[4];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t2i2 = 0;
  long t2i3 = 0;
  long t2i4 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  while(t2i0 < t2sz0 && t3i0 < t3sz0) {
    long rr = (t1sz0-t1i0 < t2sz4-t2i4 ? t1sz0-t1i0 : t2sz4-t2i4);
    long r = (rr < t3sz1-t3i1 ? rr : t3sz1-t3i1);
    func(r, t1data + t1i0*t1st0, t1st0, t2data + t2i0*t2st0 + t2i1*t2st1 + t2i2*t2st2 + t2i3*t2st3 + t2i4*t2st4, t2st4, t3data + t3i0*t3st0 + t3i1*t3st1, t3st1, data);
    t1i0 += r;
    t2i4 += r;
    if(t2i4 == t2sz4) {
      t2i4 = 0;
      t2i3++;
      if(t2i3 == t2sz3) {
        t2i3 = 0;
        t2i2++;
        if(t2i2 == t2sz2) {
          t2i2 = 0;
          t2i1++;
          if(t2i1 == t2sz1) {
            t2i1 = 0;
            t2i0++;
          }
        }
      }
    }
    t3i1 += r;
    if(t3i1 == t3sz1) {
      t3i1 = 0;
      t3i0++;
    }
  }
}

static void THTensor_(apply_1_5_3)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  long t2sz2 = t2->size[2];
  long t2st2 = t2->stride[2];
  long t2sz3 = t2->size[3];
  long t2st3 = t2->stride[3];
  long t2sz4 = t2->size[4];
  long t2st4 = t2->stride[4];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  long t3sz2 = t3->size[2];
  long t3st2 = t3->stride[2];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t2i2 = 0;
  long t2i3 = 0;
  long t2i4 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  long t3i2 = 0;
  while(t2i0 < t2sz0 && t3i0 < t3sz0) {
    long rr = (t1sz0-t1i0 < t2sz4-t2i4 ? t1sz0-t1i0 : t2sz4-t2i4);
    long r = (rr < t3sz2-t3i2 ? rr : t3sz2-t3i2);
    func(r, t1data + t1i0*t1st0, t1st0, t2data + t2i0*t2st0 + t2i1*t2st1 + t2i2*t2st2 + t2i3*t2st3 + t2i4*t2st4, t2st4, t3data + t3i0*t3st0 + t3i1*t3st1 + t3i2*t3st2, t3st2, data);
    t1i0 += r;
    t2i4 += r;
    if(t2i4 == t2sz4) {
      t2i4 = 0;
      t2i3++;
      if(t2i3 == t2sz3) {
        t2i3 = 0;
        t2i2++;
        if(t2i2 == t2sz2) {
          t2i2 = 0;
          t2i1++;
          if(t2i1 == t2sz1) {
            t2i1 = 0;
            t2i0++;
          }
        }
      }
    }
    t3i2 += r;
    if(t3i2 == t3sz2) {
      t3i2 = 0;
      t3i1++;
      if(t3i1 == t3sz1) {
        t3i1 = 0;
        t3i0++;
      }
    }
  }
}

static void THTensor_(apply_1_5_4)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  long t2sz2 = t2->size[2];
  long t2st2 = t2->stride[2];
  long t2sz3 = t2->size[3];
  long t2st3 = t2->stride[3];
  long t2sz4 = t2->size[4];
  long t2st4 = t2->stride[4];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  long t3sz2 = t3->size[2];
  long t3st2 = t3->stride[2];
  long t3sz3 = t3->size[3];
  long t3st3 = t3->stride[3];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t2i2 = 0;
  long t2i3 = 0;
  long t2i4 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  long t3i2 = 0;
  long t3i3 = 0;
  while(t2i0 < t2sz0 && t3i0 < t3sz0) {
    long rr = (t1sz0-t1i0 < t2sz4-t2i4 ? t1sz0-t1i0 : t2sz4-t2i4);
    long r = (rr < t3sz3-t3i3 ? rr : t3sz3-t3i3);
    func(r, t1data + t1i0*t1st0, t1st0, t2data + t2i0*t2st0 + t2i1*t2st1 + t2i2*t2st2 + t2i3*t2st3 + t2i4*t2st4, t2st4, t3data + t3i0*t3st0 + t3i1*t3st1 + t3i2*t3st2 + t3i3*t3st3, t3st3, data);
    t1i0 += r;
    t2i4 += r;
    if(t2i4 == t2sz4) {
      t2i4 = 0;
      t2i3++;
      if(t2i3 == t2sz3) {
        t2i3 = 0;
        t2i2++;
        if(t2i2 == t2sz2) {
          t2i2 = 0;
          t2i1++;
          if(t2i1 == t2sz1) {
            t2i1 = 0;
            t2i0++;
          }
        }
      }
    }
    t3i3 += r;
    if(t3i3 == t3sz3) {
      t3i3 = 0;
      t3i2++;
      if(t3i2 == t3sz2) {
        t3i2 = 0;
        t3i1++;
        if(t3i1 == t3sz1) {
          t3i1 = 0;
          t3i0++;
        }
      }
    }
  }
}

static void THTensor_(apply_1_5_5)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  long t2sz2 = t2->size[2];
  long t2st2 = t2->stride[2];
  long t2sz3 = t2->size[3];
  long t2st3 = t2->stride[3];
  long t2sz4 = t2->size[4];
  long t2st4 = t2->stride[4];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  long t3sz2 = t3->size[2];
  long t3st2 = t3->stride[2];
  long t3sz3 = t3->size[3];
  long t3st3 = t3->stride[3];
  long t3sz4 = t3->size[4];
  long t3st4 = t3->stride[4];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t2i2 = 0;
  long t2i3 = 0;
  long t2i4 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  long t3i2 = 0;
  long t3i3 = 0;
  long t3i4 = 0;
  while(t2i0 < t2sz0 && t3i0 < t3sz0) {
    long rr = (t1sz0-t1i0 < t2sz4-t2i4 ? t1sz0-t1i0 : t2sz4-t2i4);
    long r = (rr < t3sz4-t3i4 ? rr : t3sz4-t3i4);
    func(r, t1data + t1i0*t1st0, t1st0, t2data + t2i0*t2st0 + t2i1*t2st1 + t2i2*t2st2 + t2i3*t2st3 + t2i4*t2st4, t2st4, t3data + t3i0*t3st0 + t3i1*t3st1 + t3i2*t3st2 + t3i3*t3st3 + t3i4*t3st4, t3st4, data);
    t1i0 += r;
    t2i4 += r;
    if(t2i4 == t2sz4) {
      t2i4 = 0;
      t2i3++;
      if(t2i3 == t2sz3) {
        t2i3 = 0;
        t2i2++;
        if(t2i2 == t2sz2) {
          t2i2 = 0;
          t2i1++;
          if(t2i1 == t2sz1) {
            t2i1 = 0;
            t2i0++;
          }
        }
      }
    }
    t3i4 += r;
    if(t3i4 == t3sz4) {
      t3i4 = 0;
      t3i3++;
      if(t3i3 == t3sz3) {
        t3i3 = 0;
        t3i2++;
        if(t3i2 == t3sz2) {
          t3i2 = 0;
          t3i1++;
          if(t3i1 == t3sz1) {
            t3i1 = 0;
            t3i0++;
          }
        }
      }
    }
  }
}

static void THTensor_(apply_2_1_1)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t2i0 = 0;
  long t3i0 = 0;
  while(t1i0 < t1sz0) {
    long rr = (t1sz1-t1i1 < t2sz0-t2i0 ? t1sz1-t1i1 : t2sz0-t2i0);
    long r = (rr < t3sz0-t3i0 ? rr : t3sz0-t3i0);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1, t1st1, t2data + t2i0*t2st0, t2st0, t3data + t3i0*t3st0, t3st0, data);
    t1i1 += r;
    if(t1i1 == t1sz1) {
      t1i1 = 0;
      t1i0++;
    }
    t2i0 += r;
    t3i0 += r;
  }
}

static void THTensor_(apply_2_1_2)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t2i0 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  while(t1i0 < t1sz0 && t3i0 < t3sz0) {
    long rr = (t1sz1-t1i1 < t2sz0-t2i0 ? t1sz1-t1i1 : t2sz0-t2i0);
    long r = (rr < t3sz1-t3i1 ? rr : t3sz1-t3i1);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1, t1st1, t2data + t2i0*t2st0, t2st0, t3data + t3i0*t3st0 + t3i1*t3st1, t3st1, data);
    t1i1 += r;
    if(t1i1 == t1sz1) {
      t1i1 = 0;
      t1i0++;
    }
    t2i0 += r;
    t3i1 += r;
    if(t3i1 == t3sz1) {
      t3i1 = 0;
      t3i0++;
    }
  }
}

static void THTensor_(apply_2_1_3)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  long t3sz2 = t3->size[2];
  long t3st2 = t3->stride[2];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t2i0 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  long t3i2 = 0;
  while(t1i0 < t1sz0 && t3i0 < t3sz0) {
    long rr = (t1sz1-t1i1 < t2sz0-t2i0 ? t1sz1-t1i1 : t2sz0-t2i0);
    long r = (rr < t3sz2-t3i2 ? rr : t3sz2-t3i2);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1, t1st1, t2data + t2i0*t2st0, t2st0, t3data + t3i0*t3st0 + t3i1*t3st1 + t3i2*t3st2, t3st2, data);
    t1i1 += r;
    if(t1i1 == t1sz1) {
      t1i1 = 0;
      t1i0++;
    }
    t2i0 += r;
    t3i2 += r;
    if(t3i2 == t3sz2) {
      t3i2 = 0;
      t3i1++;
      if(t3i1 == t3sz1) {
        t3i1 = 0;
        t3i0++;
      }
    }
  }
}

static void THTensor_(apply_2_1_4)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  long t3sz2 = t3->size[2];
  long t3st2 = t3->stride[2];
  long t3sz3 = t3->size[3];
  long t3st3 = t3->stride[3];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t2i0 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  long t3i2 = 0;
  long t3i3 = 0;
  while(t1i0 < t1sz0 && t3i0 < t3sz0) {
    long rr = (t1sz1-t1i1 < t2sz0-t2i0 ? t1sz1-t1i1 : t2sz0-t2i0);
    long r = (rr < t3sz3-t3i3 ? rr : t3sz3-t3i3);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1, t1st1, t2data + t2i0*t2st0, t2st0, t3data + t3i0*t3st0 + t3i1*t3st1 + t3i2*t3st2 + t3i3*t3st3, t3st3, data);
    t1i1 += r;
    if(t1i1 == t1sz1) {
      t1i1 = 0;
      t1i0++;
    }
    t2i0 += r;
    t3i3 += r;
    if(t3i3 == t3sz3) {
      t3i3 = 0;
      t3i2++;
      if(t3i2 == t3sz2) {
        t3i2 = 0;
        t3i1++;
        if(t3i1 == t3sz1) {
          t3i1 = 0;
          t3i0++;
        }
      }
    }
  }
}

static void THTensor_(apply_2_1_5)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  long t3sz2 = t3->size[2];
  long t3st2 = t3->stride[2];
  long t3sz3 = t3->size[3];
  long t3st3 = t3->stride[3];
  long t3sz4 = t3->size[4];
  long t3st4 = t3->stride[4];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t2i0 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  long t3i2 = 0;
  long t3i3 = 0;
  long t3i4 = 0;
  while(t1i0 < t1sz0 && t3i0 < t3sz0) {
    long rr = (t1sz1-t1i1 < t2sz0-t2i0 ? t1sz1-t1i1 : t2sz0-t2i0);
    long r = (rr < t3sz4-t3i4 ? rr : t3sz4-t3i4);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1, t1st1, t2data + t2i0*t2st0, t2st0, t3data + t3i0*t3st0 + t3i1*t3st1 + t3i2*t3st2 + t3i3*t3st3 + t3i4*t3st4, t3st4, data);
    t1i1 += r;
    if(t1i1 == t1sz1) {
      t1i1 = 0;
      t1i0++;
    }
    t2i0 += r;
    t3i4 += r;
    if(t3i4 == t3sz4) {
      t3i4 = 0;
      t3i3++;
      if(t3i3 == t3sz3) {
        t3i3 = 0;
        t3i2++;
        if(t3i2 == t3sz2) {
          t3i2 = 0;
          t3i1++;
          if(t3i1 == t3sz1) {
            t3i1 = 0;
            t3i0++;
          }
        }
      }
    }
  }
}

static void THTensor_(apply_2_2_1)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t3i0 = 0;
  while(t1i0 < t1sz0 && t2i0 < t2sz0) {
    long rr = (t1sz1-t1i1 < t2sz1-t2i1 ? t1sz1-t1i1 : t2sz1-t2i1);
    long r = (rr < t3sz0-t3i0 ? rr : t3sz0-t3i0);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1, t1st1, t2data + t2i0*t2st0 + t2i1*t2st1, t2st1, t3data + t3i0*t3st0, t3st0, data);
    t1i1 += r;
    if(t1i1 == t1sz1) {
      t1i1 = 0;
      t1i0++;
    }
    t2i1 += r;
    if(t2i1 == t2sz1) {
      t2i1 = 0;
      t2i0++;
    }
    t3i0 += r;
  }
}

static void THTensor_(apply_2_2_2)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  while(t1i0 < t1sz0 && t2i0 < t2sz0 && t3i0 < t3sz0) {
    long rr = (t1sz1-t1i1 < t2sz1-t2i1 ? t1sz1-t1i1 : t2sz1-t2i1);
    long r = (rr < t3sz1-t3i1 ? rr : t3sz1-t3i1);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1, t1st1, t2data + t2i0*t2st0 + t2i1*t2st1, t2st1, t3data + t3i0*t3st0 + t3i1*t3st1, t3st1, data);
    t1i1 += r;
    if(t1i1 == t1sz1) {
      t1i1 = 0;
      t1i0++;
    }
    t2i1 += r;
    if(t2i1 == t2sz1) {
      t2i1 = 0;
      t2i0++;
    }
    t3i1 += r;
    if(t3i1 == t3sz1) {
      t3i1 = 0;
      t3i0++;
    }
  }
}

static void THTensor_(apply_2_2_3)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  long t3sz2 = t3->size[2];
  long t3st2 = t3->stride[2];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  long t3i2 = 0;
  while(t1i0 < t1sz0 && t2i0 < t2sz0 && t3i0 < t3sz0) {
    long rr = (t1sz1-t1i1 < t2sz1-t2i1 ? t1sz1-t1i1 : t2sz1-t2i1);
    long r = (rr < t3sz2-t3i2 ? rr : t3sz2-t3i2);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1, t1st1, t2data + t2i0*t2st0 + t2i1*t2st1, t2st1, t3data + t3i0*t3st0 + t3i1*t3st1 + t3i2*t3st2, t3st2, data);
    t1i1 += r;
    if(t1i1 == t1sz1) {
      t1i1 = 0;
      t1i0++;
    }
    t2i1 += r;
    if(t2i1 == t2sz1) {
      t2i1 = 0;
      t2i0++;
    }
    t3i2 += r;
    if(t3i2 == t3sz2) {
      t3i2 = 0;
      t3i1++;
      if(t3i1 == t3sz1) {
        t3i1 = 0;
        t3i0++;
      }
    }
  }
}

static void THTensor_(apply_2_2_4)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  long t3sz2 = t3->size[2];
  long t3st2 = t3->stride[2];
  long t3sz3 = t3->size[3];
  long t3st3 = t3->stride[3];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  long t3i2 = 0;
  long t3i3 = 0;
  while(t1i0 < t1sz0 && t2i0 < t2sz0 && t3i0 < t3sz0) {
    long rr = (t1sz1-t1i1 < t2sz1-t2i1 ? t1sz1-t1i1 : t2sz1-t2i1);
    long r = (rr < t3sz3-t3i3 ? rr : t3sz3-t3i3);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1, t1st1, t2data + t2i0*t2st0 + t2i1*t2st1, t2st1, t3data + t3i0*t3st0 + t3i1*t3st1 + t3i2*t3st2 + t3i3*t3st3, t3st3, data);
    t1i1 += r;
    if(t1i1 == t1sz1) {
      t1i1 = 0;
      t1i0++;
    }
    t2i1 += r;
    if(t2i1 == t2sz1) {
      t2i1 = 0;
      t2i0++;
    }
    t3i3 += r;
    if(t3i3 == t3sz3) {
      t3i3 = 0;
      t3i2++;
      if(t3i2 == t3sz2) {
        t3i2 = 0;
        t3i1++;
        if(t3i1 == t3sz1) {
          t3i1 = 0;
          t3i0++;
        }
      }
    }
  }
}

static void THTensor_(apply_2_2_5)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  long t3sz2 = t3->size[2];
  long t3st2 = t3->stride[2];
  long t3sz3 = t3->size[3];
  long t3st3 = t3->stride[3];
  long t3sz4 = t3->size[4];
  long t3st4 = t3->stride[4];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  long t3i2 = 0;
  long t3i3 = 0;
  long t3i4 = 0;
  while(t1i0 < t1sz0 && t2i0 < t2sz0 && t3i0 < t3sz0) {
    long rr = (t1sz1-t1i1 < t2sz1-t2i1 ? t1sz1-t1i1 : t2sz1-t2i1);
    long r = (rr < t3sz4-t3i4 ? rr : t3sz4-t3i4);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1, t1st1, t2data + t2i0*t2st0 + t2i1*t2st1, t2st1, t3data + t3i0*t3st0 + t3i1*t3st1 + t3i2*t3st2 + t3i3*t3st3 + t3i4*t3st4, t3st4, data);
    t1i1 += r;
    if(t1i1 == t1sz1) {
      t1i1 = 0;
      t1i0++;
    }
    t2i1 += r;
    if(t2i1 == t2sz1) {
      t2i1 = 0;
      t2i0++;
    }
    t3i4 += r;
    if(t3i4 == t3sz4) {
      t3i4 = 0;
      t3i3++;
      if(t3i3 == t3sz3) {
        t3i3 = 0;
        t3i2++;
        if(t3i2 == t3sz2) {
          t3i2 = 0;
          t3i1++;
          if(t3i1 == t3sz1) {
            t3i1 = 0;
            t3i0++;
          }
        }
      }
    }
  }
}

static void THTensor_(apply_2_3_1)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  long t2sz2 = t2->size[2];
  long t2st2 = t2->stride[2];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t2i2 = 0;
  long t3i0 = 0;
  while(t1i0 < t1sz0 && t2i0 < t2sz0) {
    long rr = (t1sz1-t1i1 < t2sz2-t2i2 ? t1sz1-t1i1 : t2sz2-t2i2);
    long r = (rr < t3sz0-t3i0 ? rr : t3sz0-t3i0);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1, t1st1, t2data + t2i0*t2st0 + t2i1*t2st1 + t2i2*t2st2, t2st2, t3data + t3i0*t3st0, t3st0, data);
    t1i1 += r;
    if(t1i1 == t1sz1) {
      t1i1 = 0;
      t1i0++;
    }
    t2i2 += r;
    if(t2i2 == t2sz2) {
      t2i2 = 0;
      t2i1++;
      if(t2i1 == t2sz1) {
        t2i1 = 0;
        t2i0++;
      }
    }
    t3i0 += r;
  }
}

static void THTensor_(apply_2_3_2)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  long t2sz2 = t2->size[2];
  long t2st2 = t2->stride[2];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t2i2 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  while(t1i0 < t1sz0 && t2i0 < t2sz0 && t3i0 < t3sz0) {
    long rr = (t1sz1-t1i1 < t2sz2-t2i2 ? t1sz1-t1i1 : t2sz2-t2i2);
    long r = (rr < t3sz1-t3i1 ? rr : t3sz1-t3i1);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1, t1st1, t2data + t2i0*t2st0 + t2i1*t2st1 + t2i2*t2st2, t2st2, t3data + t3i0*t3st0 + t3i1*t3st1, t3st1, data);
    t1i1 += r;
    if(t1i1 == t1sz1) {
      t1i1 = 0;
      t1i0++;
    }
    t2i2 += r;
    if(t2i2 == t2sz2) {
      t2i2 = 0;
      t2i1++;
      if(t2i1 == t2sz1) {
        t2i1 = 0;
        t2i0++;
      }
    }
    t3i1 += r;
    if(t3i1 == t3sz1) {
      t3i1 = 0;
      t3i0++;
    }
  }
}

static void THTensor_(apply_2_3_3)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  long t2sz2 = t2->size[2];
  long t2st2 = t2->stride[2];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  long t3sz2 = t3->size[2];
  long t3st2 = t3->stride[2];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t2i2 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  long t3i2 = 0;
  while(t1i0 < t1sz0 && t2i0 < t2sz0 && t3i0 < t3sz0) {
    long rr = (t1sz1-t1i1 < t2sz2-t2i2 ? t1sz1-t1i1 : t2sz2-t2i2);
    long r = (rr < t3sz2-t3i2 ? rr : t3sz2-t3i2);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1, t1st1, t2data + t2i0*t2st0 + t2i1*t2st1 + t2i2*t2st2, t2st2, t3data + t3i0*t3st0 + t3i1*t3st1 + t3i2*t3st2, t3st2, data);
    t1i1 += r;
    if(t1i1 == t1sz1) {
      t1i1 = 0;
      t1i0++;
    }
    t2i2 += r;
    if(t2i2 == t2sz2) {
      t2i2 = 0;
      t2i1++;
      if(t2i1 == t2sz1) {
        t2i1 = 0;
        t2i0++;
      }
    }
    t3i2 += r;
    if(t3i2 == t3sz2) {
      t3i2 = 0;
      t3i1++;
      if(t3i1 == t3sz1) {
        t3i1 = 0;
        t3i0++;
      }
    }
  }
}

static void THTensor_(apply_2_3_4)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  long t2sz2 = t2->size[2];
  long t2st2 = t2->stride[2];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  long t3sz2 = t3->size[2];
  long t3st2 = t3->stride[2];
  long t3sz3 = t3->size[3];
  long t3st3 = t3->stride[3];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t2i2 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  long t3i2 = 0;
  long t3i3 = 0;
  while(t1i0 < t1sz0 && t2i0 < t2sz0 && t3i0 < t3sz0) {
    long rr = (t1sz1-t1i1 < t2sz2-t2i2 ? t1sz1-t1i1 : t2sz2-t2i2);
    long r = (rr < t3sz3-t3i3 ? rr : t3sz3-t3i3);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1, t1st1, t2data + t2i0*t2st0 + t2i1*t2st1 + t2i2*t2st2, t2st2, t3data + t3i0*t3st0 + t3i1*t3st1 + t3i2*t3st2 + t3i3*t3st3, t3st3, data);
    t1i1 += r;
    if(t1i1 == t1sz1) {
      t1i1 = 0;
      t1i0++;
    }
    t2i2 += r;
    if(t2i2 == t2sz2) {
      t2i2 = 0;
      t2i1++;
      if(t2i1 == t2sz1) {
        t2i1 = 0;
        t2i0++;
      }
    }
    t3i3 += r;
    if(t3i3 == t3sz3) {
      t3i3 = 0;
      t3i2++;
      if(t3i2 == t3sz2) {
        t3i2 = 0;
        t3i1++;
        if(t3i1 == t3sz1) {
          t3i1 = 0;
          t3i0++;
        }
      }
    }
  }
}

static void THTensor_(apply_2_3_5)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  long t2sz2 = t2->size[2];
  long t2st2 = t2->stride[2];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  long t3sz2 = t3->size[2];
  long t3st2 = t3->stride[2];
  long t3sz3 = t3->size[3];
  long t3st3 = t3->stride[3];
  long t3sz4 = t3->size[4];
  long t3st4 = t3->stride[4];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t2i2 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  long t3i2 = 0;
  long t3i3 = 0;
  long t3i4 = 0;
  while(t1i0 < t1sz0 && t2i0 < t2sz0 && t3i0 < t3sz0) {
    long rr = (t1sz1-t1i1 < t2sz2-t2i2 ? t1sz1-t1i1 : t2sz2-t2i2);
    long r = (rr < t3sz4-t3i4 ? rr : t3sz4-t3i4);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1, t1st1, t2data + t2i0*t2st0 + t2i1*t2st1 + t2i2*t2st2, t2st2, t3data + t3i0*t3st0 + t3i1*t3st1 + t3i2*t3st2 + t3i3*t3st3 + t3i4*t3st4, t3st4, data);
    t1i1 += r;
    if(t1i1 == t1sz1) {
      t1i1 = 0;
      t1i0++;
    }
    t2i2 += r;
    if(t2i2 == t2sz2) {
      t2i2 = 0;
      t2i1++;
      if(t2i1 == t2sz1) {
        t2i1 = 0;
        t2i0++;
      }
    }
    t3i4 += r;
    if(t3i4 == t3sz4) {
      t3i4 = 0;
      t3i3++;
      if(t3i3 == t3sz3) {
        t3i3 = 0;
        t3i2++;
        if(t3i2 == t3sz2) {
          t3i2 = 0;
          t3i1++;
          if(t3i1 == t3sz1) {
            t3i1 = 0;
            t3i0++;
          }
        }
      }
    }
  }
}

static void THTensor_(apply_2_4_1)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  long t2sz2 = t2->size[2];
  long t2st2 = t2->stride[2];
  long t2sz3 = t2->size[3];
  long t2st3 = t2->stride[3];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t2i2 = 0;
  long t2i3 = 0;
  long t3i0 = 0;
  while(t1i0 < t1sz0 && t2i0 < t2sz0) {
    long rr = (t1sz1-t1i1 < t2sz3-t2i3 ? t1sz1-t1i1 : t2sz3-t2i3);
    long r = (rr < t3sz0-t3i0 ? rr : t3sz0-t3i0);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1, t1st1, t2data + t2i0*t2st0 + t2i1*t2st1 + t2i2*t2st2 + t2i3*t2st3, t2st3, t3data + t3i0*t3st0, t3st0, data);
    t1i1 += r;
    if(t1i1 == t1sz1) {
      t1i1 = 0;
      t1i0++;
    }
    t2i3 += r;
    if(t2i3 == t2sz3) {
      t2i3 = 0;
      t2i2++;
      if(t2i2 == t2sz2) {
        t2i2 = 0;
        t2i1++;
        if(t2i1 == t2sz1) {
          t2i1 = 0;
          t2i0++;
        }
      }
    }
    t3i0 += r;
  }
}

static void THTensor_(apply_2_4_2)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  long t2sz2 = t2->size[2];
  long t2st2 = t2->stride[2];
  long t2sz3 = t2->size[3];
  long t2st3 = t2->stride[3];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t2i2 = 0;
  long t2i3 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  while(t1i0 < t1sz0 && t2i0 < t2sz0 && t3i0 < t3sz0) {
    long rr = (t1sz1-t1i1 < t2sz3-t2i3 ? t1sz1-t1i1 : t2sz3-t2i3);
    long r = (rr < t3sz1-t3i1 ? rr : t3sz1-t3i1);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1, t1st1, t2data + t2i0*t2st0 + t2i1*t2st1 + t2i2*t2st2 + t2i3*t2st3, t2st3, t3data + t3i0*t3st0 + t3i1*t3st1, t3st1, data);
    t1i1 += r;
    if(t1i1 == t1sz1) {
      t1i1 = 0;
      t1i0++;
    }
    t2i3 += r;
    if(t2i3 == t2sz3) {
      t2i3 = 0;
      t2i2++;
      if(t2i2 == t2sz2) {
        t2i2 = 0;
        t2i1++;
        if(t2i1 == t2sz1) {
          t2i1 = 0;
          t2i0++;
        }
      }
    }
    t3i1 += r;
    if(t3i1 == t3sz1) {
      t3i1 = 0;
      t3i0++;
    }
  }
}

static void THTensor_(apply_2_4_3)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  long t2sz2 = t2->size[2];
  long t2st2 = t2->stride[2];
  long t2sz3 = t2->size[3];
  long t2st3 = t2->stride[3];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  long t3sz2 = t3->size[2];
  long t3st2 = t3->stride[2];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t2i2 = 0;
  long t2i3 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  long t3i2 = 0;
  while(t1i0 < t1sz0 && t2i0 < t2sz0 && t3i0 < t3sz0) {
    long rr = (t1sz1-t1i1 < t2sz3-t2i3 ? t1sz1-t1i1 : t2sz3-t2i3);
    long r = (rr < t3sz2-t3i2 ? rr : t3sz2-t3i2);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1, t1st1, t2data + t2i0*t2st0 + t2i1*t2st1 + t2i2*t2st2 + t2i3*t2st3, t2st3, t3data + t3i0*t3st0 + t3i1*t3st1 + t3i2*t3st2, t3st2, data);
    t1i1 += r;
    if(t1i1 == t1sz1) {
      t1i1 = 0;
      t1i0++;
    }
    t2i3 += r;
    if(t2i3 == t2sz3) {
      t2i3 = 0;
      t2i2++;
      if(t2i2 == t2sz2) {
        t2i2 = 0;
        t2i1++;
        if(t2i1 == t2sz1) {
          t2i1 = 0;
          t2i0++;
        }
      }
    }
    t3i2 += r;
    if(t3i2 == t3sz2) {
      t3i2 = 0;
      t3i1++;
      if(t3i1 == t3sz1) {
        t3i1 = 0;
        t3i0++;
      }
    }
  }
}

static void THTensor_(apply_2_4_4)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  long t2sz2 = t2->size[2];
  long t2st2 = t2->stride[2];
  long t2sz3 = t2->size[3];
  long t2st3 = t2->stride[3];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  long t3sz2 = t3->size[2];
  long t3st2 = t3->stride[2];
  long t3sz3 = t3->size[3];
  long t3st3 = t3->stride[3];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t2i2 = 0;
  long t2i3 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  long t3i2 = 0;
  long t3i3 = 0;
  while(t1i0 < t1sz0 && t2i0 < t2sz0 && t3i0 < t3sz0) {
    long rr = (t1sz1-t1i1 < t2sz3-t2i3 ? t1sz1-t1i1 : t2sz3-t2i3);
    long r = (rr < t3sz3-t3i3 ? rr : t3sz3-t3i3);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1, t1st1, t2data + t2i0*t2st0 + t2i1*t2st1 + t2i2*t2st2 + t2i3*t2st3, t2st3, t3data + t3i0*t3st0 + t3i1*t3st1 + t3i2*t3st2 + t3i3*t3st3, t3st3, data);
    t1i1 += r;
    if(t1i1 == t1sz1) {
      t1i1 = 0;
      t1i0++;
    }
    t2i3 += r;
    if(t2i3 == t2sz3) {
      t2i3 = 0;
      t2i2++;
      if(t2i2 == t2sz2) {
        t2i2 = 0;
        t2i1++;
        if(t2i1 == t2sz1) {
          t2i1 = 0;
          t2i0++;
        }
      }
    }
    t3i3 += r;
    if(t3i3 == t3sz3) {
      t3i3 = 0;
      t3i2++;
      if(t3i2 == t3sz2) {
        t3i2 = 0;
        t3i1++;
        if(t3i1 == t3sz1) {
          t3i1 = 0;
          t3i0++;
        }
      }
    }
  }
}

static void THTensor_(apply_2_4_5)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  long t2sz2 = t2->size[2];
  long t2st2 = t2->stride[2];
  long t2sz3 = t2->size[3];
  long t2st3 = t2->stride[3];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  long t3sz2 = t3->size[2];
  long t3st2 = t3->stride[2];
  long t3sz3 = t3->size[3];
  long t3st3 = t3->stride[3];
  long t3sz4 = t3->size[4];
  long t3st4 = t3->stride[4];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t2i2 = 0;
  long t2i3 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  long t3i2 = 0;
  long t3i3 = 0;
  long t3i4 = 0;
  while(t1i0 < t1sz0 && t2i0 < t2sz0 && t3i0 < t3sz0) {
    long rr = (t1sz1-t1i1 < t2sz3-t2i3 ? t1sz1-t1i1 : t2sz3-t2i3);
    long r = (rr < t3sz4-t3i4 ? rr : t3sz4-t3i4);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1, t1st1, t2data + t2i0*t2st0 + t2i1*t2st1 + t2i2*t2st2 + t2i3*t2st3, t2st3, t3data + t3i0*t3st0 + t3i1*t3st1 + t3i2*t3st2 + t3i3*t3st3 + t3i4*t3st4, t3st4, data);
    t1i1 += r;
    if(t1i1 == t1sz1) {
      t1i1 = 0;
      t1i0++;
    }
    t2i3 += r;
    if(t2i3 == t2sz3) {
      t2i3 = 0;
      t2i2++;
      if(t2i2 == t2sz2) {
        t2i2 = 0;
        t2i1++;
        if(t2i1 == t2sz1) {
          t2i1 = 0;
          t2i0++;
        }
      }
    }
    t3i4 += r;
    if(t3i4 == t3sz4) {
      t3i4 = 0;
      t3i3++;
      if(t3i3 == t3sz3) {
        t3i3 = 0;
        t3i2++;
        if(t3i2 == t3sz2) {
          t3i2 = 0;
          t3i1++;
          if(t3i1 == t3sz1) {
            t3i1 = 0;
            t3i0++;
          }
        }
      }
    }
  }
}

static void THTensor_(apply_2_5_1)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  long t2sz2 = t2->size[2];
  long t2st2 = t2->stride[2];
  long t2sz3 = t2->size[3];
  long t2st3 = t2->stride[3];
  long t2sz4 = t2->size[4];
  long t2st4 = t2->stride[4];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t2i2 = 0;
  long t2i3 = 0;
  long t2i4 = 0;
  long t3i0 = 0;
  while(t1i0 < t1sz0 && t2i0 < t2sz0) {
    long rr = (t1sz1-t1i1 < t2sz4-t2i4 ? t1sz1-t1i1 : t2sz4-t2i4);
    long r = (rr < t3sz0-t3i0 ? rr : t3sz0-t3i0);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1, t1st1, t2data + t2i0*t2st0 + t2i1*t2st1 + t2i2*t2st2 + t2i3*t2st3 + t2i4*t2st4, t2st4, t3data + t3i0*t3st0, t3st0, data);
    t1i1 += r;
    if(t1i1 == t1sz1) {
      t1i1 = 0;
      t1i0++;
    }
    t2i4 += r;
    if(t2i4 == t2sz4) {
      t2i4 = 0;
      t2i3++;
      if(t2i3 == t2sz3) {
        t2i3 = 0;
        t2i2++;
        if(t2i2 == t2sz2) {
          t2i2 = 0;
          t2i1++;
          if(t2i1 == t2sz1) {
            t2i1 = 0;
            t2i0++;
          }
        }
      }
    }
    t3i0 += r;
  }
}

static void THTensor_(apply_2_5_2)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  long t2sz2 = t2->size[2];
  long t2st2 = t2->stride[2];
  long t2sz3 = t2->size[3];
  long t2st3 = t2->stride[3];
  long t2sz4 = t2->size[4];
  long t2st4 = t2->stride[4];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t2i2 = 0;
  long t2i3 = 0;
  long t2i4 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  while(t1i0 < t1sz0 && t2i0 < t2sz0 && t3i0 < t3sz0) {
    long rr = (t1sz1-t1i1 < t2sz4-t2i4 ? t1sz1-t1i1 : t2sz4-t2i4);
    long r = (rr < t3sz1-t3i1 ? rr : t3sz1-t3i1);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1, t1st1, t2data + t2i0*t2st0 + t2i1*t2st1 + t2i2*t2st2 + t2i3*t2st3 + t2i4*t2st4, t2st4, t3data + t3i0*t3st0 + t3i1*t3st1, t3st1, data);
    t1i1 += r;
    if(t1i1 == t1sz1) {
      t1i1 = 0;
      t1i0++;
    }
    t2i4 += r;
    if(t2i4 == t2sz4) {
      t2i4 = 0;
      t2i3++;
      if(t2i3 == t2sz3) {
        t2i3 = 0;
        t2i2++;
        if(t2i2 == t2sz2) {
          t2i2 = 0;
          t2i1++;
          if(t2i1 == t2sz1) {
            t2i1 = 0;
            t2i0++;
          }
        }
      }
    }
    t3i1 += r;
    if(t3i1 == t3sz1) {
      t3i1 = 0;
      t3i0++;
    }
  }
}

static void THTensor_(apply_2_5_3)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  long t2sz2 = t2->size[2];
  long t2st2 = t2->stride[2];
  long t2sz3 = t2->size[3];
  long t2st3 = t2->stride[3];
  long t2sz4 = t2->size[4];
  long t2st4 = t2->stride[4];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  long t3sz2 = t3->size[2];
  long t3st2 = t3->stride[2];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t2i2 = 0;
  long t2i3 = 0;
  long t2i4 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  long t3i2 = 0;
  while(t1i0 < t1sz0 && t2i0 < t2sz0 && t3i0 < t3sz0) {
    long rr = (t1sz1-t1i1 < t2sz4-t2i4 ? t1sz1-t1i1 : t2sz4-t2i4);
    long r = (rr < t3sz2-t3i2 ? rr : t3sz2-t3i2);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1, t1st1, t2data + t2i0*t2st0 + t2i1*t2st1 + t2i2*t2st2 + t2i3*t2st3 + t2i4*t2st4, t2st4, t3data + t3i0*t3st0 + t3i1*t3st1 + t3i2*t3st2, t3st2, data);
    t1i1 += r;
    if(t1i1 == t1sz1) {
      t1i1 = 0;
      t1i0++;
    }
    t2i4 += r;
    if(t2i4 == t2sz4) {
      t2i4 = 0;
      t2i3++;
      if(t2i3 == t2sz3) {
        t2i3 = 0;
        t2i2++;
        if(t2i2 == t2sz2) {
          t2i2 = 0;
          t2i1++;
          if(t2i1 == t2sz1) {
            t2i1 = 0;
            t2i0++;
          }
        }
      }
    }
    t3i2 += r;
    if(t3i2 == t3sz2) {
      t3i2 = 0;
      t3i1++;
      if(t3i1 == t3sz1) {
        t3i1 = 0;
        t3i0++;
      }
    }
  }
}

static void THTensor_(apply_2_5_4)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  long t2sz2 = t2->size[2];
  long t2st2 = t2->stride[2];
  long t2sz3 = t2->size[3];
  long t2st3 = t2->stride[3];
  long t2sz4 = t2->size[4];
  long t2st4 = t2->stride[4];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  long t3sz2 = t3->size[2];
  long t3st2 = t3->stride[2];
  long t3sz3 = t3->size[3];
  long t3st3 = t3->stride[3];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t2i2 = 0;
  long t2i3 = 0;
  long t2i4 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  long t3i2 = 0;
  long t3i3 = 0;
  while(t1i0 < t1sz0 && t2i0 < t2sz0 && t3i0 < t3sz0) {
    long rr = (t1sz1-t1i1 < t2sz4-t2i4 ? t1sz1-t1i1 : t2sz4-t2i4);
    long r = (rr < t3sz3-t3i3 ? rr : t3sz3-t3i3);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1, t1st1, t2data + t2i0*t2st0 + t2i1*t2st1 + t2i2*t2st2 + t2i3*t2st3 + t2i4*t2st4, t2st4, t3data + t3i0*t3st0 + t3i1*t3st1 + t3i2*t3st2 + t3i3*t3st3, t3st3, data);
    t1i1 += r;
    if(t1i1 == t1sz1) {
      t1i1 = 0;
      t1i0++;
    }
    t2i4 += r;
    if(t2i4 == t2sz4) {
      t2i4 = 0;
      t2i3++;
      if(t2i3 == t2sz3) {
        t2i3 = 0;
        t2i2++;
        if(t2i2 == t2sz2) {
          t2i2 = 0;
          t2i1++;
          if(t2i1 == t2sz1) {
            t2i1 = 0;
            t2i0++;
          }
        }
      }
    }
    t3i3 += r;
    if(t3i3 == t3sz3) {
      t3i3 = 0;
      t3i2++;
      if(t3i2 == t3sz2) {
        t3i2 = 0;
        t3i1++;
        if(t3i1 == t3sz1) {
          t3i1 = 0;
          t3i0++;
        }
      }
    }
  }
}

static void THTensor_(apply_2_5_5)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  long t2sz2 = t2->size[2];
  long t2st2 = t2->stride[2];
  long t2sz3 = t2->size[3];
  long t2st3 = t2->stride[3];
  long t2sz4 = t2->size[4];
  long t2st4 = t2->stride[4];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  long t3sz2 = t3->size[2];
  long t3st2 = t3->stride[2];
  long t3sz3 = t3->size[3];
  long t3st3 = t3->stride[3];
  long t3sz4 = t3->size[4];
  long t3st4 = t3->stride[4];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t2i2 = 0;
  long t2i3 = 0;
  long t2i4 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  long t3i2 = 0;
  long t3i3 = 0;
  long t3i4 = 0;
  while(t1i0 < t1sz0 && t2i0 < t2sz0 && t3i0 < t3sz0) {
    long rr = (t1sz1-t1i1 < t2sz4-t2i4 ? t1sz1-t1i1 : t2sz4-t2i4);
    long r = (rr < t3sz4-t3i4 ? rr : t3sz4-t3i4);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1, t1st1, t2data + t2i0*t2st0 + t2i1*t2st1 + t2i2*t2st2 + t2i3*t2st3 + t2i4*t2st4, t2st4, t3data + t3i0*t3st0 + t3i1*t3st1 + t3i2*t3st2 + t3i3*t3st3 + t3i4*t3st4, t3st4, data);
    t1i1 += r;
    if(t1i1 == t1sz1) {
      t1i1 = 0;
      t1i0++;
    }
    t2i4 += r;
    if(t2i4 == t2sz4) {
      t2i4 = 0;
      t2i3++;
      if(t2i3 == t2sz3) {
        t2i3 = 0;
        t2i2++;
        if(t2i2 == t2sz2) {
          t2i2 = 0;
          t2i1++;
          if(t2i1 == t2sz1) {
            t2i1 = 0;
            t2i0++;
          }
        }
      }
    }
    t3i4 += r;
    if(t3i4 == t3sz4) {
      t3i4 = 0;
      t3i3++;
      if(t3i3 == t3sz3) {
        t3i3 = 0;
        t3i2++;
        if(t3i2 == t3sz2) {
          t3i2 = 0;
          t3i1++;
          if(t3i1 == t3sz1) {
            t3i1 = 0;
            t3i0++;
          }
        }
      }
    }
  }
}

static void THTensor_(apply_3_1_1)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  long t1sz2 = t1->size[2];
  long t1st2 = t1->stride[2];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t1i2 = 0;
  long t2i0 = 0;
  long t3i0 = 0;
  while(t1i0 < t1sz0) {
    long rr = (t1sz2-t1i2 < t2sz0-t2i0 ? t1sz2-t1i2 : t2sz0-t2i0);
    long r = (rr < t3sz0-t3i0 ? rr : t3sz0-t3i0);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1 + t1i2*t1st2, t1st2, t2data + t2i0*t2st0, t2st0, t3data + t3i0*t3st0, t3st0, data);
    t1i2 += r;
    if(t1i2 == t1sz2) {
      t1i2 = 0;
      t1i1++;
      if(t1i1 == t1sz1) {
        t1i1 = 0;
        t1i0++;
      }
    }
    t2i0 += r;
    t3i0 += r;
  }
}

static void THTensor_(apply_3_1_2)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  long t1sz2 = t1->size[2];
  long t1st2 = t1->stride[2];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t1i2 = 0;
  long t2i0 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  while(t1i0 < t1sz0 && t3i0 < t3sz0) {
    long rr = (t1sz2-t1i2 < t2sz0-t2i0 ? t1sz2-t1i2 : t2sz0-t2i0);
    long r = (rr < t3sz1-t3i1 ? rr : t3sz1-t3i1);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1 + t1i2*t1st2, t1st2, t2data + t2i0*t2st0, t2st0, t3data + t3i0*t3st0 + t3i1*t3st1, t3st1, data);
    t1i2 += r;
    if(t1i2 == t1sz2) {
      t1i2 = 0;
      t1i1++;
      if(t1i1 == t1sz1) {
        t1i1 = 0;
        t1i0++;
      }
    }
    t2i0 += r;
    t3i1 += r;
    if(t3i1 == t3sz1) {
      t3i1 = 0;
      t3i0++;
    }
  }
}

static void THTensor_(apply_3_1_3)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  long t1sz2 = t1->size[2];
  long t1st2 = t1->stride[2];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  long t3sz2 = t3->size[2];
  long t3st2 = t3->stride[2];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t1i2 = 0;
  long t2i0 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  long t3i2 = 0;
  while(t1i0 < t1sz0 && t3i0 < t3sz0) {
    long rr = (t1sz2-t1i2 < t2sz0-t2i0 ? t1sz2-t1i2 : t2sz0-t2i0);
    long r = (rr < t3sz2-t3i2 ? rr : t3sz2-t3i2);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1 + t1i2*t1st2, t1st2, t2data + t2i0*t2st0, t2st0, t3data + t3i0*t3st0 + t3i1*t3st1 + t3i2*t3st2, t3st2, data);
    t1i2 += r;
    if(t1i2 == t1sz2) {
      t1i2 = 0;
      t1i1++;
      if(t1i1 == t1sz1) {
        t1i1 = 0;
        t1i0++;
      }
    }
    t2i0 += r;
    t3i2 += r;
    if(t3i2 == t3sz2) {
      t3i2 = 0;
      t3i1++;
      if(t3i1 == t3sz1) {
        t3i1 = 0;
        t3i0++;
      }
    }
  }
}

static void THTensor_(apply_3_1_4)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  long t1sz2 = t1->size[2];
  long t1st2 = t1->stride[2];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  long t3sz2 = t3->size[2];
  long t3st2 = t3->stride[2];
  long t3sz3 = t3->size[3];
  long t3st3 = t3->stride[3];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t1i2 = 0;
  long t2i0 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  long t3i2 = 0;
  long t3i3 = 0;
  while(t1i0 < t1sz0 && t3i0 < t3sz0) {
    long rr = (t1sz2-t1i2 < t2sz0-t2i0 ? t1sz2-t1i2 : t2sz0-t2i0);
    long r = (rr < t3sz3-t3i3 ? rr : t3sz3-t3i3);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1 + t1i2*t1st2, t1st2, t2data + t2i0*t2st0, t2st0, t3data + t3i0*t3st0 + t3i1*t3st1 + t3i2*t3st2 + t3i3*t3st3, t3st3, data);
    t1i2 += r;
    if(t1i2 == t1sz2) {
      t1i2 = 0;
      t1i1++;
      if(t1i1 == t1sz1) {
        t1i1 = 0;
        t1i0++;
      }
    }
    t2i0 += r;
    t3i3 += r;
    if(t3i3 == t3sz3) {
      t3i3 = 0;
      t3i2++;
      if(t3i2 == t3sz2) {
        t3i2 = 0;
        t3i1++;
        if(t3i1 == t3sz1) {
          t3i1 = 0;
          t3i0++;
        }
      }
    }
  }
}

static void THTensor_(apply_3_1_5)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  long t1sz2 = t1->size[2];
  long t1st2 = t1->stride[2];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  long t3sz2 = t3->size[2];
  long t3st2 = t3->stride[2];
  long t3sz3 = t3->size[3];
  long t3st3 = t3->stride[3];
  long t3sz4 = t3->size[4];
  long t3st4 = t3->stride[4];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t1i2 = 0;
  long t2i0 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  long t3i2 = 0;
  long t3i3 = 0;
  long t3i4 = 0;
  while(t1i0 < t1sz0 && t3i0 < t3sz0) {
    long rr = (t1sz2-t1i2 < t2sz0-t2i0 ? t1sz2-t1i2 : t2sz0-t2i0);
    long r = (rr < t3sz4-t3i4 ? rr : t3sz4-t3i4);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1 + t1i2*t1st2, t1st2, t2data + t2i0*t2st0, t2st0, t3data + t3i0*t3st0 + t3i1*t3st1 + t3i2*t3st2 + t3i3*t3st3 + t3i4*t3st4, t3st4, data);
    t1i2 += r;
    if(t1i2 == t1sz2) {
      t1i2 = 0;
      t1i1++;
      if(t1i1 == t1sz1) {
        t1i1 = 0;
        t1i0++;
      }
    }
    t2i0 += r;
    t3i4 += r;
    if(t3i4 == t3sz4) {
      t3i4 = 0;
      t3i3++;
      if(t3i3 == t3sz3) {
        t3i3 = 0;
        t3i2++;
        if(t3i2 == t3sz2) {
          t3i2 = 0;
          t3i1++;
          if(t3i1 == t3sz1) {
            t3i1 = 0;
            t3i0++;
          }
        }
      }
    }
  }
}

static void THTensor_(apply_3_2_1)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  long t1sz2 = t1->size[2];
  long t1st2 = t1->stride[2];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t1i2 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t3i0 = 0;
  while(t1i0 < t1sz0 && t2i0 < t2sz0) {
    long rr = (t1sz2-t1i2 < t2sz1-t2i1 ? t1sz2-t1i2 : t2sz1-t2i1);
    long r = (rr < t3sz0-t3i0 ? rr : t3sz0-t3i0);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1 + t1i2*t1st2, t1st2, t2data + t2i0*t2st0 + t2i1*t2st1, t2st1, t3data + t3i0*t3st0, t3st0, data);
    t1i2 += r;
    if(t1i2 == t1sz2) {
      t1i2 = 0;
      t1i1++;
      if(t1i1 == t1sz1) {
        t1i1 = 0;
        t1i0++;
      }
    }
    t2i1 += r;
    if(t2i1 == t2sz1) {
      t2i1 = 0;
      t2i0++;
    }
    t3i0 += r;
  }
}

static void THTensor_(apply_3_2_2)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  long t1sz2 = t1->size[2];
  long t1st2 = t1->stride[2];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t1i2 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  while(t1i0 < t1sz0 && t2i0 < t2sz0 && t3i0 < t3sz0) {
    long rr = (t1sz2-t1i2 < t2sz1-t2i1 ? t1sz2-t1i2 : t2sz1-t2i1);
    long r = (rr < t3sz1-t3i1 ? rr : t3sz1-t3i1);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1 + t1i2*t1st2, t1st2, t2data + t2i0*t2st0 + t2i1*t2st1, t2st1, t3data + t3i0*t3st0 + t3i1*t3st1, t3st1, data);
    t1i2 += r;
    if(t1i2 == t1sz2) {
      t1i2 = 0;
      t1i1++;
      if(t1i1 == t1sz1) {
        t1i1 = 0;
        t1i0++;
      }
    }
    t2i1 += r;
    if(t2i1 == t2sz1) {
      t2i1 = 0;
      t2i0++;
    }
    t3i1 += r;
    if(t3i1 == t3sz1) {
      t3i1 = 0;
      t3i0++;
    }
  }
}

static void THTensor_(apply_3_2_3)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  long t1sz2 = t1->size[2];
  long t1st2 = t1->stride[2];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  long t3sz2 = t3->size[2];
  long t3st2 = t3->stride[2];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t1i2 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  long t3i2 = 0;
  while(t1i0 < t1sz0 && t2i0 < t2sz0 && t3i0 < t3sz0) {
    long rr = (t1sz2-t1i2 < t2sz1-t2i1 ? t1sz2-t1i2 : t2sz1-t2i1);
    long r = (rr < t3sz2-t3i2 ? rr : t3sz2-t3i2);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1 + t1i2*t1st2, t1st2, t2data + t2i0*t2st0 + t2i1*t2st1, t2st1, t3data + t3i0*t3st0 + t3i1*t3st1 + t3i2*t3st2, t3st2, data);
    t1i2 += r;
    if(t1i2 == t1sz2) {
      t1i2 = 0;
      t1i1++;
      if(t1i1 == t1sz1) {
        t1i1 = 0;
        t1i0++;
      }
    }
    t2i1 += r;
    if(t2i1 == t2sz1) {
      t2i1 = 0;
      t2i0++;
    }
    t3i2 += r;
    if(t3i2 == t3sz2) {
      t3i2 = 0;
      t3i1++;
      if(t3i1 == t3sz1) {
        t3i1 = 0;
        t3i0++;
      }
    }
  }
}

static void THTensor_(apply_3_2_4)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  long t1sz2 = t1->size[2];
  long t1st2 = t1->stride[2];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  long t3sz2 = t3->size[2];
  long t3st2 = t3->stride[2];
  long t3sz3 = t3->size[3];
  long t3st3 = t3->stride[3];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t1i2 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  long t3i2 = 0;
  long t3i3 = 0;
  while(t1i0 < t1sz0 && t2i0 < t2sz0 && t3i0 < t3sz0) {
    long rr = (t1sz2-t1i2 < t2sz1-t2i1 ? t1sz2-t1i2 : t2sz1-t2i1);
    long r = (rr < t3sz3-t3i3 ? rr : t3sz3-t3i3);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1 + t1i2*t1st2, t1st2, t2data + t2i0*t2st0 + t2i1*t2st1, t2st1, t3data + t3i0*t3st0 + t3i1*t3st1 + t3i2*t3st2 + t3i3*t3st3, t3st3, data);
    t1i2 += r;
    if(t1i2 == t1sz2) {
      t1i2 = 0;
      t1i1++;
      if(t1i1 == t1sz1) {
        t1i1 = 0;
        t1i0++;
      }
    }
    t2i1 += r;
    if(t2i1 == t2sz1) {
      t2i1 = 0;
      t2i0++;
    }
    t3i3 += r;
    if(t3i3 == t3sz3) {
      t3i3 = 0;
      t3i2++;
      if(t3i2 == t3sz2) {
        t3i2 = 0;
        t3i1++;
        if(t3i1 == t3sz1) {
          t3i1 = 0;
          t3i0++;
        }
      }
    }
  }
}

static void THTensor_(apply_3_2_5)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  long t1sz2 = t1->size[2];
  long t1st2 = t1->stride[2];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  long t3sz2 = t3->size[2];
  long t3st2 = t3->stride[2];
  long t3sz3 = t3->size[3];
  long t3st3 = t3->stride[3];
  long t3sz4 = t3->size[4];
  long t3st4 = t3->stride[4];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t1i2 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  long t3i2 = 0;
  long t3i3 = 0;
  long t3i4 = 0;
  while(t1i0 < t1sz0 && t2i0 < t2sz0 && t3i0 < t3sz0) {
    long rr = (t1sz2-t1i2 < t2sz1-t2i1 ? t1sz2-t1i2 : t2sz1-t2i1);
    long r = (rr < t3sz4-t3i4 ? rr : t3sz4-t3i4);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1 + t1i2*t1st2, t1st2, t2data + t2i0*t2st0 + t2i1*t2st1, t2st1, t3data + t3i0*t3st0 + t3i1*t3st1 + t3i2*t3st2 + t3i3*t3st3 + t3i4*t3st4, t3st4, data);
    t1i2 += r;
    if(t1i2 == t1sz2) {
      t1i2 = 0;
      t1i1++;
      if(t1i1 == t1sz1) {
        t1i1 = 0;
        t1i0++;
      }
    }
    t2i1 += r;
    if(t2i1 == t2sz1) {
      t2i1 = 0;
      t2i0++;
    }
    t3i4 += r;
    if(t3i4 == t3sz4) {
      t3i4 = 0;
      t3i3++;
      if(t3i3 == t3sz3) {
        t3i3 = 0;
        t3i2++;
        if(t3i2 == t3sz2) {
          t3i2 = 0;
          t3i1++;
          if(t3i1 == t3sz1) {
            t3i1 = 0;
            t3i0++;
          }
        }
      }
    }
  }
}

static void THTensor_(apply_3_3_1)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  long t1sz2 = t1->size[2];
  long t1st2 = t1->stride[2];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  long t2sz2 = t2->size[2];
  long t2st2 = t2->stride[2];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t1i2 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t2i2 = 0;
  long t3i0 = 0;
  while(t1i0 < t1sz0 && t2i0 < t2sz0) {
    long rr = (t1sz2-t1i2 < t2sz2-t2i2 ? t1sz2-t1i2 : t2sz2-t2i2);
    long r = (rr < t3sz0-t3i0 ? rr : t3sz0-t3i0);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1 + t1i2*t1st2, t1st2, t2data + t2i0*t2st0 + t2i1*t2st1 + t2i2*t2st2, t2st2, t3data + t3i0*t3st0, t3st0, data);
    t1i2 += r;
    if(t1i2 == t1sz2) {
      t1i2 = 0;
      t1i1++;
      if(t1i1 == t1sz1) {
        t1i1 = 0;
        t1i0++;
      }
    }
    t2i2 += r;
    if(t2i2 == t2sz2) {
      t2i2 = 0;
      t2i1++;
      if(t2i1 == t2sz1) {
        t2i1 = 0;
        t2i0++;
      }
    }
    t3i0 += r;
  }
}

static void THTensor_(apply_3_3_2)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  long t1sz2 = t1->size[2];
  long t1st2 = t1->stride[2];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  long t2sz2 = t2->size[2];
  long t2st2 = t2->stride[2];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t1i2 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t2i2 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  while(t1i0 < t1sz0 && t2i0 < t2sz0 && t3i0 < t3sz0) {
    long rr = (t1sz2-t1i2 < t2sz2-t2i2 ? t1sz2-t1i2 : t2sz2-t2i2);
    long r = (rr < t3sz1-t3i1 ? rr : t3sz1-t3i1);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1 + t1i2*t1st2, t1st2, t2data + t2i0*t2st0 + t2i1*t2st1 + t2i2*t2st2, t2st2, t3data + t3i0*t3st0 + t3i1*t3st1, t3st1, data);
    t1i2 += r;
    if(t1i2 == t1sz2) {
      t1i2 = 0;
      t1i1++;
      if(t1i1 == t1sz1) {
        t1i1 = 0;
        t1i0++;
      }
    }
    t2i2 += r;
    if(t2i2 == t2sz2) {
      t2i2 = 0;
      t2i1++;
      if(t2i1 == t2sz1) {
        t2i1 = 0;
        t2i0++;
      }
    }
    t3i1 += r;
    if(t3i1 == t3sz1) {
      t3i1 = 0;
      t3i0++;
    }
  }
}

static void THTensor_(apply_3_3_3)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  long t1sz2 = t1->size[2];
  long t1st2 = t1->stride[2];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  long t2sz2 = t2->size[2];
  long t2st2 = t2->stride[2];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  long t3sz2 = t3->size[2];
  long t3st2 = t3->stride[2];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t1i2 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t2i2 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  long t3i2 = 0;
  while(t1i0 < t1sz0 && t2i0 < t2sz0 && t3i0 < t3sz0) {
    long rr = (t1sz2-t1i2 < t2sz2-t2i2 ? t1sz2-t1i2 : t2sz2-t2i2);
    long r = (rr < t3sz2-t3i2 ? rr : t3sz2-t3i2);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1 + t1i2*t1st2, t1st2, t2data + t2i0*t2st0 + t2i1*t2st1 + t2i2*t2st2, t2st2, t3data + t3i0*t3st0 + t3i1*t3st1 + t3i2*t3st2, t3st2, data);
    t1i2 += r;
    if(t1i2 == t1sz2) {
      t1i2 = 0;
      t1i1++;
      if(t1i1 == t1sz1) {
        t1i1 = 0;
        t1i0++;
      }
    }
    t2i2 += r;
    if(t2i2 == t2sz2) {
      t2i2 = 0;
      t2i1++;
      if(t2i1 == t2sz1) {
        t2i1 = 0;
        t2i0++;
      }
    }
    t3i2 += r;
    if(t3i2 == t3sz2) {
      t3i2 = 0;
      t3i1++;
      if(t3i1 == t3sz1) {
        t3i1 = 0;
        t3i0++;
      }
    }
  }
}

static void THTensor_(apply_3_3_4)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  long t1sz2 = t1->size[2];
  long t1st2 = t1->stride[2];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  long t2sz2 = t2->size[2];
  long t2st2 = t2->stride[2];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  long t3sz2 = t3->size[2];
  long t3st2 = t3->stride[2];
  long t3sz3 = t3->size[3];
  long t3st3 = t3->stride[3];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t1i2 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t2i2 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  long t3i2 = 0;
  long t3i3 = 0;
  while(t1i0 < t1sz0 && t2i0 < t2sz0 && t3i0 < t3sz0) {
    long rr = (t1sz2-t1i2 < t2sz2-t2i2 ? t1sz2-t1i2 : t2sz2-t2i2);
    long r = (rr < t3sz3-t3i3 ? rr : t3sz3-t3i3);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1 + t1i2*t1st2, t1st2, t2data + t2i0*t2st0 + t2i1*t2st1 + t2i2*t2st2, t2st2, t3data + t3i0*t3st0 + t3i1*t3st1 + t3i2*t3st2 + t3i3*t3st3, t3st3, data);
    t1i2 += r;
    if(t1i2 == t1sz2) {
      t1i2 = 0;
      t1i1++;
      if(t1i1 == t1sz1) {
        t1i1 = 0;
        t1i0++;
      }
    }
    t2i2 += r;
    if(t2i2 == t2sz2) {
      t2i2 = 0;
      t2i1++;
      if(t2i1 == t2sz1) {
        t2i1 = 0;
        t2i0++;
      }
    }
    t3i3 += r;
    if(t3i3 == t3sz3) {
      t3i3 = 0;
      t3i2++;
      if(t3i2 == t3sz2) {
        t3i2 = 0;
        t3i1++;
        if(t3i1 == t3sz1) {
          t3i1 = 0;
          t3i0++;
        }
      }
    }
  }
}

static void THTensor_(apply_3_3_5)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  long t1sz2 = t1->size[2];
  long t1st2 = t1->stride[2];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  long t2sz2 = t2->size[2];
  long t2st2 = t2->stride[2];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  long t3sz2 = t3->size[2];
  long t3st2 = t3->stride[2];
  long t3sz3 = t3->size[3];
  long t3st3 = t3->stride[3];
  long t3sz4 = t3->size[4];
  long t3st4 = t3->stride[4];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t1i2 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t2i2 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  long t3i2 = 0;
  long t3i3 = 0;
  long t3i4 = 0;
  while(t1i0 < t1sz0 && t2i0 < t2sz0 && t3i0 < t3sz0) {
    long rr = (t1sz2-t1i2 < t2sz2-t2i2 ? t1sz2-t1i2 : t2sz2-t2i2);
    long r = (rr < t3sz4-t3i4 ? rr : t3sz4-t3i4);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1 + t1i2*t1st2, t1st2, t2data + t2i0*t2st0 + t2i1*t2st1 + t2i2*t2st2, t2st2, t3data + t3i0*t3st0 + t3i1*t3st1 + t3i2*t3st2 + t3i3*t3st3 + t3i4*t3st4, t3st4, data);
    t1i2 += r;
    if(t1i2 == t1sz2) {
      t1i2 = 0;
      t1i1++;
      if(t1i1 == t1sz1) {
        t1i1 = 0;
        t1i0++;
      }
    }
    t2i2 += r;
    if(t2i2 == t2sz2) {
      t2i2 = 0;
      t2i1++;
      if(t2i1 == t2sz1) {
        t2i1 = 0;
        t2i0++;
      }
    }
    t3i4 += r;
    if(t3i4 == t3sz4) {
      t3i4 = 0;
      t3i3++;
      if(t3i3 == t3sz3) {
        t3i3 = 0;
        t3i2++;
        if(t3i2 == t3sz2) {
          t3i2 = 0;
          t3i1++;
          if(t3i1 == t3sz1) {
            t3i1 = 0;
            t3i0++;
          }
        }
      }
    }
  }
}

static void THTensor_(apply_3_4_1)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  long t1sz2 = t1->size[2];
  long t1st2 = t1->stride[2];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  long t2sz2 = t2->size[2];
  long t2st2 = t2->stride[2];
  long t2sz3 = t2->size[3];
  long t2st3 = t2->stride[3];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t1i2 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t2i2 = 0;
  long t2i3 = 0;
  long t3i0 = 0;
  while(t1i0 < t1sz0 && t2i0 < t2sz0) {
    long rr = (t1sz2-t1i2 < t2sz3-t2i3 ? t1sz2-t1i2 : t2sz3-t2i3);
    long r = (rr < t3sz0-t3i0 ? rr : t3sz0-t3i0);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1 + t1i2*t1st2, t1st2, t2data + t2i0*t2st0 + t2i1*t2st1 + t2i2*t2st2 + t2i3*t2st3, t2st3, t3data + t3i0*t3st0, t3st0, data);
    t1i2 += r;
    if(t1i2 == t1sz2) {
      t1i2 = 0;
      t1i1++;
      if(t1i1 == t1sz1) {
        t1i1 = 0;
        t1i0++;
      }
    }
    t2i3 += r;
    if(t2i3 == t2sz3) {
      t2i3 = 0;
      t2i2++;
      if(t2i2 == t2sz2) {
        t2i2 = 0;
        t2i1++;
        if(t2i1 == t2sz1) {
          t2i1 = 0;
          t2i0++;
        }
      }
    }
    t3i0 += r;
  }
}

static void THTensor_(apply_3_4_2)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  long t1sz2 = t1->size[2];
  long t1st2 = t1->stride[2];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  long t2sz2 = t2->size[2];
  long t2st2 = t2->stride[2];
  long t2sz3 = t2->size[3];
  long t2st3 = t2->stride[3];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t1i2 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t2i2 = 0;
  long t2i3 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  while(t1i0 < t1sz0 && t2i0 < t2sz0 && t3i0 < t3sz0) {
    long rr = (t1sz2-t1i2 < t2sz3-t2i3 ? t1sz2-t1i2 : t2sz3-t2i3);
    long r = (rr < t3sz1-t3i1 ? rr : t3sz1-t3i1);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1 + t1i2*t1st2, t1st2, t2data + t2i0*t2st0 + t2i1*t2st1 + t2i2*t2st2 + t2i3*t2st3, t2st3, t3data + t3i0*t3st0 + t3i1*t3st1, t3st1, data);
    t1i2 += r;
    if(t1i2 == t1sz2) {
      t1i2 = 0;
      t1i1++;
      if(t1i1 == t1sz1) {
        t1i1 = 0;
        t1i0++;
      }
    }
    t2i3 += r;
    if(t2i3 == t2sz3) {
      t2i3 = 0;
      t2i2++;
      if(t2i2 == t2sz2) {
        t2i2 = 0;
        t2i1++;
        if(t2i1 == t2sz1) {
          t2i1 = 0;
          t2i0++;
        }
      }
    }
    t3i1 += r;
    if(t3i1 == t3sz1) {
      t3i1 = 0;
      t3i0++;
    }
  }
}

static void THTensor_(apply_3_4_3)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  long t1sz2 = t1->size[2];
  long t1st2 = t1->stride[2];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  long t2sz2 = t2->size[2];
  long t2st2 = t2->stride[2];
  long t2sz3 = t2->size[3];
  long t2st3 = t2->stride[3];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  long t3sz2 = t3->size[2];
  long t3st2 = t3->stride[2];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t1i2 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t2i2 = 0;
  long t2i3 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  long t3i2 = 0;
  while(t1i0 < t1sz0 && t2i0 < t2sz0 && t3i0 < t3sz0) {
    long rr = (t1sz2-t1i2 < t2sz3-t2i3 ? t1sz2-t1i2 : t2sz3-t2i3);
    long r = (rr < t3sz2-t3i2 ? rr : t3sz2-t3i2);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1 + t1i2*t1st2, t1st2, t2data + t2i0*t2st0 + t2i1*t2st1 + t2i2*t2st2 + t2i3*t2st3, t2st3, t3data + t3i0*t3st0 + t3i1*t3st1 + t3i2*t3st2, t3st2, data);
    t1i2 += r;
    if(t1i2 == t1sz2) {
      t1i2 = 0;
      t1i1++;
      if(t1i1 == t1sz1) {
        t1i1 = 0;
        t1i0++;
      }
    }
    t2i3 += r;
    if(t2i3 == t2sz3) {
      t2i3 = 0;
      t2i2++;
      if(t2i2 == t2sz2) {
        t2i2 = 0;
        t2i1++;
        if(t2i1 == t2sz1) {
          t2i1 = 0;
          t2i0++;
        }
      }
    }
    t3i2 += r;
    if(t3i2 == t3sz2) {
      t3i2 = 0;
      t3i1++;
      if(t3i1 == t3sz1) {
        t3i1 = 0;
        t3i0++;
      }
    }
  }
}

static void THTensor_(apply_3_4_4)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  long t1sz2 = t1->size[2];
  long t1st2 = t1->stride[2];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  long t2sz2 = t2->size[2];
  long t2st2 = t2->stride[2];
  long t2sz3 = t2->size[3];
  long t2st3 = t2->stride[3];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  long t3sz2 = t3->size[2];
  long t3st2 = t3->stride[2];
  long t3sz3 = t3->size[3];
  long t3st3 = t3->stride[3];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t1i2 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t2i2 = 0;
  long t2i3 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  long t3i2 = 0;
  long t3i3 = 0;
  while(t1i0 < t1sz0 && t2i0 < t2sz0 && t3i0 < t3sz0) {
    long rr = (t1sz2-t1i2 < t2sz3-t2i3 ? t1sz2-t1i2 : t2sz3-t2i3);
    long r = (rr < t3sz3-t3i3 ? rr : t3sz3-t3i3);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1 + t1i2*t1st2, t1st2, t2data + t2i0*t2st0 + t2i1*t2st1 + t2i2*t2st2 + t2i3*t2st3, t2st3, t3data + t3i0*t3st0 + t3i1*t3st1 + t3i2*t3st2 + t3i3*t3st3, t3st3, data);
    t1i2 += r;
    if(t1i2 == t1sz2) {
      t1i2 = 0;
      t1i1++;
      if(t1i1 == t1sz1) {
        t1i1 = 0;
        t1i0++;
      }
    }
    t2i3 += r;
    if(t2i3 == t2sz3) {
      t2i3 = 0;
      t2i2++;
      if(t2i2 == t2sz2) {
        t2i2 = 0;
        t2i1++;
        if(t2i1 == t2sz1) {
          t2i1 = 0;
          t2i0++;
        }
      }
    }
    t3i3 += r;
    if(t3i3 == t3sz3) {
      t3i3 = 0;
      t3i2++;
      if(t3i2 == t3sz2) {
        t3i2 = 0;
        t3i1++;
        if(t3i1 == t3sz1) {
          t3i1 = 0;
          t3i0++;
        }
      }
    }
  }
}

static void THTensor_(apply_3_4_5)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  long t1sz2 = t1->size[2];
  long t1st2 = t1->stride[2];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  long t2sz2 = t2->size[2];
  long t2st2 = t2->stride[2];
  long t2sz3 = t2->size[3];
  long t2st3 = t2->stride[3];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  long t3sz2 = t3->size[2];
  long t3st2 = t3->stride[2];
  long t3sz3 = t3->size[3];
  long t3st3 = t3->stride[3];
  long t3sz4 = t3->size[4];
  long t3st4 = t3->stride[4];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t1i2 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t2i2 = 0;
  long t2i3 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  long t3i2 = 0;
  long t3i3 = 0;
  long t3i4 = 0;
  while(t1i0 < t1sz0 && t2i0 < t2sz0 && t3i0 < t3sz0) {
    long rr = (t1sz2-t1i2 < t2sz3-t2i3 ? t1sz2-t1i2 : t2sz3-t2i3);
    long r = (rr < t3sz4-t3i4 ? rr : t3sz4-t3i4);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1 + t1i2*t1st2, t1st2, t2data + t2i0*t2st0 + t2i1*t2st1 + t2i2*t2st2 + t2i3*t2st3, t2st3, t3data + t3i0*t3st0 + t3i1*t3st1 + t3i2*t3st2 + t3i3*t3st3 + t3i4*t3st4, t3st4, data);
    t1i2 += r;
    if(t1i2 == t1sz2) {
      t1i2 = 0;
      t1i1++;
      if(t1i1 == t1sz1) {
        t1i1 = 0;
        t1i0++;
      }
    }
    t2i3 += r;
    if(t2i3 == t2sz3) {
      t2i3 = 0;
      t2i2++;
      if(t2i2 == t2sz2) {
        t2i2 = 0;
        t2i1++;
        if(t2i1 == t2sz1) {
          t2i1 = 0;
          t2i0++;
        }
      }
    }
    t3i4 += r;
    if(t3i4 == t3sz4) {
      t3i4 = 0;
      t3i3++;
      if(t3i3 == t3sz3) {
        t3i3 = 0;
        t3i2++;
        if(t3i2 == t3sz2) {
          t3i2 = 0;
          t3i1++;
          if(t3i1 == t3sz1) {
            t3i1 = 0;
            t3i0++;
          }
        }
      }
    }
  }
}

static void THTensor_(apply_3_5_1)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  long t1sz2 = t1->size[2];
  long t1st2 = t1->stride[2];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  long t2sz2 = t2->size[2];
  long t2st2 = t2->stride[2];
  long t2sz3 = t2->size[3];
  long t2st3 = t2->stride[3];
  long t2sz4 = t2->size[4];
  long t2st4 = t2->stride[4];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t1i2 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t2i2 = 0;
  long t2i3 = 0;
  long t2i4 = 0;
  long t3i0 = 0;
  while(t1i0 < t1sz0 && t2i0 < t2sz0) {
    long rr = (t1sz2-t1i2 < t2sz4-t2i4 ? t1sz2-t1i2 : t2sz4-t2i4);
    long r = (rr < t3sz0-t3i0 ? rr : t3sz0-t3i0);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1 + t1i2*t1st2, t1st2, t2data + t2i0*t2st0 + t2i1*t2st1 + t2i2*t2st2 + t2i3*t2st3 + t2i4*t2st4, t2st4, t3data + t3i0*t3st0, t3st0, data);
    t1i2 += r;
    if(t1i2 == t1sz2) {
      t1i2 = 0;
      t1i1++;
      if(t1i1 == t1sz1) {
        t1i1 = 0;
        t1i0++;
      }
    }
    t2i4 += r;
    if(t2i4 == t2sz4) {
      t2i4 = 0;
      t2i3++;
      if(t2i3 == t2sz3) {
        t2i3 = 0;
        t2i2++;
        if(t2i2 == t2sz2) {
          t2i2 = 0;
          t2i1++;
          if(t2i1 == t2sz1) {
            t2i1 = 0;
            t2i0++;
          }
        }
      }
    }
    t3i0 += r;
  }
}

static void THTensor_(apply_3_5_2)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  long t1sz2 = t1->size[2];
  long t1st2 = t1->stride[2];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  long t2sz2 = t2->size[2];
  long t2st2 = t2->stride[2];
  long t2sz3 = t2->size[3];
  long t2st3 = t2->stride[3];
  long t2sz4 = t2->size[4];
  long t2st4 = t2->stride[4];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t1i2 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t2i2 = 0;
  long t2i3 = 0;
  long t2i4 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  while(t1i0 < t1sz0 && t2i0 < t2sz0 && t3i0 < t3sz0) {
    long rr = (t1sz2-t1i2 < t2sz4-t2i4 ? t1sz2-t1i2 : t2sz4-t2i4);
    long r = (rr < t3sz1-t3i1 ? rr : t3sz1-t3i1);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1 + t1i2*t1st2, t1st2, t2data + t2i0*t2st0 + t2i1*t2st1 + t2i2*t2st2 + t2i3*t2st3 + t2i4*t2st4, t2st4, t3data + t3i0*t3st0 + t3i1*t3st1, t3st1, data);
    t1i2 += r;
    if(t1i2 == t1sz2) {
      t1i2 = 0;
      t1i1++;
      if(t1i1 == t1sz1) {
        t1i1 = 0;
        t1i0++;
      }
    }
    t2i4 += r;
    if(t2i4 == t2sz4) {
      t2i4 = 0;
      t2i3++;
      if(t2i3 == t2sz3) {
        t2i3 = 0;
        t2i2++;
        if(t2i2 == t2sz2) {
          t2i2 = 0;
          t2i1++;
          if(t2i1 == t2sz1) {
            t2i1 = 0;
            t2i0++;
          }
        }
      }
    }
    t3i1 += r;
    if(t3i1 == t3sz1) {
      t3i1 = 0;
      t3i0++;
    }
  }
}

static void THTensor_(apply_3_5_3)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  long t1sz2 = t1->size[2];
  long t1st2 = t1->stride[2];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  long t2sz2 = t2->size[2];
  long t2st2 = t2->stride[2];
  long t2sz3 = t2->size[3];
  long t2st3 = t2->stride[3];
  long t2sz4 = t2->size[4];
  long t2st4 = t2->stride[4];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  long t3sz2 = t3->size[2];
  long t3st2 = t3->stride[2];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t1i2 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t2i2 = 0;
  long t2i3 = 0;
  long t2i4 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  long t3i2 = 0;
  while(t1i0 < t1sz0 && t2i0 < t2sz0 && t3i0 < t3sz0) {
    long rr = (t1sz2-t1i2 < t2sz4-t2i4 ? t1sz2-t1i2 : t2sz4-t2i4);
    long r = (rr < t3sz2-t3i2 ? rr : t3sz2-t3i2);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1 + t1i2*t1st2, t1st2, t2data + t2i0*t2st0 + t2i1*t2st1 + t2i2*t2st2 + t2i3*t2st3 + t2i4*t2st4, t2st4, t3data + t3i0*t3st0 + t3i1*t3st1 + t3i2*t3st2, t3st2, data);
    t1i2 += r;
    if(t1i2 == t1sz2) {
      t1i2 = 0;
      t1i1++;
      if(t1i1 == t1sz1) {
        t1i1 = 0;
        t1i0++;
      }
    }
    t2i4 += r;
    if(t2i4 == t2sz4) {
      t2i4 = 0;
      t2i3++;
      if(t2i3 == t2sz3) {
        t2i3 = 0;
        t2i2++;
        if(t2i2 == t2sz2) {
          t2i2 = 0;
          t2i1++;
          if(t2i1 == t2sz1) {
            t2i1 = 0;
            t2i0++;
          }
        }
      }
    }
    t3i2 += r;
    if(t3i2 == t3sz2) {
      t3i2 = 0;
      t3i1++;
      if(t3i1 == t3sz1) {
        t3i1 = 0;
        t3i0++;
      }
    }
  }
}

static void THTensor_(apply_3_5_4)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  long t1sz2 = t1->size[2];
  long t1st2 = t1->stride[2];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  long t2sz2 = t2->size[2];
  long t2st2 = t2->stride[2];
  long t2sz3 = t2->size[3];
  long t2st3 = t2->stride[3];
  long t2sz4 = t2->size[4];
  long t2st4 = t2->stride[4];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  long t3sz2 = t3->size[2];
  long t3st2 = t3->stride[2];
  long t3sz3 = t3->size[3];
  long t3st3 = t3->stride[3];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t1i2 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t2i2 = 0;
  long t2i3 = 0;
  long t2i4 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  long t3i2 = 0;
  long t3i3 = 0;
  while(t1i0 < t1sz0 && t2i0 < t2sz0 && t3i0 < t3sz0) {
    long rr = (t1sz2-t1i2 < t2sz4-t2i4 ? t1sz2-t1i2 : t2sz4-t2i4);
    long r = (rr < t3sz3-t3i3 ? rr : t3sz3-t3i3);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1 + t1i2*t1st2, t1st2, t2data + t2i0*t2st0 + t2i1*t2st1 + t2i2*t2st2 + t2i3*t2st3 + t2i4*t2st4, t2st4, t3data + t3i0*t3st0 + t3i1*t3st1 + t3i2*t3st2 + t3i3*t3st3, t3st3, data);
    t1i2 += r;
    if(t1i2 == t1sz2) {
      t1i2 = 0;
      t1i1++;
      if(t1i1 == t1sz1) {
        t1i1 = 0;
        t1i0++;
      }
    }
    t2i4 += r;
    if(t2i4 == t2sz4) {
      t2i4 = 0;
      t2i3++;
      if(t2i3 == t2sz3) {
        t2i3 = 0;
        t2i2++;
        if(t2i2 == t2sz2) {
          t2i2 = 0;
          t2i1++;
          if(t2i1 == t2sz1) {
            t2i1 = 0;
            t2i0++;
          }
        }
      }
    }
    t3i3 += r;
    if(t3i3 == t3sz3) {
      t3i3 = 0;
      t3i2++;
      if(t3i2 == t3sz2) {
        t3i2 = 0;
        t3i1++;
        if(t3i1 == t3sz1) {
          t3i1 = 0;
          t3i0++;
        }
      }
    }
  }
}

static void THTensor_(apply_3_5_5)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  long t1sz2 = t1->size[2];
  long t1st2 = t1->stride[2];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  long t2sz2 = t2->size[2];
  long t2st2 = t2->stride[2];
  long t2sz3 = t2->size[3];
  long t2st3 = t2->stride[3];
  long t2sz4 = t2->size[4];
  long t2st4 = t2->stride[4];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  long t3sz2 = t3->size[2];
  long t3st2 = t3->stride[2];
  long t3sz3 = t3->size[3];
  long t3st3 = t3->stride[3];
  long t3sz4 = t3->size[4];
  long t3st4 = t3->stride[4];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t1i2 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t2i2 = 0;
  long t2i3 = 0;
  long t2i4 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  long t3i2 = 0;
  long t3i3 = 0;
  long t3i4 = 0;
  while(t1i0 < t1sz0 && t2i0 < t2sz0 && t3i0 < t3sz0) {
    long rr = (t1sz2-t1i2 < t2sz4-t2i4 ? t1sz2-t1i2 : t2sz4-t2i4);
    long r = (rr < t3sz4-t3i4 ? rr : t3sz4-t3i4);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1 + t1i2*t1st2, t1st2, t2data + t2i0*t2st0 + t2i1*t2st1 + t2i2*t2st2 + t2i3*t2st3 + t2i4*t2st4, t2st4, t3data + t3i0*t3st0 + t3i1*t3st1 + t3i2*t3st2 + t3i3*t3st3 + t3i4*t3st4, t3st4, data);
    t1i2 += r;
    if(t1i2 == t1sz2) {
      t1i2 = 0;
      t1i1++;
      if(t1i1 == t1sz1) {
        t1i1 = 0;
        t1i0++;
      }
    }
    t2i4 += r;
    if(t2i4 == t2sz4) {
      t2i4 = 0;
      t2i3++;
      if(t2i3 == t2sz3) {
        t2i3 = 0;
        t2i2++;
        if(t2i2 == t2sz2) {
          t2i2 = 0;
          t2i1++;
          if(t2i1 == t2sz1) {
            t2i1 = 0;
            t2i0++;
          }
        }
      }
    }
    t3i4 += r;
    if(t3i4 == t3sz4) {
      t3i4 = 0;
      t3i3++;
      if(t3i3 == t3sz3) {
        t3i3 = 0;
        t3i2++;
        if(t3i2 == t3sz2) {
          t3i2 = 0;
          t3i1++;
          if(t3i1 == t3sz1) {
            t3i1 = 0;
            t3i0++;
          }
        }
      }
    }
  }
}

static void THTensor_(apply_4_1_1)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  long t1sz2 = t1->size[2];
  long t1st2 = t1->stride[2];
  long t1sz3 = t1->size[3];
  long t1st3 = t1->stride[3];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t1i2 = 0;
  long t1i3 = 0;
  long t2i0 = 0;
  long t3i0 = 0;
  while(t1i0 < t1sz0) {
    long rr = (t1sz3-t1i3 < t2sz0-t2i0 ? t1sz3-t1i3 : t2sz0-t2i0);
    long r = (rr < t3sz0-t3i0 ? rr : t3sz0-t3i0);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1 + t1i2*t1st2 + t1i3*t1st3, t1st3, t2data + t2i0*t2st0, t2st0, t3data + t3i0*t3st0, t3st0, data);
    t1i3 += r;
    if(t1i3 == t1sz3) {
      t1i3 = 0;
      t1i2++;
      if(t1i2 == t1sz2) {
        t1i2 = 0;
        t1i1++;
        if(t1i1 == t1sz1) {
          t1i1 = 0;
          t1i0++;
        }
      }
    }
    t2i0 += r;
    t3i0 += r;
  }
}

static void THTensor_(apply_4_1_2)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  long t1sz2 = t1->size[2];
  long t1st2 = t1->stride[2];
  long t1sz3 = t1->size[3];
  long t1st3 = t1->stride[3];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t1i2 = 0;
  long t1i3 = 0;
  long t2i0 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  while(t1i0 < t1sz0 && t3i0 < t3sz0) {
    long rr = (t1sz3-t1i3 < t2sz0-t2i0 ? t1sz3-t1i3 : t2sz0-t2i0);
    long r = (rr < t3sz1-t3i1 ? rr : t3sz1-t3i1);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1 + t1i2*t1st2 + t1i3*t1st3, t1st3, t2data + t2i0*t2st0, t2st0, t3data + t3i0*t3st0 + t3i1*t3st1, t3st1, data);
    t1i3 += r;
    if(t1i3 == t1sz3) {
      t1i3 = 0;
      t1i2++;
      if(t1i2 == t1sz2) {
        t1i2 = 0;
        t1i1++;
        if(t1i1 == t1sz1) {
          t1i1 = 0;
          t1i0++;
        }
      }
    }
    t2i0 += r;
    t3i1 += r;
    if(t3i1 == t3sz1) {
      t3i1 = 0;
      t3i0++;
    }
  }
}

static void THTensor_(apply_4_1_3)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  long t1sz2 = t1->size[2];
  long t1st2 = t1->stride[2];
  long t1sz3 = t1->size[3];
  long t1st3 = t1->stride[3];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  long t3sz2 = t3->size[2];
  long t3st2 = t3->stride[2];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t1i2 = 0;
  long t1i3 = 0;
  long t2i0 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  long t3i2 = 0;
  while(t1i0 < t1sz0 && t3i0 < t3sz0) {
    long rr = (t1sz3-t1i3 < t2sz0-t2i0 ? t1sz3-t1i3 : t2sz0-t2i0);
    long r = (rr < t3sz2-t3i2 ? rr : t3sz2-t3i2);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1 + t1i2*t1st2 + t1i3*t1st3, t1st3, t2data + t2i0*t2st0, t2st0, t3data + t3i0*t3st0 + t3i1*t3st1 + t3i2*t3st2, t3st2, data);
    t1i3 += r;
    if(t1i3 == t1sz3) {
      t1i3 = 0;
      t1i2++;
      if(t1i2 == t1sz2) {
        t1i2 = 0;
        t1i1++;
        if(t1i1 == t1sz1) {
          t1i1 = 0;
          t1i0++;
        }
      }
    }
    t2i0 += r;
    t3i2 += r;
    if(t3i2 == t3sz2) {
      t3i2 = 0;
      t3i1++;
      if(t3i1 == t3sz1) {
        t3i1 = 0;
        t3i0++;
      }
    }
  }
}

static void THTensor_(apply_4_1_4)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  long t1sz2 = t1->size[2];
  long t1st2 = t1->stride[2];
  long t1sz3 = t1->size[3];
  long t1st3 = t1->stride[3];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  long t3sz2 = t3->size[2];
  long t3st2 = t3->stride[2];
  long t3sz3 = t3->size[3];
  long t3st3 = t3->stride[3];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t1i2 = 0;
  long t1i3 = 0;
  long t2i0 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  long t3i2 = 0;
  long t3i3 = 0;
  while(t1i0 < t1sz0 && t3i0 < t3sz0) {
    long rr = (t1sz3-t1i3 < t2sz0-t2i0 ? t1sz3-t1i3 : t2sz0-t2i0);
    long r = (rr < t3sz3-t3i3 ? rr : t3sz3-t3i3);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1 + t1i2*t1st2 + t1i3*t1st3, t1st3, t2data + t2i0*t2st0, t2st0, t3data + t3i0*t3st0 + t3i1*t3st1 + t3i2*t3st2 + t3i3*t3st3, t3st3, data);
    t1i3 += r;
    if(t1i3 == t1sz3) {
      t1i3 = 0;
      t1i2++;
      if(t1i2 == t1sz2) {
        t1i2 = 0;
        t1i1++;
        if(t1i1 == t1sz1) {
          t1i1 = 0;
          t1i0++;
        }
      }
    }
    t2i0 += r;
    t3i3 += r;
    if(t3i3 == t3sz3) {
      t3i3 = 0;
      t3i2++;
      if(t3i2 == t3sz2) {
        t3i2 = 0;
        t3i1++;
        if(t3i1 == t3sz1) {
          t3i1 = 0;
          t3i0++;
        }
      }
    }
  }
}

static void THTensor_(apply_4_1_5)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  long t1sz2 = t1->size[2];
  long t1st2 = t1->stride[2];
  long t1sz3 = t1->size[3];
  long t1st3 = t1->stride[3];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  long t3sz2 = t3->size[2];
  long t3st2 = t3->stride[2];
  long t3sz3 = t3->size[3];
  long t3st3 = t3->stride[3];
  long t3sz4 = t3->size[4];
  long t3st4 = t3->stride[4];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t1i2 = 0;
  long t1i3 = 0;
  long t2i0 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  long t3i2 = 0;
  long t3i3 = 0;
  long t3i4 = 0;
  while(t1i0 < t1sz0 && t3i0 < t3sz0) {
    long rr = (t1sz3-t1i3 < t2sz0-t2i0 ? t1sz3-t1i3 : t2sz0-t2i0);
    long r = (rr < t3sz4-t3i4 ? rr : t3sz4-t3i4);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1 + t1i2*t1st2 + t1i3*t1st3, t1st3, t2data + t2i0*t2st0, t2st0, t3data + t3i0*t3st0 + t3i1*t3st1 + t3i2*t3st2 + t3i3*t3st3 + t3i4*t3st4, t3st4, data);
    t1i3 += r;
    if(t1i3 == t1sz3) {
      t1i3 = 0;
      t1i2++;
      if(t1i2 == t1sz2) {
        t1i2 = 0;
        t1i1++;
        if(t1i1 == t1sz1) {
          t1i1 = 0;
          t1i0++;
        }
      }
    }
    t2i0 += r;
    t3i4 += r;
    if(t3i4 == t3sz4) {
      t3i4 = 0;
      t3i3++;
      if(t3i3 == t3sz3) {
        t3i3 = 0;
        t3i2++;
        if(t3i2 == t3sz2) {
          t3i2 = 0;
          t3i1++;
          if(t3i1 == t3sz1) {
            t3i1 = 0;
            t3i0++;
          }
        }
      }
    }
  }
}

static void THTensor_(apply_4_2_1)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  long t1sz2 = t1->size[2];
  long t1st2 = t1->stride[2];
  long t1sz3 = t1->size[3];
  long t1st3 = t1->stride[3];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t1i2 = 0;
  long t1i3 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t3i0 = 0;
  while(t1i0 < t1sz0 && t2i0 < t2sz0) {
    long rr = (t1sz3-t1i3 < t2sz1-t2i1 ? t1sz3-t1i3 : t2sz1-t2i1);
    long r = (rr < t3sz0-t3i0 ? rr : t3sz0-t3i0);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1 + t1i2*t1st2 + t1i3*t1st3, t1st3, t2data + t2i0*t2st0 + t2i1*t2st1, t2st1, t3data + t3i0*t3st0, t3st0, data);
    t1i3 += r;
    if(t1i3 == t1sz3) {
      t1i3 = 0;
      t1i2++;
      if(t1i2 == t1sz2) {
        t1i2 = 0;
        t1i1++;
        if(t1i1 == t1sz1) {
          t1i1 = 0;
          t1i0++;
        }
      }
    }
    t2i1 += r;
    if(t2i1 == t2sz1) {
      t2i1 = 0;
      t2i0++;
    }
    t3i0 += r;
  }
}

static void THTensor_(apply_4_2_2)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  long t1sz2 = t1->size[2];
  long t1st2 = t1->stride[2];
  long t1sz3 = t1->size[3];
  long t1st3 = t1->stride[3];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t1i2 = 0;
  long t1i3 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  while(t1i0 < t1sz0 && t2i0 < t2sz0 && t3i0 < t3sz0) {
    long rr = (t1sz3-t1i3 < t2sz1-t2i1 ? t1sz3-t1i3 : t2sz1-t2i1);
    long r = (rr < t3sz1-t3i1 ? rr : t3sz1-t3i1);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1 + t1i2*t1st2 + t1i3*t1st3, t1st3, t2data + t2i0*t2st0 + t2i1*t2st1, t2st1, t3data + t3i0*t3st0 + t3i1*t3st1, t3st1, data);
    t1i3 += r;
    if(t1i3 == t1sz3) {
      t1i3 = 0;
      t1i2++;
      if(t1i2 == t1sz2) {
        t1i2 = 0;
        t1i1++;
        if(t1i1 == t1sz1) {
          t1i1 = 0;
          t1i0++;
        }
      }
    }
    t2i1 += r;
    if(t2i1 == t2sz1) {
      t2i1 = 0;
      t2i0++;
    }
    t3i1 += r;
    if(t3i1 == t3sz1) {
      t3i1 = 0;
      t3i0++;
    }
  }
}

static void THTensor_(apply_4_2_3)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  long t1sz2 = t1->size[2];
  long t1st2 = t1->stride[2];
  long t1sz3 = t1->size[3];
  long t1st3 = t1->stride[3];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  long t3sz2 = t3->size[2];
  long t3st2 = t3->stride[2];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t1i2 = 0;
  long t1i3 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  long t3i2 = 0;
  while(t1i0 < t1sz0 && t2i0 < t2sz0 && t3i0 < t3sz0) {
    long rr = (t1sz3-t1i3 < t2sz1-t2i1 ? t1sz3-t1i3 : t2sz1-t2i1);
    long r = (rr < t3sz2-t3i2 ? rr : t3sz2-t3i2);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1 + t1i2*t1st2 + t1i3*t1st3, t1st3, t2data + t2i0*t2st0 + t2i1*t2st1, t2st1, t3data + t3i0*t3st0 + t3i1*t3st1 + t3i2*t3st2, t3st2, data);
    t1i3 += r;
    if(t1i3 == t1sz3) {
      t1i3 = 0;
      t1i2++;
      if(t1i2 == t1sz2) {
        t1i2 = 0;
        t1i1++;
        if(t1i1 == t1sz1) {
          t1i1 = 0;
          t1i0++;
        }
      }
    }
    t2i1 += r;
    if(t2i1 == t2sz1) {
      t2i1 = 0;
      t2i0++;
    }
    t3i2 += r;
    if(t3i2 == t3sz2) {
      t3i2 = 0;
      t3i1++;
      if(t3i1 == t3sz1) {
        t3i1 = 0;
        t3i0++;
      }
    }
  }
}

static void THTensor_(apply_4_2_4)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  long t1sz2 = t1->size[2];
  long t1st2 = t1->stride[2];
  long t1sz3 = t1->size[3];
  long t1st3 = t1->stride[3];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  long t3sz2 = t3->size[2];
  long t3st2 = t3->stride[2];
  long t3sz3 = t3->size[3];
  long t3st3 = t3->stride[3];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t1i2 = 0;
  long t1i3 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  long t3i2 = 0;
  long t3i3 = 0;
  while(t1i0 < t1sz0 && t2i0 < t2sz0 && t3i0 < t3sz0) {
    long rr = (t1sz3-t1i3 < t2sz1-t2i1 ? t1sz3-t1i3 : t2sz1-t2i1);
    long r = (rr < t3sz3-t3i3 ? rr : t3sz3-t3i3);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1 + t1i2*t1st2 + t1i3*t1st3, t1st3, t2data + t2i0*t2st0 + t2i1*t2st1, t2st1, t3data + t3i0*t3st0 + t3i1*t3st1 + t3i2*t3st2 + t3i3*t3st3, t3st3, data);
    t1i3 += r;
    if(t1i3 == t1sz3) {
      t1i3 = 0;
      t1i2++;
      if(t1i2 == t1sz2) {
        t1i2 = 0;
        t1i1++;
        if(t1i1 == t1sz1) {
          t1i1 = 0;
          t1i0++;
        }
      }
    }
    t2i1 += r;
    if(t2i1 == t2sz1) {
      t2i1 = 0;
      t2i0++;
    }
    t3i3 += r;
    if(t3i3 == t3sz3) {
      t3i3 = 0;
      t3i2++;
      if(t3i2 == t3sz2) {
        t3i2 = 0;
        t3i1++;
        if(t3i1 == t3sz1) {
          t3i1 = 0;
          t3i0++;
        }
      }
    }
  }
}

static void THTensor_(apply_4_2_5)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  long t1sz2 = t1->size[2];
  long t1st2 = t1->stride[2];
  long t1sz3 = t1->size[3];
  long t1st3 = t1->stride[3];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  long t3sz2 = t3->size[2];
  long t3st2 = t3->stride[2];
  long t3sz3 = t3->size[3];
  long t3st3 = t3->stride[3];
  long t3sz4 = t3->size[4];
  long t3st4 = t3->stride[4];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t1i2 = 0;
  long t1i3 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  long t3i2 = 0;
  long t3i3 = 0;
  long t3i4 = 0;
  while(t1i0 < t1sz0 && t2i0 < t2sz0 && t3i0 < t3sz0) {
    long rr = (t1sz3-t1i3 < t2sz1-t2i1 ? t1sz3-t1i3 : t2sz1-t2i1);
    long r = (rr < t3sz4-t3i4 ? rr : t3sz4-t3i4);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1 + t1i2*t1st2 + t1i3*t1st3, t1st3, t2data + t2i0*t2st0 + t2i1*t2st1, t2st1, t3data + t3i0*t3st0 + t3i1*t3st1 + t3i2*t3st2 + t3i3*t3st3 + t3i4*t3st4, t3st4, data);
    t1i3 += r;
    if(t1i3 == t1sz3) {
      t1i3 = 0;
      t1i2++;
      if(t1i2 == t1sz2) {
        t1i2 = 0;
        t1i1++;
        if(t1i1 == t1sz1) {
          t1i1 = 0;
          t1i0++;
        }
      }
    }
    t2i1 += r;
    if(t2i1 == t2sz1) {
      t2i1 = 0;
      t2i0++;
    }
    t3i4 += r;
    if(t3i4 == t3sz4) {
      t3i4 = 0;
      t3i3++;
      if(t3i3 == t3sz3) {
        t3i3 = 0;
        t3i2++;
        if(t3i2 == t3sz2) {
          t3i2 = 0;
          t3i1++;
          if(t3i1 == t3sz1) {
            t3i1 = 0;
            t3i0++;
          }
        }
      }
    }
  }
}

static void THTensor_(apply_4_3_1)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  long t1sz2 = t1->size[2];
  long t1st2 = t1->stride[2];
  long t1sz3 = t1->size[3];
  long t1st3 = t1->stride[3];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  long t2sz2 = t2->size[2];
  long t2st2 = t2->stride[2];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t1i2 = 0;
  long t1i3 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t2i2 = 0;
  long t3i0 = 0;
  while(t1i0 < t1sz0 && t2i0 < t2sz0) {
    long rr = (t1sz3-t1i3 < t2sz2-t2i2 ? t1sz3-t1i3 : t2sz2-t2i2);
    long r = (rr < t3sz0-t3i0 ? rr : t3sz0-t3i0);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1 + t1i2*t1st2 + t1i3*t1st3, t1st3, t2data + t2i0*t2st0 + t2i1*t2st1 + t2i2*t2st2, t2st2, t3data + t3i0*t3st0, t3st0, data);
    t1i3 += r;
    if(t1i3 == t1sz3) {
      t1i3 = 0;
      t1i2++;
      if(t1i2 == t1sz2) {
        t1i2 = 0;
        t1i1++;
        if(t1i1 == t1sz1) {
          t1i1 = 0;
          t1i0++;
        }
      }
    }
    t2i2 += r;
    if(t2i2 == t2sz2) {
      t2i2 = 0;
      t2i1++;
      if(t2i1 == t2sz1) {
        t2i1 = 0;
        t2i0++;
      }
    }
    t3i0 += r;
  }
}

static void THTensor_(apply_4_3_2)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  long t1sz2 = t1->size[2];
  long t1st2 = t1->stride[2];
  long t1sz3 = t1->size[3];
  long t1st3 = t1->stride[3];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  long t2sz2 = t2->size[2];
  long t2st2 = t2->stride[2];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t1i2 = 0;
  long t1i3 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t2i2 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  while(t1i0 < t1sz0 && t2i0 < t2sz0 && t3i0 < t3sz0) {
    long rr = (t1sz3-t1i3 < t2sz2-t2i2 ? t1sz3-t1i3 : t2sz2-t2i2);
    long r = (rr < t3sz1-t3i1 ? rr : t3sz1-t3i1);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1 + t1i2*t1st2 + t1i3*t1st3, t1st3, t2data + t2i0*t2st0 + t2i1*t2st1 + t2i2*t2st2, t2st2, t3data + t3i0*t3st0 + t3i1*t3st1, t3st1, data);
    t1i3 += r;
    if(t1i3 == t1sz3) {
      t1i3 = 0;
      t1i2++;
      if(t1i2 == t1sz2) {
        t1i2 = 0;
        t1i1++;
        if(t1i1 == t1sz1) {
          t1i1 = 0;
          t1i0++;
        }
      }
    }
    t2i2 += r;
    if(t2i2 == t2sz2) {
      t2i2 = 0;
      t2i1++;
      if(t2i1 == t2sz1) {
        t2i1 = 0;
        t2i0++;
      }
    }
    t3i1 += r;
    if(t3i1 == t3sz1) {
      t3i1 = 0;
      t3i0++;
    }
  }
}

static void THTensor_(apply_4_3_3)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  long t1sz2 = t1->size[2];
  long t1st2 = t1->stride[2];
  long t1sz3 = t1->size[3];
  long t1st3 = t1->stride[3];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  long t2sz2 = t2->size[2];
  long t2st2 = t2->stride[2];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  long t3sz2 = t3->size[2];
  long t3st2 = t3->stride[2];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t1i2 = 0;
  long t1i3 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t2i2 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  long t3i2 = 0;
  while(t1i0 < t1sz0 && t2i0 < t2sz0 && t3i0 < t3sz0) {
    long rr = (t1sz3-t1i3 < t2sz2-t2i2 ? t1sz3-t1i3 : t2sz2-t2i2);
    long r = (rr < t3sz2-t3i2 ? rr : t3sz2-t3i2);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1 + t1i2*t1st2 + t1i3*t1st3, t1st3, t2data + t2i0*t2st0 + t2i1*t2st1 + t2i2*t2st2, t2st2, t3data + t3i0*t3st0 + t3i1*t3st1 + t3i2*t3st2, t3st2, data);
    t1i3 += r;
    if(t1i3 == t1sz3) {
      t1i3 = 0;
      t1i2++;
      if(t1i2 == t1sz2) {
        t1i2 = 0;
        t1i1++;
        if(t1i1 == t1sz1) {
          t1i1 = 0;
          t1i0++;
        }
      }
    }
    t2i2 += r;
    if(t2i2 == t2sz2) {
      t2i2 = 0;
      t2i1++;
      if(t2i1 == t2sz1) {
        t2i1 = 0;
        t2i0++;
      }
    }
    t3i2 += r;
    if(t3i2 == t3sz2) {
      t3i2 = 0;
      t3i1++;
      if(t3i1 == t3sz1) {
        t3i1 = 0;
        t3i0++;
      }
    }
  }
}

static void THTensor_(apply_4_3_4)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  long t1sz2 = t1->size[2];
  long t1st2 = t1->stride[2];
  long t1sz3 = t1->size[3];
  long t1st3 = t1->stride[3];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  long t2sz2 = t2->size[2];
  long t2st2 = t2->stride[2];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  long t3sz2 = t3->size[2];
  long t3st2 = t3->stride[2];
  long t3sz3 = t3->size[3];
  long t3st3 = t3->stride[3];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t1i2 = 0;
  long t1i3 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t2i2 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  long t3i2 = 0;
  long t3i3 = 0;
  while(t1i0 < t1sz0 && t2i0 < t2sz0 && t3i0 < t3sz0) {
    long rr = (t1sz3-t1i3 < t2sz2-t2i2 ? t1sz3-t1i3 : t2sz2-t2i2);
    long r = (rr < t3sz3-t3i3 ? rr : t3sz3-t3i3);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1 + t1i2*t1st2 + t1i3*t1st3, t1st3, t2data + t2i0*t2st0 + t2i1*t2st1 + t2i2*t2st2, t2st2, t3data + t3i0*t3st0 + t3i1*t3st1 + t3i2*t3st2 + t3i3*t3st3, t3st3, data);
    t1i3 += r;
    if(t1i3 == t1sz3) {
      t1i3 = 0;
      t1i2++;
      if(t1i2 == t1sz2) {
        t1i2 = 0;
        t1i1++;
        if(t1i1 == t1sz1) {
          t1i1 = 0;
          t1i0++;
        }
      }
    }
    t2i2 += r;
    if(t2i2 == t2sz2) {
      t2i2 = 0;
      t2i1++;
      if(t2i1 == t2sz1) {
        t2i1 = 0;
        t2i0++;
      }
    }
    t3i3 += r;
    if(t3i3 == t3sz3) {
      t3i3 = 0;
      t3i2++;
      if(t3i2 == t3sz2) {
        t3i2 = 0;
        t3i1++;
        if(t3i1 == t3sz1) {
          t3i1 = 0;
          t3i0++;
        }
      }
    }
  }
}

static void THTensor_(apply_4_3_5)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  long t1sz2 = t1->size[2];
  long t1st2 = t1->stride[2];
  long t1sz3 = t1->size[3];
  long t1st3 = t1->stride[3];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  long t2sz2 = t2->size[2];
  long t2st2 = t2->stride[2];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  long t3sz2 = t3->size[2];
  long t3st2 = t3->stride[2];
  long t3sz3 = t3->size[3];
  long t3st3 = t3->stride[3];
  long t3sz4 = t3->size[4];
  long t3st4 = t3->stride[4];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t1i2 = 0;
  long t1i3 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t2i2 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  long t3i2 = 0;
  long t3i3 = 0;
  long t3i4 = 0;
  while(t1i0 < t1sz0 && t2i0 < t2sz0 && t3i0 < t3sz0) {
    long rr = (t1sz3-t1i3 < t2sz2-t2i2 ? t1sz3-t1i3 : t2sz2-t2i2);
    long r = (rr < t3sz4-t3i4 ? rr : t3sz4-t3i4);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1 + t1i2*t1st2 + t1i3*t1st3, t1st3, t2data + t2i0*t2st0 + t2i1*t2st1 + t2i2*t2st2, t2st2, t3data + t3i0*t3st0 + t3i1*t3st1 + t3i2*t3st2 + t3i3*t3st3 + t3i4*t3st4, t3st4, data);
    t1i3 += r;
    if(t1i3 == t1sz3) {
      t1i3 = 0;
      t1i2++;
      if(t1i2 == t1sz2) {
        t1i2 = 0;
        t1i1++;
        if(t1i1 == t1sz1) {
          t1i1 = 0;
          t1i0++;
        }
      }
    }
    t2i2 += r;
    if(t2i2 == t2sz2) {
      t2i2 = 0;
      t2i1++;
      if(t2i1 == t2sz1) {
        t2i1 = 0;
        t2i0++;
      }
    }
    t3i4 += r;
    if(t3i4 == t3sz4) {
      t3i4 = 0;
      t3i3++;
      if(t3i3 == t3sz3) {
        t3i3 = 0;
        t3i2++;
        if(t3i2 == t3sz2) {
          t3i2 = 0;
          t3i1++;
          if(t3i1 == t3sz1) {
            t3i1 = 0;
            t3i0++;
          }
        }
      }
    }
  }
}

static void THTensor_(apply_4_4_1)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  long t1sz2 = t1->size[2];
  long t1st2 = t1->stride[2];
  long t1sz3 = t1->size[3];
  long t1st3 = t1->stride[3];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  long t2sz2 = t2->size[2];
  long t2st2 = t2->stride[2];
  long t2sz3 = t2->size[3];
  long t2st3 = t2->stride[3];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t1i2 = 0;
  long t1i3 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t2i2 = 0;
  long t2i3 = 0;
  long t3i0 = 0;
  while(t1i0 < t1sz0 && t2i0 < t2sz0) {
    long rr = (t1sz3-t1i3 < t2sz3-t2i3 ? t1sz3-t1i3 : t2sz3-t2i3);
    long r = (rr < t3sz0-t3i0 ? rr : t3sz0-t3i0);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1 + t1i2*t1st2 + t1i3*t1st3, t1st3, t2data + t2i0*t2st0 + t2i1*t2st1 + t2i2*t2st2 + t2i3*t2st3, t2st3, t3data + t3i0*t3st0, t3st0, data);
    t1i3 += r;
    if(t1i3 == t1sz3) {
      t1i3 = 0;
      t1i2++;
      if(t1i2 == t1sz2) {
        t1i2 = 0;
        t1i1++;
        if(t1i1 == t1sz1) {
          t1i1 = 0;
          t1i0++;
        }
      }
    }
    t2i3 += r;
    if(t2i3 == t2sz3) {
      t2i3 = 0;
      t2i2++;
      if(t2i2 == t2sz2) {
        t2i2 = 0;
        t2i1++;
        if(t2i1 == t2sz1) {
          t2i1 = 0;
          t2i0++;
        }
      }
    }
    t3i0 += r;
  }
}

static void THTensor_(apply_4_4_2)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  long t1sz2 = t1->size[2];
  long t1st2 = t1->stride[2];
  long t1sz3 = t1->size[3];
  long t1st3 = t1->stride[3];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  long t2sz2 = t2->size[2];
  long t2st2 = t2->stride[2];
  long t2sz3 = t2->size[3];
  long t2st3 = t2->stride[3];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t1i2 = 0;
  long t1i3 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t2i2 = 0;
  long t2i3 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  while(t1i0 < t1sz0 && t2i0 < t2sz0 && t3i0 < t3sz0) {
    long rr = (t1sz3-t1i3 < t2sz3-t2i3 ? t1sz3-t1i3 : t2sz3-t2i3);
    long r = (rr < t3sz1-t3i1 ? rr : t3sz1-t3i1);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1 + t1i2*t1st2 + t1i3*t1st3, t1st3, t2data + t2i0*t2st0 + t2i1*t2st1 + t2i2*t2st2 + t2i3*t2st3, t2st3, t3data + t3i0*t3st0 + t3i1*t3st1, t3st1, data);
    t1i3 += r;
    if(t1i3 == t1sz3) {
      t1i3 = 0;
      t1i2++;
      if(t1i2 == t1sz2) {
        t1i2 = 0;
        t1i1++;
        if(t1i1 == t1sz1) {
          t1i1 = 0;
          t1i0++;
        }
      }
    }
    t2i3 += r;
    if(t2i3 == t2sz3) {
      t2i3 = 0;
      t2i2++;
      if(t2i2 == t2sz2) {
        t2i2 = 0;
        t2i1++;
        if(t2i1 == t2sz1) {
          t2i1 = 0;
          t2i0++;
        }
      }
    }
    t3i1 += r;
    if(t3i1 == t3sz1) {
      t3i1 = 0;
      t3i0++;
    }
  }
}

static void THTensor_(apply_4_4_3)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  long t1sz2 = t1->size[2];
  long t1st2 = t1->stride[2];
  long t1sz3 = t1->size[3];
  long t1st3 = t1->stride[3];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  long t2sz2 = t2->size[2];
  long t2st2 = t2->stride[2];
  long t2sz3 = t2->size[3];
  long t2st3 = t2->stride[3];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  long t3sz2 = t3->size[2];
  long t3st2 = t3->stride[2];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t1i2 = 0;
  long t1i3 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t2i2 = 0;
  long t2i3 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  long t3i2 = 0;
  while(t1i0 < t1sz0 && t2i0 < t2sz0 && t3i0 < t3sz0) {
    long rr = (t1sz3-t1i3 < t2sz3-t2i3 ? t1sz3-t1i3 : t2sz3-t2i3);
    long r = (rr < t3sz2-t3i2 ? rr : t3sz2-t3i2);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1 + t1i2*t1st2 + t1i3*t1st3, t1st3, t2data + t2i0*t2st0 + t2i1*t2st1 + t2i2*t2st2 + t2i3*t2st3, t2st3, t3data + t3i0*t3st0 + t3i1*t3st1 + t3i2*t3st2, t3st2, data);
    t1i3 += r;
    if(t1i3 == t1sz3) {
      t1i3 = 0;
      t1i2++;
      if(t1i2 == t1sz2) {
        t1i2 = 0;
        t1i1++;
        if(t1i1 == t1sz1) {
          t1i1 = 0;
          t1i0++;
        }
      }
    }
    t2i3 += r;
    if(t2i3 == t2sz3) {
      t2i3 = 0;
      t2i2++;
      if(t2i2 == t2sz2) {
        t2i2 = 0;
        t2i1++;
        if(t2i1 == t2sz1) {
          t2i1 = 0;
          t2i0++;
        }
      }
    }
    t3i2 += r;
    if(t3i2 == t3sz2) {
      t3i2 = 0;
      t3i1++;
      if(t3i1 == t3sz1) {
        t3i1 = 0;
        t3i0++;
      }
    }
  }
}

static void THTensor_(apply_4_4_4)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  long t1sz2 = t1->size[2];
  long t1st2 = t1->stride[2];
  long t1sz3 = t1->size[3];
  long t1st3 = t1->stride[3];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  long t2sz2 = t2->size[2];
  long t2st2 = t2->stride[2];
  long t2sz3 = t2->size[3];
  long t2st3 = t2->stride[3];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  long t3sz2 = t3->size[2];
  long t3st2 = t3->stride[2];
  long t3sz3 = t3->size[3];
  long t3st3 = t3->stride[3];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t1i2 = 0;
  long t1i3 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t2i2 = 0;
  long t2i3 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  long t3i2 = 0;
  long t3i3 = 0;
  while(t1i0 < t1sz0 && t2i0 < t2sz0 && t3i0 < t3sz0) {
    long rr = (t1sz3-t1i3 < t2sz3-t2i3 ? t1sz3-t1i3 : t2sz3-t2i3);
    long r = (rr < t3sz3-t3i3 ? rr : t3sz3-t3i3);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1 + t1i2*t1st2 + t1i3*t1st3, t1st3, t2data + t2i0*t2st0 + t2i1*t2st1 + t2i2*t2st2 + t2i3*t2st3, t2st3, t3data + t3i0*t3st0 + t3i1*t3st1 + t3i2*t3st2 + t3i3*t3st3, t3st3, data);
    t1i3 += r;
    if(t1i3 == t1sz3) {
      t1i3 = 0;
      t1i2++;
      if(t1i2 == t1sz2) {
        t1i2 = 0;
        t1i1++;
        if(t1i1 == t1sz1) {
          t1i1 = 0;
          t1i0++;
        }
      }
    }
    t2i3 += r;
    if(t2i3 == t2sz3) {
      t2i3 = 0;
      t2i2++;
      if(t2i2 == t2sz2) {
        t2i2 = 0;
        t2i1++;
        if(t2i1 == t2sz1) {
          t2i1 = 0;
          t2i0++;
        }
      }
    }
    t3i3 += r;
    if(t3i3 == t3sz3) {
      t3i3 = 0;
      t3i2++;
      if(t3i2 == t3sz2) {
        t3i2 = 0;
        t3i1++;
        if(t3i1 == t3sz1) {
          t3i1 = 0;
          t3i0++;
        }
      }
    }
  }
}

static void THTensor_(apply_4_4_5)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  long t1sz2 = t1->size[2];
  long t1st2 = t1->stride[2];
  long t1sz3 = t1->size[3];
  long t1st3 = t1->stride[3];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  long t2sz2 = t2->size[2];
  long t2st2 = t2->stride[2];
  long t2sz3 = t2->size[3];
  long t2st3 = t2->stride[3];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  long t3sz2 = t3->size[2];
  long t3st2 = t3->stride[2];
  long t3sz3 = t3->size[3];
  long t3st3 = t3->stride[3];
  long t3sz4 = t3->size[4];
  long t3st4 = t3->stride[4];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t1i2 = 0;
  long t1i3 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t2i2 = 0;
  long t2i3 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  long t3i2 = 0;
  long t3i3 = 0;
  long t3i4 = 0;
  while(t1i0 < t1sz0 && t2i0 < t2sz0 && t3i0 < t3sz0) {
    long rr = (t1sz3-t1i3 < t2sz3-t2i3 ? t1sz3-t1i3 : t2sz3-t2i3);
    long r = (rr < t3sz4-t3i4 ? rr : t3sz4-t3i4);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1 + t1i2*t1st2 + t1i3*t1st3, t1st3, t2data + t2i0*t2st0 + t2i1*t2st1 + t2i2*t2st2 + t2i3*t2st3, t2st3, t3data + t3i0*t3st0 + t3i1*t3st1 + t3i2*t3st2 + t3i3*t3st3 + t3i4*t3st4, t3st4, data);
    t1i3 += r;
    if(t1i3 == t1sz3) {
      t1i3 = 0;
      t1i2++;
      if(t1i2 == t1sz2) {
        t1i2 = 0;
        t1i1++;
        if(t1i1 == t1sz1) {
          t1i1 = 0;
          t1i0++;
        }
      }
    }
    t2i3 += r;
    if(t2i3 == t2sz3) {
      t2i3 = 0;
      t2i2++;
      if(t2i2 == t2sz2) {
        t2i2 = 0;
        t2i1++;
        if(t2i1 == t2sz1) {
          t2i1 = 0;
          t2i0++;
        }
      }
    }
    t3i4 += r;
    if(t3i4 == t3sz4) {
      t3i4 = 0;
      t3i3++;
      if(t3i3 == t3sz3) {
        t3i3 = 0;
        t3i2++;
        if(t3i2 == t3sz2) {
          t3i2 = 0;
          t3i1++;
          if(t3i1 == t3sz1) {
            t3i1 = 0;
            t3i0++;
          }
        }
      }
    }
  }
}

static void THTensor_(apply_4_5_1)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  long t1sz2 = t1->size[2];
  long t1st2 = t1->stride[2];
  long t1sz3 = t1->size[3];
  long t1st3 = t1->stride[3];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  long t2sz2 = t2->size[2];
  long t2st2 = t2->stride[2];
  long t2sz3 = t2->size[3];
  long t2st3 = t2->stride[3];
  long t2sz4 = t2->size[4];
  long t2st4 = t2->stride[4];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t1i2 = 0;
  long t1i3 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t2i2 = 0;
  long t2i3 = 0;
  long t2i4 = 0;
  long t3i0 = 0;
  while(t1i0 < t1sz0 && t2i0 < t2sz0) {
    long rr = (t1sz3-t1i3 < t2sz4-t2i4 ? t1sz3-t1i3 : t2sz4-t2i4);
    long r = (rr < t3sz0-t3i0 ? rr : t3sz0-t3i0);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1 + t1i2*t1st2 + t1i3*t1st3, t1st3, t2data + t2i0*t2st0 + t2i1*t2st1 + t2i2*t2st2 + t2i3*t2st3 + t2i4*t2st4, t2st4, t3data + t3i0*t3st0, t3st0, data);
    t1i3 += r;
    if(t1i3 == t1sz3) {
      t1i3 = 0;
      t1i2++;
      if(t1i2 == t1sz2) {
        t1i2 = 0;
        t1i1++;
        if(t1i1 == t1sz1) {
          t1i1 = 0;
          t1i0++;
        }
      }
    }
    t2i4 += r;
    if(t2i4 == t2sz4) {
      t2i4 = 0;
      t2i3++;
      if(t2i3 == t2sz3) {
        t2i3 = 0;
        t2i2++;
        if(t2i2 == t2sz2) {
          t2i2 = 0;
          t2i1++;
          if(t2i1 == t2sz1) {
            t2i1 = 0;
            t2i0++;
          }
        }
      }
    }
    t3i0 += r;
  }
}

static void THTensor_(apply_4_5_2)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  long t1sz2 = t1->size[2];
  long t1st2 = t1->stride[2];
  long t1sz3 = t1->size[3];
  long t1st3 = t1->stride[3];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  long t2sz2 = t2->size[2];
  long t2st2 = t2->stride[2];
  long t2sz3 = t2->size[3];
  long t2st3 = t2->stride[3];
  long t2sz4 = t2->size[4];
  long t2st4 = t2->stride[4];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t1i2 = 0;
  long t1i3 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t2i2 = 0;
  long t2i3 = 0;
  long t2i4 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  while(t1i0 < t1sz0 && t2i0 < t2sz0 && t3i0 < t3sz0) {
    long rr = (t1sz3-t1i3 < t2sz4-t2i4 ? t1sz3-t1i3 : t2sz4-t2i4);
    long r = (rr < t3sz1-t3i1 ? rr : t3sz1-t3i1);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1 + t1i2*t1st2 + t1i3*t1st3, t1st3, t2data + t2i0*t2st0 + t2i1*t2st1 + t2i2*t2st2 + t2i3*t2st3 + t2i4*t2st4, t2st4, t3data + t3i0*t3st0 + t3i1*t3st1, t3st1, data);
    t1i3 += r;
    if(t1i3 == t1sz3) {
      t1i3 = 0;
      t1i2++;
      if(t1i2 == t1sz2) {
        t1i2 = 0;
        t1i1++;
        if(t1i1 == t1sz1) {
          t1i1 = 0;
          t1i0++;
        }
      }
    }
    t2i4 += r;
    if(t2i4 == t2sz4) {
      t2i4 = 0;
      t2i3++;
      if(t2i3 == t2sz3) {
        t2i3 = 0;
        t2i2++;
        if(t2i2 == t2sz2) {
          t2i2 = 0;
          t2i1++;
          if(t2i1 == t2sz1) {
            t2i1 = 0;
            t2i0++;
          }
        }
      }
    }
    t3i1 += r;
    if(t3i1 == t3sz1) {
      t3i1 = 0;
      t3i0++;
    }
  }
}

static void THTensor_(apply_4_5_3)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  long t1sz2 = t1->size[2];
  long t1st2 = t1->stride[2];
  long t1sz3 = t1->size[3];
  long t1st3 = t1->stride[3];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  long t2sz2 = t2->size[2];
  long t2st2 = t2->stride[2];
  long t2sz3 = t2->size[3];
  long t2st3 = t2->stride[3];
  long t2sz4 = t2->size[4];
  long t2st4 = t2->stride[4];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  long t3sz2 = t3->size[2];
  long t3st2 = t3->stride[2];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t1i2 = 0;
  long t1i3 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t2i2 = 0;
  long t2i3 = 0;
  long t2i4 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  long t3i2 = 0;
  while(t1i0 < t1sz0 && t2i0 < t2sz0 && t3i0 < t3sz0) {
    long rr = (t1sz3-t1i3 < t2sz4-t2i4 ? t1sz3-t1i3 : t2sz4-t2i4);
    long r = (rr < t3sz2-t3i2 ? rr : t3sz2-t3i2);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1 + t1i2*t1st2 + t1i3*t1st3, t1st3, t2data + t2i0*t2st0 + t2i1*t2st1 + t2i2*t2st2 + t2i3*t2st3 + t2i4*t2st4, t2st4, t3data + t3i0*t3st0 + t3i1*t3st1 + t3i2*t3st2, t3st2, data);
    t1i3 += r;
    if(t1i3 == t1sz3) {
      t1i3 = 0;
      t1i2++;
      if(t1i2 == t1sz2) {
        t1i2 = 0;
        t1i1++;
        if(t1i1 == t1sz1) {
          t1i1 = 0;
          t1i0++;
        }
      }
    }
    t2i4 += r;
    if(t2i4 == t2sz4) {
      t2i4 = 0;
      t2i3++;
      if(t2i3 == t2sz3) {
        t2i3 = 0;
        t2i2++;
        if(t2i2 == t2sz2) {
          t2i2 = 0;
          t2i1++;
          if(t2i1 == t2sz1) {
            t2i1 = 0;
            t2i0++;
          }
        }
      }
    }
    t3i2 += r;
    if(t3i2 == t3sz2) {
      t3i2 = 0;
      t3i1++;
      if(t3i1 == t3sz1) {
        t3i1 = 0;
        t3i0++;
      }
    }
  }
}

static void THTensor_(apply_4_5_4)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  long t1sz2 = t1->size[2];
  long t1st2 = t1->stride[2];
  long t1sz3 = t1->size[3];
  long t1st3 = t1->stride[3];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  long t2sz2 = t2->size[2];
  long t2st2 = t2->stride[2];
  long t2sz3 = t2->size[3];
  long t2st3 = t2->stride[3];
  long t2sz4 = t2->size[4];
  long t2st4 = t2->stride[4];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  long t3sz2 = t3->size[2];
  long t3st2 = t3->stride[2];
  long t3sz3 = t3->size[3];
  long t3st3 = t3->stride[3];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t1i2 = 0;
  long t1i3 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t2i2 = 0;
  long t2i3 = 0;
  long t2i4 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  long t3i2 = 0;
  long t3i3 = 0;
  while(t1i0 < t1sz0 && t2i0 < t2sz0 && t3i0 < t3sz0) {
    long rr = (t1sz3-t1i3 < t2sz4-t2i4 ? t1sz3-t1i3 : t2sz4-t2i4);
    long r = (rr < t3sz3-t3i3 ? rr : t3sz3-t3i3);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1 + t1i2*t1st2 + t1i3*t1st3, t1st3, t2data + t2i0*t2st0 + t2i1*t2st1 + t2i2*t2st2 + t2i3*t2st3 + t2i4*t2st4, t2st4, t3data + t3i0*t3st0 + t3i1*t3st1 + t3i2*t3st2 + t3i3*t3st3, t3st3, data);
    t1i3 += r;
    if(t1i3 == t1sz3) {
      t1i3 = 0;
      t1i2++;
      if(t1i2 == t1sz2) {
        t1i2 = 0;
        t1i1++;
        if(t1i1 == t1sz1) {
          t1i1 = 0;
          t1i0++;
        }
      }
    }
    t2i4 += r;
    if(t2i4 == t2sz4) {
      t2i4 = 0;
      t2i3++;
      if(t2i3 == t2sz3) {
        t2i3 = 0;
        t2i2++;
        if(t2i2 == t2sz2) {
          t2i2 = 0;
          t2i1++;
          if(t2i1 == t2sz1) {
            t2i1 = 0;
            t2i0++;
          }
        }
      }
    }
    t3i3 += r;
    if(t3i3 == t3sz3) {
      t3i3 = 0;
      t3i2++;
      if(t3i2 == t3sz2) {
        t3i2 = 0;
        t3i1++;
        if(t3i1 == t3sz1) {
          t3i1 = 0;
          t3i0++;
        }
      }
    }
  }
}

static void THTensor_(apply_4_5_5)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  long t1sz2 = t1->size[2];
  long t1st2 = t1->stride[2];
  long t1sz3 = t1->size[3];
  long t1st3 = t1->stride[3];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  long t2sz2 = t2->size[2];
  long t2st2 = t2->stride[2];
  long t2sz3 = t2->size[3];
  long t2st3 = t2->stride[3];
  long t2sz4 = t2->size[4];
  long t2st4 = t2->stride[4];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  long t3sz2 = t3->size[2];
  long t3st2 = t3->stride[2];
  long t3sz3 = t3->size[3];
  long t3st3 = t3->stride[3];
  long t3sz4 = t3->size[4];
  long t3st4 = t3->stride[4];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t1i2 = 0;
  long t1i3 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t2i2 = 0;
  long t2i3 = 0;
  long t2i4 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  long t3i2 = 0;
  long t3i3 = 0;
  long t3i4 = 0;
  while(t1i0 < t1sz0 && t2i0 < t2sz0 && t3i0 < t3sz0) {
    long rr = (t1sz3-t1i3 < t2sz4-t2i4 ? t1sz3-t1i3 : t2sz4-t2i4);
    long r = (rr < t3sz4-t3i4 ? rr : t3sz4-t3i4);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1 + t1i2*t1st2 + t1i3*t1st3, t1st3, t2data + t2i0*t2st0 + t2i1*t2st1 + t2i2*t2st2 + t2i3*t2st3 + t2i4*t2st4, t2st4, t3data + t3i0*t3st0 + t3i1*t3st1 + t3i2*t3st2 + t3i3*t3st3 + t3i4*t3st4, t3st4, data);
    t1i3 += r;
    if(t1i3 == t1sz3) {
      t1i3 = 0;
      t1i2++;
      if(t1i2 == t1sz2) {
        t1i2 = 0;
        t1i1++;
        if(t1i1 == t1sz1) {
          t1i1 = 0;
          t1i0++;
        }
      }
    }
    t2i4 += r;
    if(t2i4 == t2sz4) {
      t2i4 = 0;
      t2i3++;
      if(t2i3 == t2sz3) {
        t2i3 = 0;
        t2i2++;
        if(t2i2 == t2sz2) {
          t2i2 = 0;
          t2i1++;
          if(t2i1 == t2sz1) {
            t2i1 = 0;
            t2i0++;
          }
        }
      }
    }
    t3i4 += r;
    if(t3i4 == t3sz4) {
      t3i4 = 0;
      t3i3++;
      if(t3i3 == t3sz3) {
        t3i3 = 0;
        t3i2++;
        if(t3i2 == t3sz2) {
          t3i2 = 0;
          t3i1++;
          if(t3i1 == t3sz1) {
            t3i1 = 0;
            t3i0++;
          }
        }
      }
    }
  }
}

static void THTensor_(apply_5_1_1)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  long t1sz2 = t1->size[2];
  long t1st2 = t1->stride[2];
  long t1sz3 = t1->size[3];
  long t1st3 = t1->stride[3];
  long t1sz4 = t1->size[4];
  long t1st4 = t1->stride[4];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t1i2 = 0;
  long t1i3 = 0;
  long t1i4 = 0;
  long t2i0 = 0;
  long t3i0 = 0;
  while(t1i0 < t1sz0) {
    long rr = (t1sz4-t1i4 < t2sz0-t2i0 ? t1sz4-t1i4 : t2sz0-t2i0);
    long r = (rr < t3sz0-t3i0 ? rr : t3sz0-t3i0);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1 + t1i2*t1st2 + t1i3*t1st3 + t1i4*t1st4, t1st4, t2data + t2i0*t2st0, t2st0, t3data + t3i0*t3st0, t3st0, data);
    t1i4 += r;
    if(t1i4 == t1sz4) {
      t1i4 = 0;
      t1i3++;
      if(t1i3 == t1sz3) {
        t1i3 = 0;
        t1i2++;
        if(t1i2 == t1sz2) {
          t1i2 = 0;
          t1i1++;
          if(t1i1 == t1sz1) {
            t1i1 = 0;
            t1i0++;
          }
        }
      }
    }
    t2i0 += r;
    t3i0 += r;
  }
}

static void THTensor_(apply_5_1_2)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  long t1sz2 = t1->size[2];
  long t1st2 = t1->stride[2];
  long t1sz3 = t1->size[3];
  long t1st3 = t1->stride[3];
  long t1sz4 = t1->size[4];
  long t1st4 = t1->stride[4];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t1i2 = 0;
  long t1i3 = 0;
  long t1i4 = 0;
  long t2i0 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  while(t1i0 < t1sz0 && t3i0 < t3sz0) {
    long rr = (t1sz4-t1i4 < t2sz0-t2i0 ? t1sz4-t1i4 : t2sz0-t2i0);
    long r = (rr < t3sz1-t3i1 ? rr : t3sz1-t3i1);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1 + t1i2*t1st2 + t1i3*t1st3 + t1i4*t1st4, t1st4, t2data + t2i0*t2st0, t2st0, t3data + t3i0*t3st0 + t3i1*t3st1, t3st1, data);
    t1i4 += r;
    if(t1i4 == t1sz4) {
      t1i4 = 0;
      t1i3++;
      if(t1i3 == t1sz3) {
        t1i3 = 0;
        t1i2++;
        if(t1i2 == t1sz2) {
          t1i2 = 0;
          t1i1++;
          if(t1i1 == t1sz1) {
            t1i1 = 0;
            t1i0++;
          }
        }
      }
    }
    t2i0 += r;
    t3i1 += r;
    if(t3i1 == t3sz1) {
      t3i1 = 0;
      t3i0++;
    }
  }
}

static void THTensor_(apply_5_1_3)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  long t1sz2 = t1->size[2];
  long t1st2 = t1->stride[2];
  long t1sz3 = t1->size[3];
  long t1st3 = t1->stride[3];
  long t1sz4 = t1->size[4];
  long t1st4 = t1->stride[4];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  long t3sz2 = t3->size[2];
  long t3st2 = t3->stride[2];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t1i2 = 0;
  long t1i3 = 0;
  long t1i4 = 0;
  long t2i0 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  long t3i2 = 0;
  while(t1i0 < t1sz0 && t3i0 < t3sz0) {
    long rr = (t1sz4-t1i4 < t2sz0-t2i0 ? t1sz4-t1i4 : t2sz0-t2i0);
    long r = (rr < t3sz2-t3i2 ? rr : t3sz2-t3i2);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1 + t1i2*t1st2 + t1i3*t1st3 + t1i4*t1st4, t1st4, t2data + t2i0*t2st0, t2st0, t3data + t3i0*t3st0 + t3i1*t3st1 + t3i2*t3st2, t3st2, data);
    t1i4 += r;
    if(t1i4 == t1sz4) {
      t1i4 = 0;
      t1i3++;
      if(t1i3 == t1sz3) {
        t1i3 = 0;
        t1i2++;
        if(t1i2 == t1sz2) {
          t1i2 = 0;
          t1i1++;
          if(t1i1 == t1sz1) {
            t1i1 = 0;
            t1i0++;
          }
        }
      }
    }
    t2i0 += r;
    t3i2 += r;
    if(t3i2 == t3sz2) {
      t3i2 = 0;
      t3i1++;
      if(t3i1 == t3sz1) {
        t3i1 = 0;
        t3i0++;
      }
    }
  }
}

static void THTensor_(apply_5_1_4)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  long t1sz2 = t1->size[2];
  long t1st2 = t1->stride[2];
  long t1sz3 = t1->size[3];
  long t1st3 = t1->stride[3];
  long t1sz4 = t1->size[4];
  long t1st4 = t1->stride[4];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  long t3sz2 = t3->size[2];
  long t3st2 = t3->stride[2];
  long t3sz3 = t3->size[3];
  long t3st3 = t3->stride[3];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t1i2 = 0;
  long t1i3 = 0;
  long t1i4 = 0;
  long t2i0 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  long t3i2 = 0;
  long t3i3 = 0;
  while(t1i0 < t1sz0 && t3i0 < t3sz0) {
    long rr = (t1sz4-t1i4 < t2sz0-t2i0 ? t1sz4-t1i4 : t2sz0-t2i0);
    long r = (rr < t3sz3-t3i3 ? rr : t3sz3-t3i3);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1 + t1i2*t1st2 + t1i3*t1st3 + t1i4*t1st4, t1st4, t2data + t2i0*t2st0, t2st0, t3data + t3i0*t3st0 + t3i1*t3st1 + t3i2*t3st2 + t3i3*t3st3, t3st3, data);
    t1i4 += r;
    if(t1i4 == t1sz4) {
      t1i4 = 0;
      t1i3++;
      if(t1i3 == t1sz3) {
        t1i3 = 0;
        t1i2++;
        if(t1i2 == t1sz2) {
          t1i2 = 0;
          t1i1++;
          if(t1i1 == t1sz1) {
            t1i1 = 0;
            t1i0++;
          }
        }
      }
    }
    t2i0 += r;
    t3i3 += r;
    if(t3i3 == t3sz3) {
      t3i3 = 0;
      t3i2++;
      if(t3i2 == t3sz2) {
        t3i2 = 0;
        t3i1++;
        if(t3i1 == t3sz1) {
          t3i1 = 0;
          t3i0++;
        }
      }
    }
  }
}

static void THTensor_(apply_5_1_5)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  long t1sz2 = t1->size[2];
  long t1st2 = t1->stride[2];
  long t1sz3 = t1->size[3];
  long t1st3 = t1->stride[3];
  long t1sz4 = t1->size[4];
  long t1st4 = t1->stride[4];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  long t3sz2 = t3->size[2];
  long t3st2 = t3->stride[2];
  long t3sz3 = t3->size[3];
  long t3st3 = t3->stride[3];
  long t3sz4 = t3->size[4];
  long t3st4 = t3->stride[4];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t1i2 = 0;
  long t1i3 = 0;
  long t1i4 = 0;
  long t2i0 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  long t3i2 = 0;
  long t3i3 = 0;
  long t3i4 = 0;
  while(t1i0 < t1sz0 && t3i0 < t3sz0) {
    long rr = (t1sz4-t1i4 < t2sz0-t2i0 ? t1sz4-t1i4 : t2sz0-t2i0);
    long r = (rr < t3sz4-t3i4 ? rr : t3sz4-t3i4);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1 + t1i2*t1st2 + t1i3*t1st3 + t1i4*t1st4, t1st4, t2data + t2i0*t2st0, t2st0, t3data + t3i0*t3st0 + t3i1*t3st1 + t3i2*t3st2 + t3i3*t3st3 + t3i4*t3st4, t3st4, data);
    t1i4 += r;
    if(t1i4 == t1sz4) {
      t1i4 = 0;
      t1i3++;
      if(t1i3 == t1sz3) {
        t1i3 = 0;
        t1i2++;
        if(t1i2 == t1sz2) {
          t1i2 = 0;
          t1i1++;
          if(t1i1 == t1sz1) {
            t1i1 = 0;
            t1i0++;
          }
        }
      }
    }
    t2i0 += r;
    t3i4 += r;
    if(t3i4 == t3sz4) {
      t3i4 = 0;
      t3i3++;
      if(t3i3 == t3sz3) {
        t3i3 = 0;
        t3i2++;
        if(t3i2 == t3sz2) {
          t3i2 = 0;
          t3i1++;
          if(t3i1 == t3sz1) {
            t3i1 = 0;
            t3i0++;
          }
        }
      }
    }
  }
}

static void THTensor_(apply_5_2_1)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  long t1sz2 = t1->size[2];
  long t1st2 = t1->stride[2];
  long t1sz3 = t1->size[3];
  long t1st3 = t1->stride[3];
  long t1sz4 = t1->size[4];
  long t1st4 = t1->stride[4];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t1i2 = 0;
  long t1i3 = 0;
  long t1i4 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t3i0 = 0;
  while(t1i0 < t1sz0 && t2i0 < t2sz0) {
    long rr = (t1sz4-t1i4 < t2sz1-t2i1 ? t1sz4-t1i4 : t2sz1-t2i1);
    long r = (rr < t3sz0-t3i0 ? rr : t3sz0-t3i0);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1 + t1i2*t1st2 + t1i3*t1st3 + t1i4*t1st4, t1st4, t2data + t2i0*t2st0 + t2i1*t2st1, t2st1, t3data + t3i0*t3st0, t3st0, data);
    t1i4 += r;
    if(t1i4 == t1sz4) {
      t1i4 = 0;
      t1i3++;
      if(t1i3 == t1sz3) {
        t1i3 = 0;
        t1i2++;
        if(t1i2 == t1sz2) {
          t1i2 = 0;
          t1i1++;
          if(t1i1 == t1sz1) {
            t1i1 = 0;
            t1i0++;
          }
        }
      }
    }
    t2i1 += r;
    if(t2i1 == t2sz1) {
      t2i1 = 0;
      t2i0++;
    }
    t3i0 += r;
  }
}

static void THTensor_(apply_5_2_2)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  long t1sz2 = t1->size[2];
  long t1st2 = t1->stride[2];
  long t1sz3 = t1->size[3];
  long t1st3 = t1->stride[3];
  long t1sz4 = t1->size[4];
  long t1st4 = t1->stride[4];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t1i2 = 0;
  long t1i3 = 0;
  long t1i4 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  while(t1i0 < t1sz0 && t2i0 < t2sz0 && t3i0 < t3sz0) {
    long rr = (t1sz4-t1i4 < t2sz1-t2i1 ? t1sz4-t1i4 : t2sz1-t2i1);
    long r = (rr < t3sz1-t3i1 ? rr : t3sz1-t3i1);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1 + t1i2*t1st2 + t1i3*t1st3 + t1i4*t1st4, t1st4, t2data + t2i0*t2st0 + t2i1*t2st1, t2st1, t3data + t3i0*t3st0 + t3i1*t3st1, t3st1, data);
    t1i4 += r;
    if(t1i4 == t1sz4) {
      t1i4 = 0;
      t1i3++;
      if(t1i3 == t1sz3) {
        t1i3 = 0;
        t1i2++;
        if(t1i2 == t1sz2) {
          t1i2 = 0;
          t1i1++;
          if(t1i1 == t1sz1) {
            t1i1 = 0;
            t1i0++;
          }
        }
      }
    }
    t2i1 += r;
    if(t2i1 == t2sz1) {
      t2i1 = 0;
      t2i0++;
    }
    t3i1 += r;
    if(t3i1 == t3sz1) {
      t3i1 = 0;
      t3i0++;
    }
  }
}

static void THTensor_(apply_5_2_3)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  long t1sz2 = t1->size[2];
  long t1st2 = t1->stride[2];
  long t1sz3 = t1->size[3];
  long t1st3 = t1->stride[3];
  long t1sz4 = t1->size[4];
  long t1st4 = t1->stride[4];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  long t3sz2 = t3->size[2];
  long t3st2 = t3->stride[2];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t1i2 = 0;
  long t1i3 = 0;
  long t1i4 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  long t3i2 = 0;
  while(t1i0 < t1sz0 && t2i0 < t2sz0 && t3i0 < t3sz0) {
    long rr = (t1sz4-t1i4 < t2sz1-t2i1 ? t1sz4-t1i4 : t2sz1-t2i1);
    long r = (rr < t3sz2-t3i2 ? rr : t3sz2-t3i2);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1 + t1i2*t1st2 + t1i3*t1st3 + t1i4*t1st4, t1st4, t2data + t2i0*t2st0 + t2i1*t2st1, t2st1, t3data + t3i0*t3st0 + t3i1*t3st1 + t3i2*t3st2, t3st2, data);
    t1i4 += r;
    if(t1i4 == t1sz4) {
      t1i4 = 0;
      t1i3++;
      if(t1i3 == t1sz3) {
        t1i3 = 0;
        t1i2++;
        if(t1i2 == t1sz2) {
          t1i2 = 0;
          t1i1++;
          if(t1i1 == t1sz1) {
            t1i1 = 0;
            t1i0++;
          }
        }
      }
    }
    t2i1 += r;
    if(t2i1 == t2sz1) {
      t2i1 = 0;
      t2i0++;
    }
    t3i2 += r;
    if(t3i2 == t3sz2) {
      t3i2 = 0;
      t3i1++;
      if(t3i1 == t3sz1) {
        t3i1 = 0;
        t3i0++;
      }
    }
  }
}

static void THTensor_(apply_5_2_4)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  long t1sz2 = t1->size[2];
  long t1st2 = t1->stride[2];
  long t1sz3 = t1->size[3];
  long t1st3 = t1->stride[3];
  long t1sz4 = t1->size[4];
  long t1st4 = t1->stride[4];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  long t3sz2 = t3->size[2];
  long t3st2 = t3->stride[2];
  long t3sz3 = t3->size[3];
  long t3st3 = t3->stride[3];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t1i2 = 0;
  long t1i3 = 0;
  long t1i4 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  long t3i2 = 0;
  long t3i3 = 0;
  while(t1i0 < t1sz0 && t2i0 < t2sz0 && t3i0 < t3sz0) {
    long rr = (t1sz4-t1i4 < t2sz1-t2i1 ? t1sz4-t1i4 : t2sz1-t2i1);
    long r = (rr < t3sz3-t3i3 ? rr : t3sz3-t3i3);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1 + t1i2*t1st2 + t1i3*t1st3 + t1i4*t1st4, t1st4, t2data + t2i0*t2st0 + t2i1*t2st1, t2st1, t3data + t3i0*t3st0 + t3i1*t3st1 + t3i2*t3st2 + t3i3*t3st3, t3st3, data);
    t1i4 += r;
    if(t1i4 == t1sz4) {
      t1i4 = 0;
      t1i3++;
      if(t1i3 == t1sz3) {
        t1i3 = 0;
        t1i2++;
        if(t1i2 == t1sz2) {
          t1i2 = 0;
          t1i1++;
          if(t1i1 == t1sz1) {
            t1i1 = 0;
            t1i0++;
          }
        }
      }
    }
    t2i1 += r;
    if(t2i1 == t2sz1) {
      t2i1 = 0;
      t2i0++;
    }
    t3i3 += r;
    if(t3i3 == t3sz3) {
      t3i3 = 0;
      t3i2++;
      if(t3i2 == t3sz2) {
        t3i2 = 0;
        t3i1++;
        if(t3i1 == t3sz1) {
          t3i1 = 0;
          t3i0++;
        }
      }
    }
  }
}

static void THTensor_(apply_5_2_5)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  long t1sz2 = t1->size[2];
  long t1st2 = t1->stride[2];
  long t1sz3 = t1->size[3];
  long t1st3 = t1->stride[3];
  long t1sz4 = t1->size[4];
  long t1st4 = t1->stride[4];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  long t3sz2 = t3->size[2];
  long t3st2 = t3->stride[2];
  long t3sz3 = t3->size[3];
  long t3st3 = t3->stride[3];
  long t3sz4 = t3->size[4];
  long t3st4 = t3->stride[4];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t1i2 = 0;
  long t1i3 = 0;
  long t1i4 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  long t3i2 = 0;
  long t3i3 = 0;
  long t3i4 = 0;
  while(t1i0 < t1sz0 && t2i0 < t2sz0 && t3i0 < t3sz0) {
    long rr = (t1sz4-t1i4 < t2sz1-t2i1 ? t1sz4-t1i4 : t2sz1-t2i1);
    long r = (rr < t3sz4-t3i4 ? rr : t3sz4-t3i4);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1 + t1i2*t1st2 + t1i3*t1st3 + t1i4*t1st4, t1st4, t2data + t2i0*t2st0 + t2i1*t2st1, t2st1, t3data + t3i0*t3st0 + t3i1*t3st1 + t3i2*t3st2 + t3i3*t3st3 + t3i4*t3st4, t3st4, data);
    t1i4 += r;
    if(t1i4 == t1sz4) {
      t1i4 = 0;
      t1i3++;
      if(t1i3 == t1sz3) {
        t1i3 = 0;
        t1i2++;
        if(t1i2 == t1sz2) {
          t1i2 = 0;
          t1i1++;
          if(t1i1 == t1sz1) {
            t1i1 = 0;
            t1i0++;
          }
        }
      }
    }
    t2i1 += r;
    if(t2i1 == t2sz1) {
      t2i1 = 0;
      t2i0++;
    }
    t3i4 += r;
    if(t3i4 == t3sz4) {
      t3i4 = 0;
      t3i3++;
      if(t3i3 == t3sz3) {
        t3i3 = 0;
        t3i2++;
        if(t3i2 == t3sz2) {
          t3i2 = 0;
          t3i1++;
          if(t3i1 == t3sz1) {
            t3i1 = 0;
            t3i0++;
          }
        }
      }
    }
  }
}

static void THTensor_(apply_5_3_1)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  long t1sz2 = t1->size[2];
  long t1st2 = t1->stride[2];
  long t1sz3 = t1->size[3];
  long t1st3 = t1->stride[3];
  long t1sz4 = t1->size[4];
  long t1st4 = t1->stride[4];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  long t2sz2 = t2->size[2];
  long t2st2 = t2->stride[2];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t1i2 = 0;
  long t1i3 = 0;
  long t1i4 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t2i2 = 0;
  long t3i0 = 0;
  while(t1i0 < t1sz0 && t2i0 < t2sz0) {
    long rr = (t1sz4-t1i4 < t2sz2-t2i2 ? t1sz4-t1i4 : t2sz2-t2i2);
    long r = (rr < t3sz0-t3i0 ? rr : t3sz0-t3i0);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1 + t1i2*t1st2 + t1i3*t1st3 + t1i4*t1st4, t1st4, t2data + t2i0*t2st0 + t2i1*t2st1 + t2i2*t2st2, t2st2, t3data + t3i0*t3st0, t3st0, data);
    t1i4 += r;
    if(t1i4 == t1sz4) {
      t1i4 = 0;
      t1i3++;
      if(t1i3 == t1sz3) {
        t1i3 = 0;
        t1i2++;
        if(t1i2 == t1sz2) {
          t1i2 = 0;
          t1i1++;
          if(t1i1 == t1sz1) {
            t1i1 = 0;
            t1i0++;
          }
        }
      }
    }
    t2i2 += r;
    if(t2i2 == t2sz2) {
      t2i2 = 0;
      t2i1++;
      if(t2i1 == t2sz1) {
        t2i1 = 0;
        t2i0++;
      }
    }
    t3i0 += r;
  }
}

static void THTensor_(apply_5_3_2)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  long t1sz2 = t1->size[2];
  long t1st2 = t1->stride[2];
  long t1sz3 = t1->size[3];
  long t1st3 = t1->stride[3];
  long t1sz4 = t1->size[4];
  long t1st4 = t1->stride[4];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  long t2sz2 = t2->size[2];
  long t2st2 = t2->stride[2];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t1i2 = 0;
  long t1i3 = 0;
  long t1i4 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t2i2 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  while(t1i0 < t1sz0 && t2i0 < t2sz0 && t3i0 < t3sz0) {
    long rr = (t1sz4-t1i4 < t2sz2-t2i2 ? t1sz4-t1i4 : t2sz2-t2i2);
    long r = (rr < t3sz1-t3i1 ? rr : t3sz1-t3i1);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1 + t1i2*t1st2 + t1i3*t1st3 + t1i4*t1st4, t1st4, t2data + t2i0*t2st0 + t2i1*t2st1 + t2i2*t2st2, t2st2, t3data + t3i0*t3st0 + t3i1*t3st1, t3st1, data);
    t1i4 += r;
    if(t1i4 == t1sz4) {
      t1i4 = 0;
      t1i3++;
      if(t1i3 == t1sz3) {
        t1i3 = 0;
        t1i2++;
        if(t1i2 == t1sz2) {
          t1i2 = 0;
          t1i1++;
          if(t1i1 == t1sz1) {
            t1i1 = 0;
            t1i0++;
          }
        }
      }
    }
    t2i2 += r;
    if(t2i2 == t2sz2) {
      t2i2 = 0;
      t2i1++;
      if(t2i1 == t2sz1) {
        t2i1 = 0;
        t2i0++;
      }
    }
    t3i1 += r;
    if(t3i1 == t3sz1) {
      t3i1 = 0;
      t3i0++;
    }
  }
}

static void THTensor_(apply_5_3_3)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  long t1sz2 = t1->size[2];
  long t1st2 = t1->stride[2];
  long t1sz3 = t1->size[3];
  long t1st3 = t1->stride[3];
  long t1sz4 = t1->size[4];
  long t1st4 = t1->stride[4];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  long t2sz2 = t2->size[2];
  long t2st2 = t2->stride[2];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  long t3sz2 = t3->size[2];
  long t3st2 = t3->stride[2];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t1i2 = 0;
  long t1i3 = 0;
  long t1i4 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t2i2 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  long t3i2 = 0;
  while(t1i0 < t1sz0 && t2i0 < t2sz0 && t3i0 < t3sz0) {
    long rr = (t1sz4-t1i4 < t2sz2-t2i2 ? t1sz4-t1i4 : t2sz2-t2i2);
    long r = (rr < t3sz2-t3i2 ? rr : t3sz2-t3i2);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1 + t1i2*t1st2 + t1i3*t1st3 + t1i4*t1st4, t1st4, t2data + t2i0*t2st0 + t2i1*t2st1 + t2i2*t2st2, t2st2, t3data + t3i0*t3st0 + t3i1*t3st1 + t3i2*t3st2, t3st2, data);
    t1i4 += r;
    if(t1i4 == t1sz4) {
      t1i4 = 0;
      t1i3++;
      if(t1i3 == t1sz3) {
        t1i3 = 0;
        t1i2++;
        if(t1i2 == t1sz2) {
          t1i2 = 0;
          t1i1++;
          if(t1i1 == t1sz1) {
            t1i1 = 0;
            t1i0++;
          }
        }
      }
    }
    t2i2 += r;
    if(t2i2 == t2sz2) {
      t2i2 = 0;
      t2i1++;
      if(t2i1 == t2sz1) {
        t2i1 = 0;
        t2i0++;
      }
    }
    t3i2 += r;
    if(t3i2 == t3sz2) {
      t3i2 = 0;
      t3i1++;
      if(t3i1 == t3sz1) {
        t3i1 = 0;
        t3i0++;
      }
    }
  }
}

static void THTensor_(apply_5_3_4)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  long t1sz2 = t1->size[2];
  long t1st2 = t1->stride[2];
  long t1sz3 = t1->size[3];
  long t1st3 = t1->stride[3];
  long t1sz4 = t1->size[4];
  long t1st4 = t1->stride[4];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  long t2sz2 = t2->size[2];
  long t2st2 = t2->stride[2];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  long t3sz2 = t3->size[2];
  long t3st2 = t3->stride[2];
  long t3sz3 = t3->size[3];
  long t3st3 = t3->stride[3];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t1i2 = 0;
  long t1i3 = 0;
  long t1i4 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t2i2 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  long t3i2 = 0;
  long t3i3 = 0;
  while(t1i0 < t1sz0 && t2i0 < t2sz0 && t3i0 < t3sz0) {
    long rr = (t1sz4-t1i4 < t2sz2-t2i2 ? t1sz4-t1i4 : t2sz2-t2i2);
    long r = (rr < t3sz3-t3i3 ? rr : t3sz3-t3i3);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1 + t1i2*t1st2 + t1i3*t1st3 + t1i4*t1st4, t1st4, t2data + t2i0*t2st0 + t2i1*t2st1 + t2i2*t2st2, t2st2, t3data + t3i0*t3st0 + t3i1*t3st1 + t3i2*t3st2 + t3i3*t3st3, t3st3, data);
    t1i4 += r;
    if(t1i4 == t1sz4) {
      t1i4 = 0;
      t1i3++;
      if(t1i3 == t1sz3) {
        t1i3 = 0;
        t1i2++;
        if(t1i2 == t1sz2) {
          t1i2 = 0;
          t1i1++;
          if(t1i1 == t1sz1) {
            t1i1 = 0;
            t1i0++;
          }
        }
      }
    }
    t2i2 += r;
    if(t2i2 == t2sz2) {
      t2i2 = 0;
      t2i1++;
      if(t2i1 == t2sz1) {
        t2i1 = 0;
        t2i0++;
      }
    }
    t3i3 += r;
    if(t3i3 == t3sz3) {
      t3i3 = 0;
      t3i2++;
      if(t3i2 == t3sz2) {
        t3i2 = 0;
        t3i1++;
        if(t3i1 == t3sz1) {
          t3i1 = 0;
          t3i0++;
        }
      }
    }
  }
}

static void THTensor_(apply_5_3_5)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  long t1sz2 = t1->size[2];
  long t1st2 = t1->stride[2];
  long t1sz3 = t1->size[3];
  long t1st3 = t1->stride[3];
  long t1sz4 = t1->size[4];
  long t1st4 = t1->stride[4];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  long t2sz2 = t2->size[2];
  long t2st2 = t2->stride[2];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  long t3sz2 = t3->size[2];
  long t3st2 = t3->stride[2];
  long t3sz3 = t3->size[3];
  long t3st3 = t3->stride[3];
  long t3sz4 = t3->size[4];
  long t3st4 = t3->stride[4];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t1i2 = 0;
  long t1i3 = 0;
  long t1i4 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t2i2 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  long t3i2 = 0;
  long t3i3 = 0;
  long t3i4 = 0;
  while(t1i0 < t1sz0 && t2i0 < t2sz0 && t3i0 < t3sz0) {
    long rr = (t1sz4-t1i4 < t2sz2-t2i2 ? t1sz4-t1i4 : t2sz2-t2i2);
    long r = (rr < t3sz4-t3i4 ? rr : t3sz4-t3i4);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1 + t1i2*t1st2 + t1i3*t1st3 + t1i4*t1st4, t1st4, t2data + t2i0*t2st0 + t2i1*t2st1 + t2i2*t2st2, t2st2, t3data + t3i0*t3st0 + t3i1*t3st1 + t3i2*t3st2 + t3i3*t3st3 + t3i4*t3st4, t3st4, data);
    t1i4 += r;
    if(t1i4 == t1sz4) {
      t1i4 = 0;
      t1i3++;
      if(t1i3 == t1sz3) {
        t1i3 = 0;
        t1i2++;
        if(t1i2 == t1sz2) {
          t1i2 = 0;
          t1i1++;
          if(t1i1 == t1sz1) {
            t1i1 = 0;
            t1i0++;
          }
        }
      }
    }
    t2i2 += r;
    if(t2i2 == t2sz2) {
      t2i2 = 0;
      t2i1++;
      if(t2i1 == t2sz1) {
        t2i1 = 0;
        t2i0++;
      }
    }
    t3i4 += r;
    if(t3i4 == t3sz4) {
      t3i4 = 0;
      t3i3++;
      if(t3i3 == t3sz3) {
        t3i3 = 0;
        t3i2++;
        if(t3i2 == t3sz2) {
          t3i2 = 0;
          t3i1++;
          if(t3i1 == t3sz1) {
            t3i1 = 0;
            t3i0++;
          }
        }
      }
    }
  }
}

static void THTensor_(apply_5_4_1)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  long t1sz2 = t1->size[2];
  long t1st2 = t1->stride[2];
  long t1sz3 = t1->size[3];
  long t1st3 = t1->stride[3];
  long t1sz4 = t1->size[4];
  long t1st4 = t1->stride[4];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  long t2sz2 = t2->size[2];
  long t2st2 = t2->stride[2];
  long t2sz3 = t2->size[3];
  long t2st3 = t2->stride[3];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t1i2 = 0;
  long t1i3 = 0;
  long t1i4 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t2i2 = 0;
  long t2i3 = 0;
  long t3i0 = 0;
  while(t1i0 < t1sz0 && t2i0 < t2sz0) {
    long rr = (t1sz4-t1i4 < t2sz3-t2i3 ? t1sz4-t1i4 : t2sz3-t2i3);
    long r = (rr < t3sz0-t3i0 ? rr : t3sz0-t3i0);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1 + t1i2*t1st2 + t1i3*t1st3 + t1i4*t1st4, t1st4, t2data + t2i0*t2st0 + t2i1*t2st1 + t2i2*t2st2 + t2i3*t2st3, t2st3, t3data + t3i0*t3st0, t3st0, data);
    t1i4 += r;
    if(t1i4 == t1sz4) {
      t1i4 = 0;
      t1i3++;
      if(t1i3 == t1sz3) {
        t1i3 = 0;
        t1i2++;
        if(t1i2 == t1sz2) {
          t1i2 = 0;
          t1i1++;
          if(t1i1 == t1sz1) {
            t1i1 = 0;
            t1i0++;
          }
        }
      }
    }
    t2i3 += r;
    if(t2i3 == t2sz3) {
      t2i3 = 0;
      t2i2++;
      if(t2i2 == t2sz2) {
        t2i2 = 0;
        t2i1++;
        if(t2i1 == t2sz1) {
          t2i1 = 0;
          t2i0++;
        }
      }
    }
    t3i0 += r;
  }
}

static void THTensor_(apply_5_4_2)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  long t1sz2 = t1->size[2];
  long t1st2 = t1->stride[2];
  long t1sz3 = t1->size[3];
  long t1st3 = t1->stride[3];
  long t1sz4 = t1->size[4];
  long t1st4 = t1->stride[4];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  long t2sz2 = t2->size[2];
  long t2st2 = t2->stride[2];
  long t2sz3 = t2->size[3];
  long t2st3 = t2->stride[3];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t1i2 = 0;
  long t1i3 = 0;
  long t1i4 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t2i2 = 0;
  long t2i3 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  while(t1i0 < t1sz0 && t2i0 < t2sz0 && t3i0 < t3sz0) {
    long rr = (t1sz4-t1i4 < t2sz3-t2i3 ? t1sz4-t1i4 : t2sz3-t2i3);
    long r = (rr < t3sz1-t3i1 ? rr : t3sz1-t3i1);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1 + t1i2*t1st2 + t1i3*t1st3 + t1i4*t1st4, t1st4, t2data + t2i0*t2st0 + t2i1*t2st1 + t2i2*t2st2 + t2i3*t2st3, t2st3, t3data + t3i0*t3st0 + t3i1*t3st1, t3st1, data);
    t1i4 += r;
    if(t1i4 == t1sz4) {
      t1i4 = 0;
      t1i3++;
      if(t1i3 == t1sz3) {
        t1i3 = 0;
        t1i2++;
        if(t1i2 == t1sz2) {
          t1i2 = 0;
          t1i1++;
          if(t1i1 == t1sz1) {
            t1i1 = 0;
            t1i0++;
          }
        }
      }
    }
    t2i3 += r;
    if(t2i3 == t2sz3) {
      t2i3 = 0;
      t2i2++;
      if(t2i2 == t2sz2) {
        t2i2 = 0;
        t2i1++;
        if(t2i1 == t2sz1) {
          t2i1 = 0;
          t2i0++;
        }
      }
    }
    t3i1 += r;
    if(t3i1 == t3sz1) {
      t3i1 = 0;
      t3i0++;
    }
  }
}

static void THTensor_(apply_5_4_3)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  long t1sz2 = t1->size[2];
  long t1st2 = t1->stride[2];
  long t1sz3 = t1->size[3];
  long t1st3 = t1->stride[3];
  long t1sz4 = t1->size[4];
  long t1st4 = t1->stride[4];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  long t2sz2 = t2->size[2];
  long t2st2 = t2->stride[2];
  long t2sz3 = t2->size[3];
  long t2st3 = t2->stride[3];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  long t3sz2 = t3->size[2];
  long t3st2 = t3->stride[2];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t1i2 = 0;
  long t1i3 = 0;
  long t1i4 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t2i2 = 0;
  long t2i3 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  long t3i2 = 0;
  while(t1i0 < t1sz0 && t2i0 < t2sz0 && t3i0 < t3sz0) {
    long rr = (t1sz4-t1i4 < t2sz3-t2i3 ? t1sz4-t1i4 : t2sz3-t2i3);
    long r = (rr < t3sz2-t3i2 ? rr : t3sz2-t3i2);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1 + t1i2*t1st2 + t1i3*t1st3 + t1i4*t1st4, t1st4, t2data + t2i0*t2st0 + t2i1*t2st1 + t2i2*t2st2 + t2i3*t2st3, t2st3, t3data + t3i0*t3st0 + t3i1*t3st1 + t3i2*t3st2, t3st2, data);
    t1i4 += r;
    if(t1i4 == t1sz4) {
      t1i4 = 0;
      t1i3++;
      if(t1i3 == t1sz3) {
        t1i3 = 0;
        t1i2++;
        if(t1i2 == t1sz2) {
          t1i2 = 0;
          t1i1++;
          if(t1i1 == t1sz1) {
            t1i1 = 0;
            t1i0++;
          }
        }
      }
    }
    t2i3 += r;
    if(t2i3 == t2sz3) {
      t2i3 = 0;
      t2i2++;
      if(t2i2 == t2sz2) {
        t2i2 = 0;
        t2i1++;
        if(t2i1 == t2sz1) {
          t2i1 = 0;
          t2i0++;
        }
      }
    }
    t3i2 += r;
    if(t3i2 == t3sz2) {
      t3i2 = 0;
      t3i1++;
      if(t3i1 == t3sz1) {
        t3i1 = 0;
        t3i0++;
      }
    }
  }
}

static void THTensor_(apply_5_4_4)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  long t1sz2 = t1->size[2];
  long t1st2 = t1->stride[2];
  long t1sz3 = t1->size[3];
  long t1st3 = t1->stride[3];
  long t1sz4 = t1->size[4];
  long t1st4 = t1->stride[4];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  long t2sz2 = t2->size[2];
  long t2st2 = t2->stride[2];
  long t2sz3 = t2->size[3];
  long t2st3 = t2->stride[3];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  long t3sz2 = t3->size[2];
  long t3st2 = t3->stride[2];
  long t3sz3 = t3->size[3];
  long t3st3 = t3->stride[3];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t1i2 = 0;
  long t1i3 = 0;
  long t1i4 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t2i2 = 0;
  long t2i3 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  long t3i2 = 0;
  long t3i3 = 0;
  while(t1i0 < t1sz0 && t2i0 < t2sz0 && t3i0 < t3sz0) {
    long rr = (t1sz4-t1i4 < t2sz3-t2i3 ? t1sz4-t1i4 : t2sz3-t2i3);
    long r = (rr < t3sz3-t3i3 ? rr : t3sz3-t3i3);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1 + t1i2*t1st2 + t1i3*t1st3 + t1i4*t1st4, t1st4, t2data + t2i0*t2st0 + t2i1*t2st1 + t2i2*t2st2 + t2i3*t2st3, t2st3, t3data + t3i0*t3st0 + t3i1*t3st1 + t3i2*t3st2 + t3i3*t3st3, t3st3, data);
    t1i4 += r;
    if(t1i4 == t1sz4) {
      t1i4 = 0;
      t1i3++;
      if(t1i3 == t1sz3) {
        t1i3 = 0;
        t1i2++;
        if(t1i2 == t1sz2) {
          t1i2 = 0;
          t1i1++;
          if(t1i1 == t1sz1) {
            t1i1 = 0;
            t1i0++;
          }
        }
      }
    }
    t2i3 += r;
    if(t2i3 == t2sz3) {
      t2i3 = 0;
      t2i2++;
      if(t2i2 == t2sz2) {
        t2i2 = 0;
        t2i1++;
        if(t2i1 == t2sz1) {
          t2i1 = 0;
          t2i0++;
        }
      }
    }
    t3i3 += r;
    if(t3i3 == t3sz3) {
      t3i3 = 0;
      t3i2++;
      if(t3i2 == t3sz2) {
        t3i2 = 0;
        t3i1++;
        if(t3i1 == t3sz1) {
          t3i1 = 0;
          t3i0++;
        }
      }
    }
  }
}

static void THTensor_(apply_5_4_5)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  long t1sz2 = t1->size[2];
  long t1st2 = t1->stride[2];
  long t1sz3 = t1->size[3];
  long t1st3 = t1->stride[3];
  long t1sz4 = t1->size[4];
  long t1st4 = t1->stride[4];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  long t2sz2 = t2->size[2];
  long t2st2 = t2->stride[2];
  long t2sz3 = t2->size[3];
  long t2st3 = t2->stride[3];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  long t3sz2 = t3->size[2];
  long t3st2 = t3->stride[2];
  long t3sz3 = t3->size[3];
  long t3st3 = t3->stride[3];
  long t3sz4 = t3->size[4];
  long t3st4 = t3->stride[4];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t1i2 = 0;
  long t1i3 = 0;
  long t1i4 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t2i2 = 0;
  long t2i3 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  long t3i2 = 0;
  long t3i3 = 0;
  long t3i4 = 0;
  while(t1i0 < t1sz0 && t2i0 < t2sz0 && t3i0 < t3sz0) {
    long rr = (t1sz4-t1i4 < t2sz3-t2i3 ? t1sz4-t1i4 : t2sz3-t2i3);
    long r = (rr < t3sz4-t3i4 ? rr : t3sz4-t3i4);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1 + t1i2*t1st2 + t1i3*t1st3 + t1i4*t1st4, t1st4, t2data + t2i0*t2st0 + t2i1*t2st1 + t2i2*t2st2 + t2i3*t2st3, t2st3, t3data + t3i0*t3st0 + t3i1*t3st1 + t3i2*t3st2 + t3i3*t3st3 + t3i4*t3st4, t3st4, data);
    t1i4 += r;
    if(t1i4 == t1sz4) {
      t1i4 = 0;
      t1i3++;
      if(t1i3 == t1sz3) {
        t1i3 = 0;
        t1i2++;
        if(t1i2 == t1sz2) {
          t1i2 = 0;
          t1i1++;
          if(t1i1 == t1sz1) {
            t1i1 = 0;
            t1i0++;
          }
        }
      }
    }
    t2i3 += r;
    if(t2i3 == t2sz3) {
      t2i3 = 0;
      t2i2++;
      if(t2i2 == t2sz2) {
        t2i2 = 0;
        t2i1++;
        if(t2i1 == t2sz1) {
          t2i1 = 0;
          t2i0++;
        }
      }
    }
    t3i4 += r;
    if(t3i4 == t3sz4) {
      t3i4 = 0;
      t3i3++;
      if(t3i3 == t3sz3) {
        t3i3 = 0;
        t3i2++;
        if(t3i2 == t3sz2) {
          t3i2 = 0;
          t3i1++;
          if(t3i1 == t3sz1) {
            t3i1 = 0;
            t3i0++;
          }
        }
      }
    }
  }
}

static void THTensor_(apply_5_5_1)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  long t1sz2 = t1->size[2];
  long t1st2 = t1->stride[2];
  long t1sz3 = t1->size[3];
  long t1st3 = t1->stride[3];
  long t1sz4 = t1->size[4];
  long t1st4 = t1->stride[4];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  long t2sz2 = t2->size[2];
  long t2st2 = t2->stride[2];
  long t2sz3 = t2->size[3];
  long t2st3 = t2->stride[3];
  long t2sz4 = t2->size[4];
  long t2st4 = t2->stride[4];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t1i2 = 0;
  long t1i3 = 0;
  long t1i4 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t2i2 = 0;
  long t2i3 = 0;
  long t2i4 = 0;
  long t3i0 = 0;
  while(t1i0 < t1sz0 && t2i0 < t2sz0) {
    long rr = (t1sz4-t1i4 < t2sz4-t2i4 ? t1sz4-t1i4 : t2sz4-t2i4);
    long r = (rr < t3sz0-t3i0 ? rr : t3sz0-t3i0);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1 + t1i2*t1st2 + t1i3*t1st3 + t1i4*t1st4, t1st4, t2data + t2i0*t2st0 + t2i1*t2st1 + t2i2*t2st2 + t2i3*t2st3 + t2i4*t2st4, t2st4, t3data + t3i0*t3st0, t3st0, data);
    t1i4 += r;
    if(t1i4 == t1sz4) {
      t1i4 = 0;
      t1i3++;
      if(t1i3 == t1sz3) {
        t1i3 = 0;
        t1i2++;
        if(t1i2 == t1sz2) {
          t1i2 = 0;
          t1i1++;
          if(t1i1 == t1sz1) {
            t1i1 = 0;
            t1i0++;
          }
        }
      }
    }
    t2i4 += r;
    if(t2i4 == t2sz4) {
      t2i4 = 0;
      t2i3++;
      if(t2i3 == t2sz3) {
        t2i3 = 0;
        t2i2++;
        if(t2i2 == t2sz2) {
          t2i2 = 0;
          t2i1++;
          if(t2i1 == t2sz1) {
            t2i1 = 0;
            t2i0++;
          }
        }
      }
    }
    t3i0 += r;
  }
}

static void THTensor_(apply_5_5_2)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  long t1sz2 = t1->size[2];
  long t1st2 = t1->stride[2];
  long t1sz3 = t1->size[3];
  long t1st3 = t1->stride[3];
  long t1sz4 = t1->size[4];
  long t1st4 = t1->stride[4];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  long t2sz2 = t2->size[2];
  long t2st2 = t2->stride[2];
  long t2sz3 = t2->size[3];
  long t2st3 = t2->stride[3];
  long t2sz4 = t2->size[4];
  long t2st4 = t2->stride[4];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t1i2 = 0;
  long t1i3 = 0;
  long t1i4 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t2i2 = 0;
  long t2i3 = 0;
  long t2i4 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  while(t1i0 < t1sz0 && t2i0 < t2sz0 && t3i0 < t3sz0) {
    long rr = (t1sz4-t1i4 < t2sz4-t2i4 ? t1sz4-t1i4 : t2sz4-t2i4);
    long r = (rr < t3sz1-t3i1 ? rr : t3sz1-t3i1);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1 + t1i2*t1st2 + t1i3*t1st3 + t1i4*t1st4, t1st4, t2data + t2i0*t2st0 + t2i1*t2st1 + t2i2*t2st2 + t2i3*t2st3 + t2i4*t2st4, t2st4, t3data + t3i0*t3st0 + t3i1*t3st1, t3st1, data);
    t1i4 += r;
    if(t1i4 == t1sz4) {
      t1i4 = 0;
      t1i3++;
      if(t1i3 == t1sz3) {
        t1i3 = 0;
        t1i2++;
        if(t1i2 == t1sz2) {
          t1i2 = 0;
          t1i1++;
          if(t1i1 == t1sz1) {
            t1i1 = 0;
            t1i0++;
          }
        }
      }
    }
    t2i4 += r;
    if(t2i4 == t2sz4) {
      t2i4 = 0;
      t2i3++;
      if(t2i3 == t2sz3) {
        t2i3 = 0;
        t2i2++;
        if(t2i2 == t2sz2) {
          t2i2 = 0;
          t2i1++;
          if(t2i1 == t2sz1) {
            t2i1 = 0;
            t2i0++;
          }
        }
      }
    }
    t3i1 += r;
    if(t3i1 == t3sz1) {
      t3i1 = 0;
      t3i0++;
    }
  }
}

static void THTensor_(apply_5_5_3)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  long t1sz2 = t1->size[2];
  long t1st2 = t1->stride[2];
  long t1sz3 = t1->size[3];
  long t1st3 = t1->stride[3];
  long t1sz4 = t1->size[4];
  long t1st4 = t1->stride[4];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  long t2sz2 = t2->size[2];
  long t2st2 = t2->stride[2];
  long t2sz3 = t2->size[3];
  long t2st3 = t2->stride[3];
  long t2sz4 = t2->size[4];
  long t2st4 = t2->stride[4];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  long t3sz2 = t3->size[2];
  long t3st2 = t3->stride[2];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t1i2 = 0;
  long t1i3 = 0;
  long t1i4 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t2i2 = 0;
  long t2i3 = 0;
  long t2i4 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  long t3i2 = 0;
  while(t1i0 < t1sz0 && t2i0 < t2sz0 && t3i0 < t3sz0) {
    long rr = (t1sz4-t1i4 < t2sz4-t2i4 ? t1sz4-t1i4 : t2sz4-t2i4);
    long r = (rr < t3sz2-t3i2 ? rr : t3sz2-t3i2);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1 + t1i2*t1st2 + t1i3*t1st3 + t1i4*t1st4, t1st4, t2data + t2i0*t2st0 + t2i1*t2st1 + t2i2*t2st2 + t2i3*t2st3 + t2i4*t2st4, t2st4, t3data + t3i0*t3st0 + t3i1*t3st1 + t3i2*t3st2, t3st2, data);
    t1i4 += r;
    if(t1i4 == t1sz4) {
      t1i4 = 0;
      t1i3++;
      if(t1i3 == t1sz3) {
        t1i3 = 0;
        t1i2++;
        if(t1i2 == t1sz2) {
          t1i2 = 0;
          t1i1++;
          if(t1i1 == t1sz1) {
            t1i1 = 0;
            t1i0++;
          }
        }
      }
    }
    t2i4 += r;
    if(t2i4 == t2sz4) {
      t2i4 = 0;
      t2i3++;
      if(t2i3 == t2sz3) {
        t2i3 = 0;
        t2i2++;
        if(t2i2 == t2sz2) {
          t2i2 = 0;
          t2i1++;
          if(t2i1 == t2sz1) {
            t2i1 = 0;
            t2i0++;
          }
        }
      }
    }
    t3i2 += r;
    if(t3i2 == t3sz2) {
      t3i2 = 0;
      t3i1++;
      if(t3i1 == t3sz1) {
        t3i1 = 0;
        t3i0++;
      }
    }
  }
}

static void THTensor_(apply_5_5_4)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  long t1sz2 = t1->size[2];
  long t1st2 = t1->stride[2];
  long t1sz3 = t1->size[3];
  long t1st3 = t1->stride[3];
  long t1sz4 = t1->size[4];
  long t1st4 = t1->stride[4];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  long t2sz2 = t2->size[2];
  long t2st2 = t2->stride[2];
  long t2sz3 = t2->size[3];
  long t2st3 = t2->stride[3];
  long t2sz4 = t2->size[4];
  long t2st4 = t2->stride[4];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  long t3sz2 = t3->size[2];
  long t3st2 = t3->stride[2];
  long t3sz3 = t3->size[3];
  long t3st3 = t3->stride[3];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t1i2 = 0;
  long t1i3 = 0;
  long t1i4 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t2i2 = 0;
  long t2i3 = 0;
  long t2i4 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  long t3i2 = 0;
  long t3i3 = 0;
  while(t1i0 < t1sz0 && t2i0 < t2sz0 && t3i0 < t3sz0) {
    long rr = (t1sz4-t1i4 < t2sz4-t2i4 ? t1sz4-t1i4 : t2sz4-t2i4);
    long r = (rr < t3sz3-t3i3 ? rr : t3sz3-t3i3);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1 + t1i2*t1st2 + t1i3*t1st3 + t1i4*t1st4, t1st4, t2data + t2i0*t2st0 + t2i1*t2st1 + t2i2*t2st2 + t2i3*t2st3 + t2i4*t2st4, t2st4, t3data + t3i0*t3st0 + t3i1*t3st1 + t3i2*t3st2 + t3i3*t3st3, t3st3, data);
    t1i4 += r;
    if(t1i4 == t1sz4) {
      t1i4 = 0;
      t1i3++;
      if(t1i3 == t1sz3) {
        t1i3 = 0;
        t1i2++;
        if(t1i2 == t1sz2) {
          t1i2 = 0;
          t1i1++;
          if(t1i1 == t1sz1) {
            t1i1 = 0;
            t1i0++;
          }
        }
      }
    }
    t2i4 += r;
    if(t2i4 == t2sz4) {
      t2i4 = 0;
      t2i3++;
      if(t2i3 == t2sz3) {
        t2i3 = 0;
        t2i2++;
        if(t2i2 == t2sz2) {
          t2i2 = 0;
          t2i1++;
          if(t2i1 == t2sz1) {
            t2i1 = 0;
            t2i0++;
          }
        }
      }
    }
    t3i3 += r;
    if(t3i3 == t3sz3) {
      t3i3 = 0;
      t3i2++;
      if(t3i2 == t3sz2) {
        t3i2 = 0;
        t3i1++;
        if(t3i1 == t3sz1) {
          t3i1 = 0;
          t3i0++;
        }
      }
    }
  }
}

static void THTensor_(apply_5_5_5)(THTensor *t1, THTensor *t2, THTensor *t3, void (*func)(long, real*, long, real*, long, real*, long, void*), void *data)
{
  long t1sz0 = t1->size[0];
  long t1st0 = t1->stride[0];
  long t1sz1 = t1->size[1];
  long t1st1 = t1->stride[1];
  long t1sz2 = t1->size[2];
  long t1st2 = t1->stride[2];
  long t1sz3 = t1->size[3];
  long t1st3 = t1->stride[3];
  long t1sz4 = t1->size[4];
  long t1st4 = t1->stride[4];
  real *t1data = t1->storage->data + t1->storageOffset;
  long t2sz0 = t2->size[0];
  long t2st0 = t2->stride[0];
  long t2sz1 = t2->size[1];
  long t2st1 = t2->stride[1];
  long t2sz2 = t2->size[2];
  long t2st2 = t2->stride[2];
  long t2sz3 = t2->size[3];
  long t2st3 = t2->stride[3];
  long t2sz4 = t2->size[4];
  long t2st4 = t2->stride[4];
  real *t2data = t2->storage->data + t2->storageOffset;
  long t3sz0 = t3->size[0];
  long t3st0 = t3->stride[0];
  long t3sz1 = t3->size[1];
  long t3st1 = t3->stride[1];
  long t3sz2 = t3->size[2];
  long t3st2 = t3->stride[2];
  long t3sz3 = t3->size[3];
  long t3st3 = t3->stride[3];
  long t3sz4 = t3->size[4];
  long t3st4 = t3->stride[4];
  real *t3data = t3->storage->data + t3->storageOffset;
  long t1i0 = 0;
  long t1i1 = 0;
  long t1i2 = 0;
  long t1i3 = 0;
  long t1i4 = 0;
  long t2i0 = 0;
  long t2i1 = 0;
  long t2i2 = 0;
  long t2i3 = 0;
  long t2i4 = 0;
  long t3i0 = 0;
  long t3i1 = 0;
  long t3i2 = 0;
  long t3i3 = 0;
  long t3i4 = 0;
  while(t1i0 < t1sz0 && t2i0 < t2sz0 && t3i0 < t3sz0) {
    long rr = (t1sz4-t1i4 < t2sz4-t2i4 ? t1sz4-t1i4 : t2sz4-t2i4);
    long r = (rr < t3sz4-t3i4 ? rr : t3sz4-t3i4);
    func(r, t1data + t1i0*t1st0 + t1i1*t1st1 + t1i2*t1st2 + t1i3*t1st3 + t1i4*t1st4, t1st4, t2data + t2i0*t2st0 + t2i1*t2st1 + t2i2*t2st2 + t2i3*t2st3 + t2i4*t2st4, t2st4, t3data + t3i0*t3st0 + t3i1*t3st1 + t3i2*t3st2 + t3i3*t3st3 + t3i4*t3st4, t3st4, data);
    t1i4 += r;
    if(t1i4 == t1sz4) {
      t1i4 = 0;
      t1i3++;
      if(t1i3 == t1sz3) {
        t1i3 = 0;
        t1i2++;
        if(t1i2 == t1sz2) {
          t1i2 = 0;
          t1i1++;
          if(t1i1 == t1sz1) {
            t1i1 = 0;
            t1i0++;
          }
        }
      }
    }
    t2i4 += r;
    if(t2i4 == t2sz4) {
      t2i4 = 0;
      t2i3++;
      if(t2i3 == t2sz3) {
        t2i3 = 0;
        t2i2++;
        if(t2i2 == t2sz2) {
          t2i2 = 0;
          t2i1++;
          if(t2i1 == t2sz1) {
            t2i1 = 0;
            t2i0++;
          }
        }
      }
    }
    t3i4 += r;
    if(t3i4 == t3sz4) {
      t3i4 = 0;
      t3i3++;
      if(t3i3 == t3sz3) {
        t3i3 = 0;
        t3i2++;
        if(t3i2 == t3sz2) {
          t3i2 = 0;
          t3i1++;
          if(t3i1 == t3sz1) {
            t3i1 = 0;
            t3i0++;
          }
        }
      }
    }
  }
}

static void (*THTensor_(apply_funcs)[5])(THTensor*, void (*)(long, real*, long, void*), void *) = {
THTensor_(apply_1),
THTensor_(apply_2),
THTensor_(apply_3),
THTensor_(apply_4),
THTensor_(apply_5),
};

static void (*THTensor_(apply2_funcs)[5][5])(THTensor*, THTensor*, void (*)(long, real*, long, real*, long, void*), void *) = {
{THTensor_(apply_1_1), THTensor_(apply_1_2), THTensor_(apply_1_3), THTensor_(apply_1_4), THTensor_(apply_1_5)},
{THTensor_(apply_2_1), THTensor_(apply_2_2), THTensor_(apply_2_3), THTensor_(apply_2_4), THTensor_(apply_2_5)},
{THTensor_(apply_3_1), THTensor_(apply_3_2), THTensor_(apply_3_3), THTensor_(apply_3_4), THTensor_(apply_3_5)},
{THTensor_(apply_4_1), THTensor_(apply_4_2), THTensor_(apply_4_3), THTensor_(apply_4_4), THTensor_(apply_4_5)},
{THTensor_(apply_5_1), THTensor_(apply_5_2), THTensor_(apply_5_3), THTensor_(apply_5_4), THTensor_(apply_5_5)},
};
static void (*THTensor_(apply3_funcs)[5][5][5])(THTensor*, THTensor*, THTensor*, void (*)(long, real*, long, real*, long, real*, long, void*), void *) = {
{{THTensor_(apply_1_1_1), THTensor_(apply_1_1_2), THTensor_(apply_1_1_3), THTensor_(apply_1_1_4), THTensor_(apply_1_1_5)},
 {THTensor_(apply_1_2_1), THTensor_(apply_1_2_2), THTensor_(apply_1_2_3), THTensor_(apply_1_2_4), THTensor_(apply_1_2_5)},
 {THTensor_(apply_1_3_1), THTensor_(apply_1_3_2), THTensor_(apply_1_3_3), THTensor_(apply_1_3_4), THTensor_(apply_1_3_5)},
 {THTensor_(apply_1_4_1), THTensor_(apply_1_4_2), THTensor_(apply_1_4_3), THTensor_(apply_1_4_4), THTensor_(apply_1_4_5)},
 {THTensor_(apply_1_5_1), THTensor_(apply_1_5_2), THTensor_(apply_1_5_3), THTensor_(apply_1_5_4), THTensor_(apply_1_5_5)}},
{{THTensor_(apply_2_1_1), THTensor_(apply_2_1_2), THTensor_(apply_2_1_3), THTensor_(apply_2_1_4), THTensor_(apply_2_1_5)},
 {THTensor_(apply_2_2_1), THTensor_(apply_2_2_2), THTensor_(apply_2_2_3), THTensor_(apply_2_2_4), THTensor_(apply_2_2_5)},
 {THTensor_(apply_2_3_1), THTensor_(apply_2_3_2), THTensor_(apply_2_3_3), THTensor_(apply_2_3_4), THTensor_(apply_2_3_5)},
 {THTensor_(apply_2_4_1), THTensor_(apply_2_4_2), THTensor_(apply_2_4_3), THTensor_(apply_2_4_4), THTensor_(apply_2_4_5)},
 {THTensor_(apply_2_5_1), THTensor_(apply_2_5_2), THTensor_(apply_2_5_3), THTensor_(apply_2_5_4), THTensor_(apply_2_5_5)}},
{{THTensor_(apply_3_1_1), THTensor_(apply_3_1_2), THTensor_(apply_3_1_3), THTensor_(apply_3_1_4), THTensor_(apply_3_1_5)},
 {THTensor_(apply_3_2_1), THTensor_(apply_3_2_2), THTensor_(apply_3_2_3), THTensor_(apply_3_2_4), THTensor_(apply_3_2_5)},
 {THTensor_(apply_3_3_1), THTensor_(apply_3_3_2), THTensor_(apply_3_3_3), THTensor_(apply_3_3_4), THTensor_(apply_3_3_5)},
 {THTensor_(apply_3_4_1), THTensor_(apply_3_4_2), THTensor_(apply_3_4_3), THTensor_(apply_3_4_4), THTensor_(apply_3_4_5)},
 {THTensor_(apply_3_5_1), THTensor_(apply_3_5_2), THTensor_(apply_3_5_3), THTensor_(apply_3_5_4), THTensor_(apply_3_5_5)}},
{{THTensor_(apply_4_1_1), THTensor_(apply_4_1_2), THTensor_(apply_4_1_3), THTensor_(apply_4_1_4), THTensor_(apply_4_1_5)},
 {THTensor_(apply_4_2_1), THTensor_(apply_4_2_2), THTensor_(apply_4_2_3), THTensor_(apply_4_2_4), THTensor_(apply_4_2_5)},
 {THTensor_(apply_4_3_1), THTensor_(apply_4_3_2), THTensor_(apply_4_3_3), THTensor_(apply_4_3_4), THTensor_(apply_4_3_5)},
 {THTensor_(apply_4_4_1), THTensor_(apply_4_4_2), THTensor_(apply_4_4_3), THTensor_(apply_4_4_4), THTensor_(apply_4_4_5)},
 {THTensor_(apply_4_5_1), THTensor_(apply_4_5_2), THTensor_(apply_4_5_3), THTensor_(apply_4_5_4), THTensor_(apply_4_5_5)}},
{{THTensor_(apply_5_1_1), THTensor_(apply_5_1_2), THTensor_(apply_5_1_3), THTensor_(apply_5_1_4), THTensor_(apply_5_1_5)},
 {THTensor_(apply_5_2_1), THTensor_(apply_5_2_2), THTensor_(apply_5_2_3), THTensor_(apply_5_2_4), THTensor_(apply_5_2_5)},
 {THTensor_(apply_5_3_1), THTensor_(apply_5_3_2), THTensor_(apply_5_3_3), THTensor_(apply_5_3_4), THTensor_(apply_5_3_5)},
 {THTensor_(apply_5_4_1), THTensor_(apply_5_4_2), THTensor_(apply_5_4_3), THTensor_(apply_5_4_4), THTensor_(apply_5_4_5)},
 {THTensor_(apply_5_5_1), THTensor_(apply_5_5_2), THTensor_(apply_5_5_3), THTensor_(apply_5_5_4), THTensor_(apply_5_5_5)}},
};
void THTensor_(apply)(THTensor *t1,
                      void (*func)(long, real*, long, void*),
                      void *data)
{
  if(THTensor_(isContiguous)(t1))
    func(THTensor_(nElement)(t1), THTensor_(data)(t1), 1, data);
  else if(t1->nDimension <= 5)
    (THTensor_(apply_funcs)[t1->nDimension-1])(t1, func, data);
  else
    THError("apply on that many dimensions not support yet");
}

void THTensor_(apply2)(THTensor *t1,
                       THTensor *t2,
                       void (*func)(long, real*, long, real*, long, void*),
                       void *data)
{
  if(THTensor_(isContiguous)(t1) && THTensor_(isContiguous)(t2))
    func(THTensor_(nElement)(t1), THTensor_(data)(t1), 1, THTensor_(data)(t2), 1, data);
  else if(t1->nDimension <= 5 && t2->nDimension <= 5)
    (THTensor_(apply2_funcs)[t1->nDimension-1][t2->nDimension-1])(t1, t2, func, data);
  else
    THError("apply on that many dimensions not support yet");
}

void THTensor_(apply3)(THTensor *t1,
                       THTensor *t2,
                       THTensor *t3,
                       void (*func)(long, real*, long, real*, long, real*, long, void*),
                       void *data)
{
  if(THTensor_(isContiguous)(t1) && THTensor_(isContiguous)(t2) && THTensor_(isContiguous)(t3))
    func(THTensor_(nElement)(t1), THTensor_(data)(t1), 1, THTensor_(data)(t2), 1, THTensor_(data)(t3), 1, data);
  else if(t1->nDimension <= 5 && t2->nDimension <= 5 && t3->nDimension <= 5)
    (THTensor_(apply3_funcs)[t1->nDimension-1][t2->nDimension-1][t3->nDimension-1])(t1, t2, t3, func, data);
  else
    THError("apply on that many dimensions not support yet");
}

#endif

