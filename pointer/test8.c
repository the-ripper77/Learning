#include<stdio.h>
int main()
{
    int myarr[][2] ={{1,2},{3,4}};
    int total = 0;
    for(int j = 0; j<2; j++)
    {
        for (int i = 0; i<2; i++)
        {
            printf("contant at address %p of myarr %d\n", (*myarr+j)+i,*(*(myarr+j)+i));
            total = total + *(*(myarr+j)+i);
        }
    }
    printf("\n Total:\n %d",total);
}