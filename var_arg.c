#include <stdio.h>
#include <stdarg.h>
void add(int count,...)
{
    va_list bag;
    int result;
    va_start (bag, count);
    for(int i=1; i<=count; i++)
    {
        int n = va_arg(bag,int);
        result = result+n;
    }
    va_end(bag);
    printf("%d",result);
}
void main()
{
    add(6,12,36,48,45,78,55);
}  