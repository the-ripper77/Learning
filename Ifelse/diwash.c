#include <stdio.h>
int main()
{
    int num, sum = 0;
    printf("Check the two digit number if it is divisible or not:\n");
    scanf("%d",&num);
    if ( num>=10 && num <=99)
    {
    int x = num/10;
    int y = num%10;
    if (x%y==0)
    {
        printf("It is divisible");
    }
    else
    {
        printf("It is not divisible");
    }
    }
}