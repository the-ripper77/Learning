#include<stdio.h>

int countchar(char arr[]);

int main()
{
    char brr[] = {"Pratik"};
    char crr[] = ("Pratik");
    int count = countchar(brr);
    int counter= countchar(crr);
    if (count == counter)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }

}
int countchar(char arr[])
{
    int counter = 0;
    while ( arr[counter] != '\0')
    {
        counter ++;
    }
    return counter;
}