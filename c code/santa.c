#include<stdio.h>

int check(char str1[],char str2[],char str3[]){
    
    for(int i=0;str1[i]!='\0';i++){
        if(str3[i]==str1[i] || str3[i]==str2[i]){
            return 1;
        }
    }

}
int main(){

    char str1[100];
    char str2[100];
    char str3[200];

    scanf("%s", str1);
    scanf("%s", str2);
    scanf("%s", str3);

    if(check(str1, str2,str3)){
        printf("YES");
    }else{
        printf("No");
    }

}