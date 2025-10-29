main ()
{
    //step1 declare the variables
    long int Population_Bharat_2024=1441981744;
    float Percentage_Women=48.4; //it is in percentage
    float Percentage_Men=51.6; // it is in percentage
    float Overall_Literacy=85.95; //it is in percentage
    float Percentage_Literate_Men=80.95; //it is in percentage
    float Percentage_Literate_Women=62.84; //it is in percentage

    printf("\n -----Display Actual Given Data -----");
    printf("\n Population_Bharat_2024=%ld",Population_Bharat_2024);
    printf("\n Overall_Literacy=%.2f",Overall_Literacy);
    printf("\n Percentage_Women=%.2f",Percentage_Women);
    printf("\n Percentage_Men=%.2f",Percentage_Men);

    //calculate number of women and men
    double Women=(Percentage_Women/100)*Population_Bharat_2024;
    double Men=(Percentage_Men/100)*Population_Bharat_2024;

    //literate men and women
    double Literate_Women=(Percentage_Literate_Women/100)*Women;
    double Literate_Men=(Percentage_Literate_Men/100)*Men;

    //illiterate men and women
    double Illiterate_Women=Women-Literate_Women;
    double Illiterate_Men=Men-Literate_Men;

    //display the result
    printf("\n ----------------------------\n");
    printf("\n Literacy in BHARAT");
    printf("\n Total Women=%.0f",Women);
    printf("\n Total Men=%.0f",Men);

    printf("\n-----------------------------\n");
    printf("\n Literate Women=%.0f",Literate_Women);
    printf("\n Literate Men=%.0f",Literate_Men);

    printf("\n-----------------------------\n");
    printf("\n Illiterate Women=%.0f",Illiterate_Women);
    printf("\n Illiterate Men=%.0f\n",Illiterate_Men);


}
