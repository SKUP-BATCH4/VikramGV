#include<stdio.h>
int main()
{
    float days,years,months,weeks;
    printf("enter the no of the days  : ");
    scanf("%f",&days);
    years=days/365;
    months=days/31;
    weeks=days/7;
    printf("years=%.3f, months=%.3f, weeks=%.3f",years,months,weeks);


}
