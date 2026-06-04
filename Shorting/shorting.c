#include<stdio.h>
int main()
{
    int a[6],b[6],d,c=0;
    printf("Enter the 6 random numbers: ");
    for(int i=0;i<sizeof(a)/4;i++)
    {
        scanf("%d",a+i);
    }
    for(int i=0;i<sizeof(a)/4;i++)
    {
        for(int j=i+1;j<sizeof(a)/4;j++){
        if (a[i]>a[j])
        {
            d=a[i];
            a[i]=a[j];
            a[j]=d;
            
            //c++;
            //printf("%d \n",c);
        }}
    }
    printf("This this the inputted number \n");
    for(int i=0;i<sizeof(a)/4;i++)
    {
        printf("%d \n",a[i]);
       
    }
    //printf("The greatest number is %d",b[0]);
}