//sum of array elements using functions in C++
#include<iostream>
using namespace std;    
void readArray(int arr[], int size);
int sumArray(int arr[], int size);
int main(){
    int size;
    cout<<"Enter size of array: ";
    cin>>size;
    int arr[size];
    
    readArray(arr, size);
    
    int total = sumArray(arr, size);
    cout<<"Sum of array elements: "<<total;
    
    return 0;
}


