#include<iostream>
using namespace std;
int factorial(int num){
    int fact=1;
    for(int i=1;i<=num;i++){
        fact=fact*i;
    }
    return fact;
}
int main(){
//nCr= n!/(r!(n-r)!)
//nPr= n!/(n-r)!
    int n,r;
    cout<<"Enter n and r: ";    
    cin>>n>>r;
    int nfact=factorial(n);
    int rfact=factorial(r);

    int nrfact=factorial(n-r);
    int nCr=nfact/(rfact*nrfact);
    int nPr=nfact/nrfact;
    cout<<"nCr= "<<nCr<<endl;
    cout<<"nPr= "<<nPr<<endl;

    

    return 0;
}