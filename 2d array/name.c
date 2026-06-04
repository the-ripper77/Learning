#include <stdio.h>
int main ()
{
    char pra[5][15];
    printf("Enter Your name:\n");
    for( int i = 0; i < 5; i++)
    {
        scanf("%s",pra[i]);
    }
    for(int i=0;i<5;i++)
    printf("%s ",pra[i]);
} 