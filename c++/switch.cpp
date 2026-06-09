#include<iostream>
using namespace std;
int main(){
    //make calculator using switch case
    char op;
    int a,b;
    cout<<"Enter operator (+, -, *, /): ";
    cin>>op;
    cout<<"Enter two operands: ";
    cin>>a>>b;
    switch(op){
        case '+':
            cout<<a<<" + "<<b<<" = "<<a+b;
            break;
        case '-':
            cout<<a<<" - "<<b<<" = "<<a-b;
            break;
        case '*':
            cout<<a<<" * "<<b<<" = "<<a*b;
            break;
        case '/':
            if(b!=0){
                cout<<a<<" / "<<b<<" = "<<a/b;
            }
            else{
                cout<<"Error! Division by zero.";
            }
            break;
        default:
            cout<<"Invalid operator";
            break;
    }
}