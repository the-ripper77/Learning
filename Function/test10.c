#include<stdio.h>
void fib (int x)
{
    int a = 0, b = 1;
    printf("%d ",a);
    printf("%d ",b);
    for(int i = 2; i < x; i++)
    {
        int c = a + b;
        a = b;
        b = c;
        printf("%d ",c);
    }
}
int main()
{
    int x;
    printf ("Enter the step:\n");
    scanf("%d",&x);
    fib(x);
}