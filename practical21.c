#define SIZE 5
main()
{
    int number[SIZE],i;
    int Even=0,Odd=0,Pos=0,Neg=0,zero=0;
    printf("\n Enter %d elements in array number:\n",SIZE);

    for(i=0;i<SIZE;i++){
        printf("\n ENTER number |%d| element ",i+1);
        //printf("\n Address %d :",&number[i]);
        scanf("%d",&number[i]);

        //odd and even
        if(number[i]%2==0)
            Even+=1;
        else
            Odd++;
        //+ve  -ve
        if(number[i]>0)
            Pos++;
        else
            Neg++;

            //ount zero
        if(number[i]==0)
            zero++;
    }
    printf("\n Total +ve num are:%d",Pos);
    printf("\n Total -ve num are:%d",Neg);
    printf("\n Total odd num are:%d",Odd);
    printf("\n Total even num are:%d",Even);
    printf("\n Total 0 are:%d",zero);

}

