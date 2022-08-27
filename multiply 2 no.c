//multiplying 2 numbers
#include<stdio.h>
int main()
{
    //integers
    int a,b,f,c;
    printf("Enter the value of a : ");
    scanf("%d",&a);
    printf("Enter the value of b : ");
    scanf("%d",&b);
    printf("Enter the value of f : ");
    scanf("%d",&f);
    c=a*b*f;
    printf("The multiplied value of %d %d %d is %d \n",a,b,f,c);

     printf("--------------\n");
    //float
    float e,g,h;
    printf("Enter the value of a : ");
    scanf("%f",&e);
    printf("Enter the value of b : ");
    scanf("%f",&g);
    h=g*e;
    printf("The multiplied value of %.2f and %.2f is %.2f ",e,g,h);
    return 0;
}
