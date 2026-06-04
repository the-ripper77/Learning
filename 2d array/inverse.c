# include <stdio.h>
int main ()
{
    int a = 5, b = 2 ;
    int *pa = &a;
    int *pb = &b;
    int *padd = *pa +*pb;
    printf("%d",*padd);
}