#include <stdio.h>

int main()
{
    char stri[] = {"pdrusghzkl"};
    char pra[sizeof(stri)];
    for( int i=0; i <= sizeof(stri)-1; i++)
    {
        if(stri[i]>= 97 && stri[i]<=123)
        {
            printf("%c",stri[i]-32);
        }
        else
        {
            printf("%c",stri[i]);
        }
    }
}
