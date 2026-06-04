#include<stdio.h>

int main()
{
char name[30];
printf("Enter A to B:\n");
for(int i=0; i<26; i++)
    {
        fflush(stdin);
    scanf("%c",(name+i));
    }
printf("Result:");
for(int i=0; i<26; i++)
    {
    printf("%c",name[i]);
    }
}