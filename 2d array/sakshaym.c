#include<stdio.h>
int main()
{
    int i,j,k=0,l,c=0,m=0;
    int row,column,row1,row2,column1,column2;
    printf("Enter the dimention of matrix 1 i.e, row x column: \n");
    scanf("%d%d",&row1,&column1);
    printf("Enter the dimention of matrix 2 i.e, row x column: \n");
    scanf("%d%d",&row2,&column2);
    if (column1==row2)
    {
    row=(row1+column2)/2;
    printf("The final dimention of the product of the matrix 1 and 2 is %dx%d\n",row1,column2); 
    fflush(stdin);
    fflush(stdin);
    //printf("%d=row \t%d=column",row,column);
    int mat1[10][10];
    int mat2[10][10];
    printf("For matrix 1\n");
    for(i=0;i<row1;i++)
    {
        for (j=0;j<column1;j++)
        {
            printf("%dx%d = ",i,j);
            scanf("%d",&mat1[i][j]);
           // printf("\n");
        }
    }
    printf("\nFor matrix 2\n");
    for(i=0;i<row2;i++)
    {
        for (j=0;j<column2;j++)
        {
            printf("%dx%d = ",i,j);
            scanf("%d",&mat2[i][j]);
            //printf("\n");
        }
    }
    

    printf("The output of the matrix multiplication of %dx%d and %dx%d matrices is\n",row1,column1,row2,column2);
    for(i=0;i<row1;i++)
    {
        l=0;
        for(j=0;j<row2;++j)
        {
            k=k+mat1[i][j]*mat2[j][l];
            if (j==(row2-1))
            {
                c++;
                printf("%d\t",k);
                j=-1;
                l++;
                k=0;
                if (c%column2==0)
                {
                    printf("\n");
                    break;
                }
            }
        }
       
    }
    }
    else{
        printf("The matrix multiplication is not possible for %dx%d and %dx%d matrices \n",row1,column1,row2,column2);
    }
}
