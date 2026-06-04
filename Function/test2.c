#include<stdio.h>

int counterchar(char arr[]);

int main()
{
    char arr2[] = {"bling bang bang born"};
    int number = counterchar(arr2);
    printf("The total number of arr2: %d\n",number);
}

int counterchar(char arr[])
{
    int count = 0;
    while(arr[count]!= '\0')
    {
        count ++;
    }
    return count;
}


