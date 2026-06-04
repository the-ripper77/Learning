#include <stdio.h>
int fact(int a)
{
    static int fat = 1;
    static int i = 1;
    if(i <= a)
    {
    fat = fat * i;
    i++;
    fact(a);
    }
    return fat;
}
int main()
{
    int ans = fact(5);
    printf ("The factorial of number is %d\n", ans);

}