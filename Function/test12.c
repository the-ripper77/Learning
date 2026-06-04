#include<stdio.h>
void swap(int*a,int*b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
    printf("A = %d\n",*a);
    printf("B = %d\n",*b);
}
int main()
{
    int a,b;
    a = 7;
    b = 10;
    swap(&a,&b);
}