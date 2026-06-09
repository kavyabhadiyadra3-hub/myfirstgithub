#include<iostream>
using namespace std;
int main(){
    int i,n;
    int f=1;
    cout<<"Enter a number: ";
    cin>>n;

    for(i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<endl;
        }
    }

}