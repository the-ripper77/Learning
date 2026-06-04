#include<stdio.h>
int main()
{
    int godaddy[6]={9,6,3,4,5,1};
    int p;
    for(int j = 0; j < sizeof(godaddy)/4-1; j++)
    {
    for(int i = 0; i < sizeof(godaddy)/4-1; i++)
    {
        if (godaddy[i] > godaddy[i+1])
        {
            p = godaddy[i];
            godaddy[i] = godaddy[i+1];
            godaddy[i+1] = p;
        }
    }
    printf("%d pass: ",j+1);
    for(int i = 0; i < sizeof(godaddy)/4-1; i++)
    {
        printf("%d",godaddy[i]);
    }
    printf("\n");
    }
}

