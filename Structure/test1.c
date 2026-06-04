#include<stdio.h>
#include<string.h>
struct student
{
    int roll ;
    char sec;
    char gender;
    char name[20];
} s1, s2;
int main()
{
s1.roll = 10;
s1.sec = 'A';
s1.gender = 'F';
strcpy(s1.name,"Diwasha Joshi");
s2.roll = 7;
s2.sec = 'B';
s2.gender = 'M';
strcpy(s2.name,"Diwas Chaudary");
printf("Name: %s\n",s1.name);
printf("Section: %c\n",s1.sec);
printf("Roll no: %d\n",s1.roll);
printf("Gender: %c\n",s1.gender);
printf("Name: %s\n",s2.name);
printf("Section: %c\n",s2.sec);
printf("Roll no: %d\n",s2.roll);
printf("Gender: %c\n",s2.gender);
}


