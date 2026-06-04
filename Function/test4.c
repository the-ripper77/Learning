#include <stdio.h>
void star()
{
    for( int i = 0; i < 7; i++)
    {
        for(int j = 1; j < 7 - i; j++)
        {
            printf (" ");
        }
        for(int k = 0; k <= i; k++)
        {
            printf("* ");
        }
        for(int p = 1; p < 7 - i; p++)
        {
            printf(" ");
        }
        if (i==7)
        break;
        printf("\n");
    }
    for(int i = 0; i < 6; i++)
    {
        for(int j = 0 ; j <= i; j++)
        {
            printf(" ");
        }
        for(int k = i; k < 6; k ++)
        {
            printf("* ");
        }
        for( int p = 0; p <= i; p++)
        {
            printf(" ");
        }
        if(i==6)
        break;
        printf("\n");
    }
}
int main()
{
    star();
}