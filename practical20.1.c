#include<stdio.h>
#define N 10
int main()
{
    int i,expectedSum,sum=0,missingID;
    int pid[N];
    printf("\n memory occupied by array  variable pid=%d",sizeof(pid));
    printf("\n no of element/ID's you can store are=%d",sizeof(pid)/sizeof(pid[0]));
    printf("\n Enter %d participant IDs(from 1 to %d) :\n",N,N-1);

    //read ids
    for(i=0;i<N;i++){
        printf("\n enter id %d:",i);
        scanf("%d",&pid[i]);
        sum+=pid[i];
    }
    //print id
    for(i=0;i<N;i++){
        printf("\n id %d = %d\n",i,pid[i]);
    }
    expectedSum = N*(N + 1) / 2;
    missingID=expectedSum -sum;

    if(missingID >+ 1 && missingID <= N)
    {
        printf("\n The missing participant ID is :%d \n",missingID);
    }
    else{
        printf("\n Enter invalid input(either no ID missing or multiple IDS missing).\n");
    }

    return 0;
}
