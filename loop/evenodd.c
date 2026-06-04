#include<stdio.h>

int main(){
int i,j,a,p=1, g=1;
int count = 0;
for(a = 0; a<50; a++){
for( i =p; i<50; i++){
    if(i%2==0){
        count++;
        printf("%d ", i);
        if(count==5){
            printf("\n");
            count=0;
            break;
        }
    }
}
p = i+1;
for(j=g; j<50; j++){
    if(j%2!=0){
        count++;
        printf("%d ", j);
        if(count==5){
            printf("\n");
            count=0;
            break;
        }
    }
}
g = j+1;
}
}
