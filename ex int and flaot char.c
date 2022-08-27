#include<stdio.h>
int main()
{
    int a;
    float b;
    char ch;

    printf("enter the integer  : ");
    scanf("%d",&a);
    printf("enter the flaot  : ");
    scanf("%f",&b);
    printf("enter the charater  : ");
    scanf("%s",&ch);

    printf("integer is %d\n float is %.2f\n character is %c",a,b,ch);
}
