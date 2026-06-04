#include<stdio.h>
void main()
{
    char name [] ={"My name is pratik giri"};
    name [11] = 'P';
    name [18] = 'G';
    printf("%x\n", name) ;
    for( int i=0; i<=21; i++)
    {
        printf("%c", name[i],name[11],name[18]);
    }
}