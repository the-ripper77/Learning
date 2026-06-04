#include <stdio.h>

int main()
{
    char ar1[] = {"My name is pratik"};
    char ar2[17];
    int i=0;
    while (ar1[i]!='\0')
    {
        ar2[i]=ar1[i];
        i++;
    }
    printf("%s\n", ar2);
    printf("size of ar1 is %d", sizeof(ar1));
}
