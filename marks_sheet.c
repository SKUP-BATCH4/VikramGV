#include<stdio.h>
int main()
{
    int sub1,sub2,sub3,sub4;
    char name[20];
    printf("------marks card------\n");
    printf("Enter name : ");
    scanf("%s",&name);
    printf("-----------------------\n");
    printf("Enter kannada marks : ");
    scanf("%d",&sub1);
    printf("Enter english marks : ");
    scanf("%d",&sub2);
    printf("Enter maths marks : ");
    scanf("%d",&sub3);
    printf("Enter social marks :");
    scanf("%d",&sub4);

    printf("----------------------------\n");
    printf("\t%s\n",name);
    printf("----------------------------\n");
    printf("The marks obtained in\n kannada\t:\t%d\n english\t:\t%d\n maths  \t:\t%d\n social  \t:\t%d",sub1,sub2,sub3,sub4);
    return 0;
}
