#include<stdio.h>
int main()
{
    char arr[6]={"pratik"};
    char *p = arr;
    printf("Address of my name:%p\n",p);
    for(int i = 0; i < sizeof(arr); i++)
    printf("Charceter of my name:%c\n",*(p+i));
}