#include<stdio.h>

int main()
{
    char Doouble[30]={"aabbbccddeeefghijk"};
    char single;
    int i=0;
    while (Doouble[i]!='\0')
    {
    if(single!=Doouble[i])
    {
        printf("%c", Doouble[i]);
    }
    single = Doouble[i];
    i++;  
    }
}