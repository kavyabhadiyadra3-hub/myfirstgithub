#include<iostream>
using namespace std;

//class are user-defined data types that hold data members and member functions
//class is a blueprint for creating objects
//classis used for data hiding and encapsulation
//class supports inheritance and polymorphism

class employee{
    private:
        int a,b,c; //data members are private by default
    public:
        int d,e;
        void setdata(int a1, int b1, int c1); //member function declaration
        void getdata(){
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of c is "<<c<<endl;
            cout<<"The value of d is "<<d<<endl;
            cout<<"The value of e is "<<e<<endl;
        }
};

void employee::setdata(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
}   

int main(){

    employee emp; //object creation
    emp.setdata(1,2,3); //calling member function using object
    emp.d = 4; //directly accessing public data members 
    emp.e = 5;
    emp.getdata(); //calling member function to display data members
    return 0;
}