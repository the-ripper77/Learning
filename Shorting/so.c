#include <stdio.h>
int main()
{
    int ar[] = {9,4,5,2,3,1};
    int pos;
    for(int j = 0; j<sizeof(ar)/4; j++)
    {
        int low = ar[j];
        int flag = 0;
        for(int i = j; i < sizeof(ar)/4; i++)
        { 
            if (low > ar[i])
         {
                pos = i;
            low = ar[i];
                flag = 1;
            }
        }
        if (flag == 1)
        {
            int pra = ar[j];
            ar[j] = low;
            ar[pos] = pra;
        }
    }
    for(int i = 0; i < sizeof(ar)/4; i++)
    printf("%d",ar[i]);
}