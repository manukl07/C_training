#include <stdio.h>
int myadd(int x, int y)
{
    int sum = x*x + y*y;
    return sum;
}
void main()
{
    int x = 9, y = 1;
    printf("sum is %d",myadd(x,y));
}