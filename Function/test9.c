#include<stdio.h>
int palin(int num)
{
    static int sum = 0, rev;

    if (num != 0)
    {
        rev = num % 10;
        sum = rev + (sum * 10);
        num = num/10;
        palin(num);
        return sum;
    }
}
int main()
{
    int num;
    printf("Enter number:\n");
    scanf("%d", &num);
    int ans = palin(num);
    printf("%d\n",ans);
    if (ans == num)
    {
        printf("It is palindrome");
    }
    else
    printf("It is not palindrome");
    
}

