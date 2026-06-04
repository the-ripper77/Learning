#include<stdio.h>
int main()
{
    printf("Millimeters\t");
    printf("Inches\t");
    printf("\n");
    for(int i=1; i<100; i++)
    {
        if(i%2==0)
        {
        printf("%d\t        %f\n",i,i*0.039);
        }
       
    }
}