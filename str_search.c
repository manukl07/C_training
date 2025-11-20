#include <stdio.h>
#include <string.h>
void main()
{
    char des [100] = "we are bad boys";
    char se [10] = "bad";
    if ((strstr(des,se)))
    printf("Found");
    else
    printf("Not found");
}