#include<stdio.h>

int main()
{
    int ohh[3] = {1,2,3};
    int i = sizeof(ohh)/4 - 1;
    while(i>=0)
    {
        printf("%d ",ohh[i]);
        i--;
    }
}