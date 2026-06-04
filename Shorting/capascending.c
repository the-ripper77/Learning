# include <stdio.h>
int main()
{
    char nono[]={"PDRUSHGZ"};
    for( int j = 0; j < sizeof(nono); j++)
    {
        for( int i = 0; i < sizeof(nono); i++)
        {
            if (nono[i] >nono[i+1])
            {
                char p;
                p = nono[i];
                nono[i] = nono[i+1];
                nono[i+1] = p;
            }
        }
    }
    for ( int i = 0; i < sizeof(nono); i++)
    printf("%c",nono[i]);
}