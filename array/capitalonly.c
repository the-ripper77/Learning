#include <stdio.h>
int main()
{
    char cap[100];
    printf("Enter your idea:\n");
    scanf("%[^\n]s", cap);
    for(int i=0; cap[i] != '\0'; i++)
    {
        if((int)cap[i]>= 97 && (int)cap[i]<=123)
        {
            printf("%c", (char)((int)cap[i]-32));
        }
        else
        {
            printf("%c",cap[i]);
        }
    }
}