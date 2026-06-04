#include<stdio.h>
int main()
{
    printf("Print even number from 11 to 50\n");
    for(int i = 11; i <= 50; i++)
    {
        if(i%2==0)
        {
            printf("%d ", i);
            if(i%5==0)
            {
                printf("\n");
            }
        }
    }
    return 0;
}