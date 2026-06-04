# include<stdio.h>
int main()
{
    int sum=0,rem,num;
    printf("Enter your number:\n");
    scanf("%d",&num);
    int check=num;
    for(int i = num; i!= 0; i=10)
    {
        rem=i%10;
        sum=rem+(sum*10);
    }
    if(sum==check)
    {
        printf("It is palindrome");
    }
    else
    {
        printf("It is not palindrome");
    }
}