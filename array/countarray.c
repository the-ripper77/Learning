#include <stdio.h>

int main()
{
    char stri[100];

    int a=0,e=0,i=0,o=0,u=0;

    printf("Enter:\n");
    scanf("%[^\n]s", stri);
    
    for (int j = 0; j < sizeof(stri); j++)
    {
        if(stri[j]=='a'|| stri[j]=='A')
            a++;

        else if(stri[j]=='e'|| stri[j]=='E')
            e++;

        else if(stri[j]=='i'|| stri[j]=='I')
            i++;

        else if(stri[j]=='o'|| stri[j]=='O')
            o++;

        else if(stri[j]=='u'|| stri[j]=='U')
            u++;
    }

    printf("Number of vowel a: %ld\n",a);
    printf("Number of vowel e: %ld\n",e);
    printf("Number of vowel i: %ld\n",i);
    printf("Number of vowel o: %ld\n",o);
    printf("Number of vowel u: %ld\n",u);

}

