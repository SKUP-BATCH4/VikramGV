#include<stdio.h>
int main()
{

//    int a,b;
//    printf("enter the value of a and b : ");
//    scanf("%d %d",&a,&b);
//    a=a+b;
//    b=a-b;
//    a=a-b;
//    printf("after swap a= %d b= %d",a,b);

    int a,b,temp;
     printf("enter the value of a and b : ");
     scanf("%d %d",&a,&b);
     temp=a;
     a=b;
     b=temp;
     printf("After the swap a=%d, b=%d",a,b);
}
