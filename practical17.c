#include<stdio.h>
#include<unistd.h>
main()
{
    int min=0,total_time;
    float dis=0,total_dis,per_min_dis;

    printf("\n Enter time for marathon in min :",total_time);
    scanf("%d",&total_time);

    printf("\n Enter distance for marathon in km :",total_dis);
    scanf("%f",&total_dis);

    printf("\n Enter per minute distance for marathon in km :",per_min_dis);
    scanf("%f",&per_min_dis);

    printf("\n YOUR MARATHON HAS BEEN STARTED");

    while(1) //infinite loop while(1) run cont.
    {
        min++;
        dis = dis + per_min_dis;

        printf("\n Minute %d: Distance covered= %.2f km \n",min,dis);

        if(min>=total_time  || dis>=total_dis)//dis >=10 loop stop
        {
            printf("\n ----MARATHON COMPLETE !----");
            printf("\n total minute taken for marathon is %d",min);
            printf("\n total distance covered for marathon id %.2f",dis);

            break;
        }
        sleep(1);

    }




}
