#include<iostream>
using namespace std;

int main(){

int step;
cout<<"Enter the no of steps you want to print"<<endl;
cin>>step;
int a=0;
int b = 1;
cout<<a<<" "<<b<<" ";
for(int i=2; i<step; i++){
    int temp = a+b;
    cout<<temp<<" ";
    a= b;
    b=temp;
}

}