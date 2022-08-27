#include<stdio.h>
int main()
{
//    int a=20;
//    int x;
//    x=a++ + ++a - --a + a--;
//    printf("%d",x);

//    int x=20,y=x;
//    int z;
//    z=x++ - y-- + --x - ++y;
//    printf("%d\n",z);
//    printf("%d\n",x);
//    printf("%d\n",y);

    int x=10,y=10,z=20,a;
    a=x++ - --y + ++z - --y - ++x;
    printf("%d\n",z);
   printf("%d\n",x);
   printf("%d\n",y);
   printf("%d\n",a);
}
