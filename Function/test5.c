#include <stdio.h>
void add()
{
    int num, sum = 0;
    printf("Enter your number:\n");
    scanf("%d",&num);
    for(int i = 0; i <=num; i++)
    {
        sum = sum + i;
    }
    printf ("The sum of number is %d\n", sum);
    static int i;
    i = 0;
    if(i == 2)
    {
    i++;
    add();
    }
}
int main()
{
    add();
}