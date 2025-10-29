#include<stdio.h>
main ()
{
    float Height,Weight,BMI;
     printf("Enter Your Height and Weight:");
     scanf("%f%f",&Height,&Weight);
     printf("\nHeight=%.2f & Weight=%.2f",Height,Weight);

     if(Height>0 && Weight>0)
     {
         BMI=Weight/(Height*Height);
     }
     else
     {
         printf("Enter correct Height and Weight between 1-200\n");
     }
     printf("Your BMI=%.2f",BMI);
}
