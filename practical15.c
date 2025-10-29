#include<stdio.h>
main()
{
    int i;
    printf("\nEnter satrting no of sec : ");
    scanf("%d",&i);
    for(;i>=0;i--)
    {
        printf("\n%d",i);
        sleep(1);
    }
    printf("\nCOUNTDOWN COMPLETE\n");
}
