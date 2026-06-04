#include<stdio.h>
int main()
{
    int arr[5] = {1,2,3,4,5};

    int n;
    printf("Enter your choice to remove: \n");
    scanf("%d", &n);

    for(int i = n; i < 5; i++)
    {
        arr[i] = arr[i+1];
    }
    for(int i = 0; i < sizeof(arr)/4; i++)
    printf("%d", arr[i]);
    printf("\n");

    int k;
    printf("Enter your replacement:\n");
    scanf("%d", &k);
    for(int j = sizeof(arr)/4; j > n; j--)
    {
        arr[j] = arr[j-1];
    }

    arr[n]=k;
    printf("After update:\n");
    for(int i = 0; i < sizeof(arr)/4; i++)
    printf("%d", arr[i]);


}