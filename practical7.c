#include<stdio.h>
main()
{
    short int Age;
    const int fare=575;
    int actual_cost,No_Person;
    printf("\n Enter Your Age=");
    scanf("%d",&Age);

    //output
    if((Age>0 && Age<12)|(Age>=60))
    {
        printf("The park Entry is Free for children:");
        actual_cost=0;
        printf("\n Cos:%d",actual_cost);
    }
    else
    {
        printf("The park Entry Fees are as below:");
        printf("Enter number of person=");
        scanf("%d",&No_Person);
        actual_cost=fare*No_Person;
        printf("\n Cos:%d",actual_cost);
    }


    printf("\n\n Visit Again !!!!!");
    return 0;
}


