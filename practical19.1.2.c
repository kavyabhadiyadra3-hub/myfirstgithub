#include<stdio.h>
main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        for(j=0;j<=5-i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            if((k+j)%2==0)
                printf("1");

            else
                printf("0");
        }
        printf("\n");
    }
}


