#include<stdio.h>
main()
{
    char ch;//choice
    int with,bal;//withdrow,balance
    bal=5000;
    printf("\n YOUR CURRENT BALANCE IS %d",bal);

    do
    {
        printf("\n Enetr the amount you want to withdraw ");
        scanf("%d",&with);

        if(with<=bal && with>0)
        {
            bal=bal-with;
            printf("\n your current balance is %d",bal);

        }
        else
        {
            printf("\n INSUFFICIENT VALUE or INVALID AMOUNT\n8");
        }
        if(bal==0)
        {
           printf("\n balance is 0.NO more transaction allowed\n");
           break;

        }


        printf("\n Do you want another transaction?(y/n):");
        scanf(" %c",&ch);
    }
    while(ch=='y' || ch=='Y' );

        printf("\n Your withdrowal completed\n");
        printf("\n THANK YOU USING ATM");

}
