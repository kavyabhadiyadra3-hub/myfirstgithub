// //pascal triangle
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter number of rows:";
//     cin>>n;
//     //pascals triangle
//     for(int i=0;i<n;i++){
//         int coef=1;
//         for(int j=0;j<=i;j++){
//             cout<<coef<<" ";
//             coef=coef*(i-j)/(j+1);
//         }
//         cout<<endl;
//     }
// }

// //instead of calculating factorial we can use nCr=nCr-1*(n-r+1)/r to calculate coefficient
// //this will reduce time complexity from O(n^3) to O(n^2)
// //nCr= n!/(r!(n-r)!)
// //nPr= n!/(n-r)!
#include <iostream>
using namespace std;
int fact(int num){
    int fact=1;
    for(int i=1;i<=num;i++){
        fact=fact*i;
    }
    return fact;
}


int ncr(int n,int r){
    int a=fact(n);
    int b=fact(r);  
    int c=fact(n-r);
    return a/(b*c);
}


 int main(){
    int n;
    cout<<"enter number of rows:";
    cin>>n;
    for(int i=0;i<n;i++){
        
        for(int j=0;j<=i;j++){
            cout<<ncr(i,j)<<" ";
        }
        cout<<endl;
    }
 }