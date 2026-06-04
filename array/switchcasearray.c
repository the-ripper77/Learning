#include<stdio.h>
int main()
{
    char pra[100];
    int a=0, e=0, i=0, o=0, u=0, choice;
    printf("Enter your choice:\n");
    scanf("%d",& choice);
    switch (choice)
    {
    case 1:
    printf("Enter your name:\n");
    scanf("%s",pra);
    for (int i=0; i<= sizeof(pra); i++)
    {
        if( pra[i]=='a'|| pra[i]=='A')
        a++;
    }
    printf("the number of vowel a is:%d\n",a);
    break;
    case 2:
    printf("Enter your name:\n");
    scanf("%s",pra);
    for (int i=0; i<= sizeof(pra); i++)
    {
        if( pra[i]=='e'|| pra[i]=='E')
        e++;
    }
    printf("the number of vowel e is:%d\n",e);
    break;
    case 3:
    printf("Enter your name:\n");
    scanf("%s",pra);
    for (int j=0; j<= sizeof(pra); j++)
    {
        if( pra[j]=='i'|| pra[j]=='I')
        i++;
    }
    printf("the number of vowel i is:%d\n",i);
    break;
    case 4:
    printf("Enter your name:\n");
    scanf("%s",pra);
    for (int i=0; i<= sizeof(pra); i++)
    {
        if( pra[i]=='o'|| pra[i]=='O')
        o++;
    }
    printf("the number of vowel o is:%d\n",o);
    break;
    case 5:
    printf("Enter your name:\n");
    scanf("%s",pra);
    for (int j=0; j<= sizeof(pra); j++)
    {
        if( pra[j]=='u'|| pra[j]=='U')
        u++;
    }
    printf("the number of vowel u is:%d\n",u);
    break;
    default:
    printf ("Invalide");
    }    
}