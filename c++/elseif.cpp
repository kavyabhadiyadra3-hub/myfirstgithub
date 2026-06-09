#include<iostream>
using namespace std;
int main(){
    int cp,sp;
    cout<<"Enter cost price and selling price: ";
    cin>>cp>>sp;
    if(sp>cp){
        cout<<"Profit: "<<sp-cp;
    }
    else if(cp==sp){
        cout<<"No Profit No Loss";
    } 
    else{
        cout<<"Loss: "<<cp-sp;
    }
}