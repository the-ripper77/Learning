#include<stdio.h>

int main()
{
    int matrix1[3][3] = {{1,2,3},{1,2,3},{1,2,3}};
    int matrix2[3][3] = {{1,2,3},{1,2,3},{1,2,3}};
    int sum, count = 0;
    for( int i = 0; i < 3; i++)
    {
        for( int j = 0; j < 3; j++)
        {
            while(count<1)
            {
                sum = (matrix1[i][j] + matrix2[i][j]);
                count ++;
            }
            printf("%d\t",sum);
            count = 0;
        }
        printf("\n");
    }
}