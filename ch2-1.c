#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void) {
  char c;
  unsigned char c_pos;
  short a;
  unsigned short a_pos;
  long b;
  unsigned long b_pos;
  float f;

  /* using limit.h and float.h */
  
  printf("char min %d, char max %d, uchar min %d, uchar max %d\n",
              SCHAR_MIN, SCHAR_MAX, 0, UCHAR_MAX);
  printf("short min %d, short max %d, ushort min %d, ushort max %d\n",
              SHRT_MIN, SHRT_MAX, 0, USHRT_MAX);
  printf("long min %ld, long max %ld, ulong min %lu, ulong max %lu\n",
              LONG_MIN, LONG_MAX, 0, ULONG_MAX);
  printf("float min %f, float max %f, double float min %lf, double float max %lf\n", 
        FLT_MIN, FLT_MAX, DBL_MIN, DBL_MAX);

  return 0;
}
