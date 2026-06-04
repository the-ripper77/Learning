#include <stdio.h>
int main()
{
    char nam[]={"pratik_giri"};
    int size = sizeof(nam);
    int i = -1;
    do
    {
        char p;
        p = nam[i];
        nam[i] = nam[size - 1 - i];
        nam[size - 1 - i] = p;
        ++i;
    }while(i < size / 2);
    for (int i = 0; i < sizeof (nam); i++)
    printf("%c", nam[i]);
}