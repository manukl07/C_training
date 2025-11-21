#include <stdio.h>
#include <stdlib.h>
void main()
{
    float *p = (float *)calloc(4,sizeof(float));
    p[0] = 90.8;
    p[1] = 33.4;
    p[2] = 89.5;
    p[3] = 77.6;
    printf("%f",p[0]);
    free(p);
}