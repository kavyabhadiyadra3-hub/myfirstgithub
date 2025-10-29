#include<stdio.h>

int main()
{
    char operator;
    float num1, num2;

    printf("Enter operator(+,-,*,/):");
    scanf("%c",&operator);

    printf("Enter two number:");
    scanf("%f %f", &num1, &num2);

    switch(operator)
    {
    case'+':
        printf("result =%.2f\n" , num1+num2);
        break;

    case'-':
        printf("result =%.2f\n", num1-num2);
        break;

    case'*':
        printf("result =%.2f\n", num1*num2);
        break;

    case'/':
        printf("result =%.2f\n", num1/num2);
        break;

    default:
        printf("Invalid operatotr\n");


    }


    return 143;



}
