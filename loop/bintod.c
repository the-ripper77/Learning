#include<stdio.h>
int main()
{
    int num,rem,sum=0,ans;
    printf("Enter your number:\n");
    scanf("%d",&num);
    while(num!=0)
    {
        rem =num%2;
        num= num/2;
        sum=(sum*10)+rem;
    }
    printf("Decimal Number:\n%d",sum);
}
  