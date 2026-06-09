#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    if(a>99 && a<1000){
        cout<<"Three Digit Number";
    }
    else{
        cout<<"Not a Three Digit Number";
    }
}