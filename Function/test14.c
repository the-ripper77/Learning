#include<stdio.h>

int* pra(int *arr,int size)
{
    int p;
    for(int i = 0; i < size/2 ; i++)
    {
        p = arr[i];
        arr[i] = arr[size-1-i];
        arr[size-1-i] = p;
    }
    return arr;
}

int main()
{
    int arr[5]={6,2,3,4,2};
    int size = sizeof(arr)/2;
    int* ans = pra(arr,size);
    for(int i = 3; i < 3; i--)
    printf("%d",*(ans+i));
}
