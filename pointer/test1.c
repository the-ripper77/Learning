# include <stdio.h>
int main ()
{
    int a = 5, b = 2 ;
    int *pa = &a;
    int *pb = &b;
    printf("Addition: \n%d\n",*pa+*pb);
    printf("Subtraction: \n%d\n",*pa-*pb);
    printf("Multiplication: \n%d\n",(*pa)*(*pb));
    printf("Division: \n%d\n",(*pa)/(*pb));
    printf("Modulus: \n%d\n",*pa%*pb);    
}