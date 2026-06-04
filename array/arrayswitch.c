#include<stdio.h>

int main()
{
    char pra[100];
    //char vows[100];
    printf("Enter your name:\n");
    scanf("%[^\n]s",pra);
    int a=0, e=0, i=0, o=0, u=0;
    int j=0;
    while (pra[j]!='\0')
    {
    //vows[j] = pra[j];
        switch(pra[j])
            {
        case 'a': a++;
        break;
        case 'e': e++;
        break;
        case 'i': i++;
        break;
        case 'o': o++;
        break;
        case 'u': u++;
        break;
        default:
            }
        printf("%c", pra[j]);
        j++;   
    }
        printf("\n");
        printf("the number of vowel a is:%d\n",a);
        printf("the number of vowel e is:%d\n",e);
        printf("the number of vowel i is:%d\n",i);
        printf("the number of vowel o is:%d\n",o);
        printf("the number of vowel u is:%d\n",u);
}