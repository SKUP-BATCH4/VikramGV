#include<stdio.h>
int main()
{

    int a=3,b=5;
    int c;
    char d;
    char e='f',g='f';
    char h;
    (a>b)?printf("True"):printf("False");
    printf("\n");
    (a>b)?printf("%d",a):printf("%d",b);
    printf("\n");
    c=(a<b)?9:76;
    printf("%d",c);
    printf("\n");
    d=(a<b)?'v':'g';
    printf("%c",d);
    printf("\n");
    (e==g)?printf("V"):printf("G");
//    printf("%c",h);
}
