#include<stdio.h>
main()
{
    int Age;
    printf("Enter Your Age=");
    scanf("%d",&Age);

    if(Age>=18 && Age<60)
    {
        printf("You are eligible for regular saving account");
    }
    else if(Age>=60)
    {
        printf("You are eligible for senior citizen saving account");
    }
    else if(Age<0)
    {
        printf("Enter valid age");
    }
    else
    {
        printf("you are not eligible for saving account");
    }




}
