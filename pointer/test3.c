#include <stdio.h>
void main()
{
    char por[5];
    printf("Enter the user character:\n");
    for(int i = 0; i < 5; i++)
    {
        fflush(stdin);
        scanf("%c", (por + i));
    }
    printf("pointer store:\n");
    for(int j = 0; j < 5; j++)
    {
        char *p;
        *p = por[j];
        printf ("%c",*p);
    }
}