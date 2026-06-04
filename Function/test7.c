#include<stdio.h>
void heell()
{
    static int a = 0;
    int b = a+1;
    a = b;
    if(a<=4)
    {
        heell();
    }
    printf("The value of a: %d\n",a);
    printf("The value of b: %d\n",b);

}
int main()
{
    heell();
}