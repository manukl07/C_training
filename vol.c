#include <stdio.h>
int volume(int l,int b,int h)
{
    int vol = l*b*h;
    return vol;
}
void main()
{
    int l = 5;
    int b = 8;
    int h = 7;
    printf("%d",volume(l,b,h));
}