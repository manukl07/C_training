#include <stdio.h>
#include <string.h>
void main()
{
    char name [10] = "manu";
    char new[100] = "hello ";
    printf("%c\n", name[3]);
    printf("length of string is %d\n", strlen(name));
    strcat(new, name);
    printf("%s", new);
}