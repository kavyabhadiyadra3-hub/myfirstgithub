#include<stdio.h>
main()
{
    int i,j,k;
    int n=5; //total row 9 so 2n-1 we can use for n=5
    //space number is n-i
    //total number in this is like 2i-1

    for(i=n;i>=1;i--)
    {
       for(j=0;j<n-i;j++)
        {
            printf(" ");
        }

        for(k=i;k>=1;k--)  //have to make 3 loop coz 1.space,2.decrease,3.increase
        {
            printf("%d",k);
        }

        for(k=2;k<=i;k++)
        {
            printf("%d",k);
        }

        printf("\n");
    }

    for(i=2;i<=n;i++)
    {

        for(j=0;j<n-i;j++)
        {
           printf(" ");
        }

        for(k=i;k>=1;k--)
        {
           printf("%d",k);

        }

        for(k=2;k<=i;k++)
        {
            printf("%d",k);
        }

        printf("\n");
    }


}

