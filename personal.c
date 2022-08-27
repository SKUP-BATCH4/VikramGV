
#include<stdio.h>
int main()
{
    char name[10],email[30];
    int age;
    char phone_no[20];

    printf("Enter the name : ");
    scanf("%s",&name);

    printf("Enter the age : ");
    scanf("%d",&age);

    printf("Enter the phone no : ");
    scanf("%s",&phone_no);

    printf("Enter the email : ");
    scanf("%s",&email);

    printf("-------------------------\n");

    printf("Your name is %s\n Your age is %d\n Your phone no. is %s\n Your email is %s",name,age,phone_no,email);


}

