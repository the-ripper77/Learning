#include <stdio.h>
int main()
{
    int com[5]= {1,2,3,4,5};
    int math[5];
    int *p;
    for( int i = 0; i < 5; i++)
    {
        *p = com[i];
        math[i]= *p;
    }
    printf("Pointer:\n");
    for(int i = 0; i < 5; i++)
    printf("%d\n", *(math + i));
}