#include<stdio.h>

int main()
{
  int arr[] ={0,3,6,8,1,7,5,4,2,9};
  for(int k=0; k<sizeof(arr)/4;k++)
  {
    for (int j=0; j<sizeof(arr)/4;j++)
    {
      int pos;
      int flag=0;
      int low = arr[j];
      for (int i=j; i<sizeof(arr)/4;i++)
      {
        if(low>arr[i])
        {
          pos=i;
          low=arr[i];
          flag=1;        
        }
      }
        if(flag==1)
        {
          int temp=arr[j];
          arr[j]=low;
          arr[pos]= temp;
        }
      }
      printf("%d pass     ",k);
      for (int i=0; i<sizeof(arr)/4; i++)
      printf("%d ",arr[i]);
      printf("\n");

    }
}