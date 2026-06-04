#include<stdio.h>

int main()
{
    int a;
    
    printf ("enter the number\n") ;
    scanf("%d", &a) ;
    for(int i = a; i>=1; i-=1)
    {
        
      for(int k = 1; k<i; k++)
      {
       printf(" ",k);
        }
        
        for(int j = a; j>=i; j--)
         {
          printf("*",j);
         }
          if(i==1)
           break;

      printf("\n");
     }
      printf("\n");
      for(int i = a; i>=1; i-=1)
      {
        for(int k = 1; k<i; k++)
         {
         printf(" ",k);
         }
        
        for(int j = a; j>=i; j--)
         {
           printf("*",j);
         }
           if(i==1)
            break;

       printf("\n");
     }
       printf("\n");
      for (int i = 1; i<=a; i++) 
       {
        for (int j = a; j>1; j--) 
         {
          printf(" ",j);
         }
      printf("*",i);
      printf("\n");
    }
    
} 