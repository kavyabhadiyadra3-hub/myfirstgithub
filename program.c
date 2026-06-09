#include<stdio.h>
int main(){
    int num,sum;
    printf("\nEnter num : ");
    scanf("%d",&num);

    sum=0;
    sum+=num%10;
    num=num/10;

    sum+=num%10;
    num=num/10;
    sum+=num%10;
    num+num/10;

    printf("\n sum of number id %d ",sum);
}