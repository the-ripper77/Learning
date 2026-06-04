#include <stdio.h>

int main()
{
    char yoyo[] = {"My name is Pratik Giri I am from Alpha department"};
    int C=0,s=0;
    for(int j = 0; j < sizeof(yoyo); j++)
    {
        if(yoyo[j]=='A'|| yoyo[j]=='E' || yoyo[j]=='I' || yoyo[j]=='O'|| yoyo[j]=='U' )
            C++;
        else if(yoyo[j]=='a'|| yoyo[j]=='e' || yoyo[j]=='i' || yoyo[j]=='o' || yoyo[j]=='u')
            s++;
    }
    printf("Number of vowel capital: %ld\n",C);
    printf("Number of vowel small: %ld\n",s);
    printf(" size of yoyo= %ld", sizeof(yoyo));
}