#include<stdio.h>
#include<math.h>
float circle(float pie, int r);
int triangle();
void pentagon(int s)
{
    float area;
    // area = (1.0/4.0)*sqrt(5*(5+2*sqrt(5)))*(pow(s,2));
    // area = (float)(1.0/4) * (pow((5*(5+(2*pow(5,0.5)))),0.5))*s*s;
    float a = 2 * pow(5, 0.5);
    float b = 5 * (5 + a);
    float c = pow(b, 0.5);

    area = (1/4.0) * c * s * s;

    //61.9
    printf("The area of pentagon is %.2f square unit\n",area);
}
int main()
{
    int r;
    printf("Enter your circle radius:\n");
    scanf("%d",&r);
    float pie = 3.14;
    float ans = circle(pie,r);
    printf("The area of cricle is %.2f square unit\n",ans);
    int coo = triangle();
    printf("THe area of triangle is %d square unit\n",coo);
    int s;
    printf("Enter the size of pentagon:\n");
    scanf("%d",&s);
    pentagon(s);
}
float circle(float pie, int r)
{
    float area;
    area = (pie*r*r);
    return area;
}
int triangle()
{
    int h,b,area;
    printf("Enter your height and base of triangle:\n");
    scanf("%d %d",&h,&b);
    area = 0.5*(b*h);
    return area;
}