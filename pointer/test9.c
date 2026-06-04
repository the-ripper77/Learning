#include<stdio.h>
void add (int myarr[3][3], int mybrr[3][3])
{
    printf("Addition:\n");
    int sum, count = 0;
    for(int i = 0; i < 3; i++){
        for( int j = 0; j < 3; j++)
        {
            while(count<1)
            {
                sum = *(*(myarr+i)+j)+*(*(mybrr+i)+j);
                count ++;
            }
            printf("%d\t",sum);
            count = 0;
        }
        printf("\n");
    }

}
void sub (int myarr[3][3], int mybrr[3][3])
{
    printf("Subtration:\n");
    int sub, count =0;
    for(int j = 0; j < 3; j++)
    {
        for(int i = 0;i < 3; i++)
        {
            while(count<1)
            {
                sub = *((*mybrr+j)+i) - *((*myarr+j)+i);
                count ++;
            }
            printf("%d\t",sub);
            count = 0;
        }
        printf("\n");
    }
}
void mul (int* myarr, int** mybrr)
{
    int count = 0, sum = 0 , tan = 0, cot = 0; 
    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {            printf("ok\n");

            sum = sum + (*(myarr+tan) * (*((*(mybrr+j))+count)));
            tan++;
        }
        count++;
        printf("%d\t",sum);
        sum = 0;
        printf("\n");
    }
}
int main()
{
    int myarr[3][3] ={{1,2,3},{4,5,6},{7,8,9}};
    int mybrr[3][3] ={{10,11,12},{13,14,15},{16,17,18}};
    // add(myarr,mybrr);
    // sub(myarr,mybrr);
    mul(*myarr,(int **)mybrr);
}