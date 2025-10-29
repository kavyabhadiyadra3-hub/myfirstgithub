//Fahrenhit=(Celsuis*9/5)+32
#include<stdio.h>
#include<stdbool.h>
main()
{
    signed short int tempreture;
    bool Choice;//1/0
    float Fahrenhit,Celsuis;

    printf("\n What Type of Temp Conv you want to see?:");
    printf("\n use 1 for F->C: use 0 for C->F:");
    //printf("\n use Y for F->C: \n use N for C->F:");
    scanf("\n %d",&Choice);
    //printf("\n %d",Choice);
    if(Choice)
    {
        printf("\n enter temp in F =");
        scanf("%hu",&tempreture);
        Celsuis=(tempreture-32)*5/9;
        printf("\n Tempreture in Calsuis=%f",Celsuis);
    }
    else
    {
        printf("enter temp in C=");
        scanf("%hu",&tempreture);
        Fahrenhit=(tempreture*9/5)+32;
        printf("\n Tempreture in Fahrenhit=%f",Fahrenhit);
    }
    return 0;
}
