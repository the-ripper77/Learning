#include <stdio.h>

int main()
{
    char luck[]={1,2,3,4,5,6,7,8,9,10};
    printf("Find your luck\n");
    for(int i=1;i<=10;i++)
    {
        printf("%d ",luck[i]);
    }
    int g;
    printf("\n");
    printf("Enter your guess:\n");
    scanf("%d",&g);
    if(g==10)
    {
        printf("you won");
    }
    else
    {
        printf("next time");
    }

}