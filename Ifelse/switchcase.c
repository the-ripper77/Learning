#include<stdio.h>
int main()
{
    int a, b, choice;
    printf(" Enter two number \n");
    scanf("%d%d",&a,&b);
    printf("Enter your choice");
    scanf("%d",& choice);
    switch (choice)
    {
        case 1:
        int sum=a+b;
        printf("The addition of number :%d",sum);
        break;
        case 2:
        int mul=a*b;
        printf("The multiplication of number :%d",mul);
        break;
        case 3:
        int div=a/b;
        printf("The divition of number :%d",div);
        break;
        case 4:
        int sub=a-b;
        printf("The subtraction of number :%d",sub);
        break;
        default:
        printf ("Invalide");
    }    

}