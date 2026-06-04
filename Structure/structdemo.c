#include<stdio.h>
#include<string.h>

struct student{

int roll;
float grade;
char name[10];
struct date{
int year;
int month;
int day;

}n1;

}s1;


int main(){

    struct student s2 = {1, 9.9, "Ram"};

    printf("%d \n",s2.roll);
    printf("%f \n",s2.grade);
    printf("%s \n",s2.name);


    s1.roll = 2;
    s1.grade = 9.5;
    strcpy(s1.name, "Shyam");
    s1.n1.year = 1999;
    s1.n1.month = 12;
    s1.n1.day = 25;

    printf("%d \n",s1.roll);
    printf("%f \n",s1.grade);
    printf("%s \n",s1.name);  
    
}