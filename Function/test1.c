#include<stdio.h>
void add(int x, float y);
int main()
{
    int  a = 5;
    printf ("%d\n", a);
    add (2, 4.5);
}
void add(int a, float b)
{
    float c = a+ b;
    printf("%.2f \n", c);
}
