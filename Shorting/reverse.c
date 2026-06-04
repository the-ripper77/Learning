#include<stdio.h>
int main()
{
    int rev[5] = {2,4,6,0,1};
    int p;
    int size = sizeof(rev)/4;
    int i = 0;
    while(i < size/2)
    {
        p = rev[i];
        rev[i] = rev[size-1-i];
        rev[size-1-i] = p;
        i++;
    }
    for(int i =0; i<size; i++)
    printf("%d ", rev[i]);

}


