#include<stdio.h>
int main()
{

    int a,b;
    printf("Enter the values a and b : ");
    scanf("%d %d",&a,&b);

    (a==b)?printf("%d",(a+b)*3):printf("%d",a+b);
}
