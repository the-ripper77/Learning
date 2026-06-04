#include <stdio.h>
int main()
{
    int arr[5] = {9,6,1,2,3};
    int *a = &arr[0];
    int *b = &arr[1];
    int *c = &arr[2];
    int *d = &arr[3];
    int *e = &arr[4];
    printf("%d %d %d %d %d",*a-8,*b-4,*c+2,*d+4,*e+6);
}