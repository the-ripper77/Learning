#include<stdio.h>

void rev_arr(int *p, int size); //int rev_arr(int arr[], int size)

int main()
  
{
    int arr[9] = {1,2,3,4,5,6,7,8,9};

    int size = sizeof(arr)/4;

    rev_arr(arr, size);

    for(int i = 0; i < size; i++)
        printf("%d\n", arr[i]);

}

void rev_arr(int *p, int size)
{
    static int i = 0;

    if(i < (size)/2)
    {
        int temp = *(p + i);
        *(p + i) = *(p + (size-1) - i);
        *(p + (size-1) - i) = temp;
        i++;
        rev_arr(p, size);
    }
}
