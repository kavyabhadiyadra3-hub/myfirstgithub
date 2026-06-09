#include<iostream>
using namespace std;
void greet(){
    cout<<"hello,welcome to functions in c++";
    cout<<"good morning";
}
int main(){//main cant called more than once
    greet();
    cout<<"\n this is main function";
    greet();
}
//return is a keyword where function will return to the calling function
//void means no return type
//function is a block of code which perform a specific task
//function declaration/prototype