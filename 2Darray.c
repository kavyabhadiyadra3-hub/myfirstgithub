#include<stdio.h>


//function with no argument no return value
// void printline();

// int main(){
//     printf("Welcome to c programming");
//     printline();
//     printf("function are easy to learn");
//     printline();

//     return 0;
// }

// void printline()
// {
//     int i;
//     printf("\n");
//     for(i=0;i<30;i++){
//         printf("*");
//     }
//     printf("\n");
// }



//function with argumrnt no return value
// void add(int m,int n);
// int main(){
//     int m=15,n=10;

//     add(m,n);
//     add(15,10);

//     return 0;
// }
// void add(int m,int n){
//     int c;
//     c=m+n;
//     printf("\n%d",c);
//     return ;
// }


//function with argument and return value
// int sum(int a,int b);

// int main(){
//     int a=10,b=20;
//     int c;
//     c=sum(10,20);
//     printf("\n the sum of a and b is %d",c);

//     return 0;
// }

// int sum(int a,int b){
//     int result;
//     result=a+b;
//     return result;
// }


//function with no argument but return value
// void fun(int x)
// {
//     x=30;
// }
// int main(){
//     int x=20;
//     fun(x);

//     printf("x = %d",x);
//     return 0;
// }



//swap function 
// void swap(int , int );
// int main(){
//     int a, b;
//     a=10;
//     b=20;
//     printf("\n before swapind a=%d and b=%d ",a,b);
//     swap(a,b);
//     printf("\n after swaping value in main function a=%d and b=%d ",a,b);//this because copy value destroyed we didnt stored it 

//     return 0;
// }

// void swap(int a,int b){
//     int temp;
//     temp=a;
//     a=b;
//     b=temp;
//     printf("\n after swaping value in function a=%d and b=%d",a,b);
// }


//pass by address
// void fun(int *ptr){
//     *ptr=30;
// }
// int main(){
//     int x=20;
//     fun(&x);
//     printf("\n X = %d ",x);

//     return 0;
// }


//pass by value
// void swap(int *,int *);

// int main(){
//     int a=10;
//     int b=20;
//     printf("\n before swap a=%d and b=%d ",a,b);
//     swap(&a,&b);
//     printf("\n after swap in function a=%d and b=%d ",a,b);

//     return 0;
// }

// void swap(int *a, int *b){
//     int temp;
//     temp=*a;
//     *a=*b;
//     *b=temp;
//     printf("\n after swap in function a=%d and b=%d ",*a,*b);
// }


//nested function in c
// void fun1(){
//     printf("\n this is nesting in function");
// }
// void fun2(){
//     printf("\n this is user define function");
//     fun1();

// }
// void main(){

//     printf("\n let see the nested function.");
//     fun2();
// }

//nested function
#include <stdio.h>

float ration(int, int, int);
int difference(int, int);

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    printf("%f\n", ration(a, b, c));

    return 0;
}

float ration(int x, int y, int z) {
    if (difference(y, z))
        return  (x / (y - z) );
    else
        return 0.0;
}

int difference(int p, int q) {
    if (p != q)
        return 1;
    else
        return 0;
}
