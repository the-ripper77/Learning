#include<stdio.h>
int main()
{
    int rem,sum=0,num;
    printf("Enter your number:\n");
    scanf("%d",&num);
    int check = num;
    for(int i = num; i!=0; i=i/10)
    {
        rem = i%10;
        sum= sum + rem * rem * rem;
    }
    if (sum==check)
        {

        printf("Armstrong Number");
        }
    else
        {
        printf("Not Armstrong Number");
        }
}
