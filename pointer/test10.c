#include<stdio.h>

void add(int* brr){

    int sum = 0;
    for(int i =0; i<5; i++){
        sum = sum+*(brr+i);

    }
    printf("%d", sum);
}

int main(){

int arr[5] ={1,2,3,4,5};
add(arr);
}