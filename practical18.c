#include<stdio.h>
main()
{
    int v, h; //vertically,horizontally

    printf("\n Enter the size of vertically:");
    scanf("%d",&v);

    printf("\n Enter the size of table horizontally:");
    scanf("%d",&h);

    printf("\n multiplication Table(%d * %d): \n\n",v,h);

    for(int i=1;i<=v;i++)
    {
       for(int j=1;j<=h;j++)
       {
           printf("%4d",i*j);
       }
       printf("\n");
    }
}
