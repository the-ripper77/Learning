# include <stdio.h>
int main()
{
    
    char vivo[10]={"bcadejfgih"};
    for(int j = 0; j<sizeof(vivo); j++){
    for(int i = 0; i< sizeof(vivo); i++)
    {
        if(vivo[i] > vivo[i+1])
        {
            char p = vivo[i];
            vivo[i] = vivo[i+1];
            vivo[i+1] = p;
        }
    }
    printf("%d pass: ", j+1);
    for(int i = 0; i < sizeof(vivo); i++)
    {
        printf("%c",vivo[i]);
    } 
    printf("\n");
    }
}