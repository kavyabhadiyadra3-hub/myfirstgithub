#include<iostream>
#include<iomanip>
using namespace std;
int main(){
   float a=3.5,b=5.75;
   cout<<"addition ="<<a+b<<endl;

   float c,d;
   cout<<"\nenter the value od c and d"<<endl;
   cin>>c>>d;
   cout<<"addition="<<c+d<<endl;

   char ch=97;
   cout<<"enter the character"<<endl;
   cin>>x;
   cout<<"character ="<<ch<<endl;

    float a=12.12345,b=12.214253;
   cout<<setw(10)<<setfill('*')<<a<<setw(12)<<b<<endl;
   cout<<scientific<<setprecision(4)<<a<<b<<endl;
   cout<<setw(10)<<showpoint<<a<<endl;
   cout<<showpos<<a;
    cout<<setbase(16)<<a;


}
