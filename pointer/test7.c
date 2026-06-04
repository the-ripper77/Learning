#include<stdio.h>
int main()
{
    int myarr[][2] ={{1,2},{3,4}};
    printf("contant at address %p of myarr %d\n", (*myarr)+0,*(*(myarr)+0));
    printf("contant at address %p of myarr %d\n", (*myarr)+1,*(*(myarr)+1));
    printf("contant at address %p of myarr %d\n", (*myarr+1)+0,*(*(myarr+1)+0));
    printf("contant at address %p of myarr %d\n", (*myarr+1)+1,*(*(myarr+1)+1));
}

