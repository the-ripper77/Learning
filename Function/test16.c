#include<stdio.h>
void *pratik (int *arr)
{
    printf("Enter the Item:\n");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d",arr+i);
    }
}

int main()
{
    int arr[5];
    pratik(arr);
    for (int i = 0; i < 5; i++)
    {
    printf("%d\n",*(arr+i));
    }
}