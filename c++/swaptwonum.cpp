#include<iostream>
using namespace std;
void swap(int &,int &);


int main(){
    int a=10;
    int b=20;
    cout<<"\n before swap a="<<a<<" and b="<<b<<" ";
    swap(a,b);
    cout<<"\n after swap in main a="<<a<<" and b="<<b<<" ";

    return 0;
}

//pass by reference using reference variable

void swap(int &x, int &y){
    int temp;
    temp=x;
    x=y;
    y=temp;
    cout<<"\n after swap in function x="<<x<<" and y="<<y<<" ";
}