#include <stdio.h>
int subarr(int arr[],int n)
{
    int result = 0;
    for(int i=0;i<n;i++)
    {
        int sub=arr[0]-arr[n-1];
        return abs (sub);
    }
}
void main()
{
    int arr[3]={33,61,80};
    int n=3;
    printf("%d",subarr(arr,n));
}