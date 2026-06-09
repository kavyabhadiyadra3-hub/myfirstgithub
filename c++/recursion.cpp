#include<iostream>
using namespace std;
void greet(){
    cout<<"hello,welcome to functions in c++";
    cout<<"good morning"; 
    greet();  

}

int main(){
    greet(); 

    //it never ends because there is no base condition to stop recursion