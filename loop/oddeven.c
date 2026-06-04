#include<stdio.h>
int main()
{
    int i,j,k, p=1,g=0;
    int count =0;
    for (i=0; i<50; i++){
        for(j=p; j<50; j++)
        {
            if(j%2!=0)
            {
            printf("%d\t", j);
            count ++;
            if (count==5)
            {
                printf("\n");
            count =0;
            break;
            }
            }
        }
        p= j+1;
        for(k=g; k<50; k++)
        {
            if(k%2==0)
            {
            printf("%d\t", k);
            count ++;
            if(count==5)
            {
                printf("\n");
            count =0;
            break;
            }
        }
        }
        g= k+1;
    }
}