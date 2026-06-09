#include<stdio.h>
#include<stdlib.h>
int compare(const void *a,const void *b){
    return (*(int*)a < *(int*)b);
}
int main(){
    int data[]={23,54,12,67,34,89,10};

    qsort(data,7,sizeof(int),compare);
    for(int i=0;i<7;i++){
        printf("%d ",data[i]);

    }
}