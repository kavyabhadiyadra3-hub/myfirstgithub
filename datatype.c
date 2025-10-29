#include<stdio.h>
#include<limits.h>
#include<float.h>
int main()
{
    printf("=== Data Type Size(in bytes) ===\n");
    printf("char             : %zu\n", sizeof(char));
    printf("unsigned char    : %d\n", sizeof(unsigned char));
    printf("signed char      : %i\n", sizeof(signed char));
    printf("short            : %zu\n", sizeof(short));
    printf("int              : %zu\n", sizeof(int));
    printf("short int        : %zu\n", sizeof(short int));
    printf("unsigned int     : %zu\n", sizeof(unsigned int));
    printf("long             : %zu\n", sizeof(long));
    printf("long long        : %zu\n", sizeof(long long));
    printf("float            : %zu\n", sizeof(float));

    printf("\n===Print Range of All DT ===\n");
    printf("\nRange For char --> %d to %d",CHAR_MIN,CHAR_MAX);
    printf("\nRange For signed char --> %d to %d",SCHAR_MIN,SCHAR_MAX);
    printf("\nRange For unsigned char --> %d TO %d ",UCHAR_MAX);
    printf("\nRange For short int --> %d to %d",SHRT_MIN,SHRT_MAX);
    printf("\nRange For int or long int --> %d to %d",INT_MIN,INT_MAX);
    printf("\nRange For float --> %d to %d",FLT_MIN,FLT_MAX);
    printf("\nRange For long --> %d to %d",LONG_MIN,LONG_MAX);
    printf("\nRange For unsigned long long --> %d to %d",ULONG_MAX);
    printf("\nRange For unsigned long --> %d to %d\n",ULONG_MAX);

    printf("\n===Floatung Point Range===");
    printf("\nfloat        :%.3e to %.3e",FLT_MIN, FLT_MAX);
    printf("\ndouble       :%.3e to %.3e",DBL_MIN, DBL_MAX);
    printf("\nlong double  :%.3e to %.3e",LDBL_MIN, LDBL_MAX);
    return 0;
}
