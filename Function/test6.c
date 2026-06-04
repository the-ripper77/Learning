#include<stdio.h>

void array()
{
    char arr[6] = {"Pratik"};
    char brr[4] = {"Giri"};
    char crr[sizeof(arr)+sizeof(brr)];
    printf("%i\n",sizeof(crr));
}
int main()
{
    array();
}
