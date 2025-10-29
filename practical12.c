#include<stdio.h>

int main()
{

    int n,n1,n2,s1,s2;
    printf("Enter starting and end point of the range:", n1, n2);
    scanf("%d%d", &nl,&n2);

    printf ("Your entered range is %d-%d",n1, n2);
    printf("\nEnter the the no.whose multiples must be displayed as special edition:", sl,s2);
    scanf("%d%d", &sl, &s2);

    for(n=nl;n<=n2;n+=1)
    {   printf("\nBook ID: %d",n);

        if(n%s1=0||n%s2==0)
        {
            printf("\t\tSpecial Edition");
        }

    }

    return 0;
}
