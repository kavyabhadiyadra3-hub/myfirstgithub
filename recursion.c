// #include<stdio.h>
// long fact(int n);
// void main(){
//     int n;
//     long factorial;
//     printf("\n Enter a number ");
//     scanf("%d",&n);

//     factorial = fact(n);
//     printf("\n factorial of %d is %ld ",n,factorial);
// }

// long fact(int n)
// {
//     if (n==0)
//     return 1;
//     else
//     return(n* fact(n-1));
// }


//fibonacci series with recursion

// #include <stdio.h>

// int fibonacci(int num);

// int main(void) {
//     int term;

//     printf("\nEnter number of terms: ");
//     scanf("%d", &term);

//     for (int n = 0; n < term; n++) {
//         printf("%d ", fibonacci(n));
//     }

//     return 0;
// }

// int fibonacci(int num) {
//     if (num == 0 || num == 1) {
//         return num;
//     } else {
//         return fibonacci(num - 1) + fibonacci(num - 2);
//     }
// }


//pass array to the function
// float largest(float a[],int n);

// int main(){
//     float value[4]={1.2,3.4,5,0.1};
//     printf("%.2f",largest(value,4));

//     return 0;
// }

// float largest(float a[],int n){
//     int max;
//     max=a[0];
//     for(int i=0;i<n;i++){
//         if(max<a[i]){
//             max=a[i];
//         }
//     }
//     return max;
// }





