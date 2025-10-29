#include<stdio.h>

int main()
{
    float marks;
    char grade;
    float GPA;
    char* remarks;

    printf("\n ----------Prepare Marksheet-----------\n");
    printf("\n Enter marks(0-100): ");
    scanf("%f",&marks);

    if(marks >= 0 && marks <= 100)
    {
        grade = (marks >= 90)?'A':
                (marks >= 80)?'B':
                (marks >= 70)?'C':
                (marks >= 60)? 'D':'F';

        GPA = (grade == 'A')?4.0:
              (grade == 'B')?3.0:
              (grade == 'C')?2.0:
              (grade == 'D')?1.0:0.0;

        remarks = (grade == 'A')?"excellent":
                  (grade == 'B')?"very good":
                  (grade == 'C')?"good":
                  (grade == 'D')?"fair":"needs improvment";

        printf("\n Grade : %c",grade);
        printf("\n GPA : %.1f",GPA);
        printf("\n Remarks : %s \n",remarks);

        (GPA == 0.0)?printf("\n BETTER LUCK NEXT TIME\n"): 0;

    }

    else
    {
        printf("\n Invalid input! Marks should be between 0 and 100\n");
    }


return 0;
}
