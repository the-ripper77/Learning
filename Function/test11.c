#include<stdio.h>
void dis(int num,int a, int b)
{
   // static int a = 0, b = 1, 
   static int i = 2;
    if (i < num)
    {
        static int c ;
        c = a + b;
        a = b;
        b = c;
        i++;
        printf("%d ",c);
        dis(num,a,b);
    }

}
int main()
{
    int num;
    printf("Enter you number:\n");
    scanf("%d",&num);
   static int x = 0, y = 1;
    printf("%d %d ",x,y);
    dis(num,x,y);
}