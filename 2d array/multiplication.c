#include <stdio.h>
int main()
{
    int m1[2][3] = {{2,3,4},{5,6,7}};
    int m2[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int count = 1, sum = 0 , tan = 0, cot = 0; 
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int k = 0;
            while(count<3)
            {
                sum = sum + ((m1[i][tan])*(m2[cot][j]));
                count ++;
                tan++;
                cot++;
            }
            printf("%d\t",sum);
            count = 0;
            tan = 0;
            cot = 0;
            sum = 0;
        }
        printf("\n");
    }
}
