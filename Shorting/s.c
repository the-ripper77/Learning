#include <stdio.h>
int main()
{
    int aj[]={8,2,3,1,5};
    for(int i = 0; i < sizeof(aj)/4; i++)
    {
        int pos;
        int lov = aj[i];
        int flag = 0;
        for (int j = i; j < sizeof(aj)/4; j++)
        {
            if (lov>aj[j])
            {
                pos = j;
                lov = aj[j];
                flag = 1;
            }
        }
            if (flag == 1)
            {
                int bra = aj[i];
                aj[i] = lov;
                aj[pos] = bra;
            }
    }
    for(int i = 0; i < sizeof(aj)/4; i++){
    printf("%d", aj[i]);
    }
}