#include <stdio.h>

int main() {
    char chr[3]={"abc"};
    char rev;
    printf("Given character:\n");
    printf("%s\n",chr);
    printf("Reverse:\n");
    for(int i=sizeof(chr)-1;i>=0;i--)
    {
        printf("%c",chr[i]);
    }
}