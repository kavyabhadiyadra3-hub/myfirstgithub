#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        int count=0;
        cin >> n;
        do{
        if(n%6==0)
         n=n/6;
        else 
         n=n/2;
        count++;
        }while(n>0);
        if(n==1){
            cout << count << "\n";
        }
        else{
            cout << -1 << "\n";

        }
    }
}