#include<stdio.h>

typedef union choose{
struct jain
{int tm;
float cgpa;
char grade;
}std;

struct nain
{
    int pin;
     float dis;
      char block;
}home;
}ch;

int main(){
    ch v;
   v.std.tm=2022;
   v.std.cgpa=7.2;
    v.std.grade='a';
printf("term: %d\t cgpa: %f\t  grade: %c\n\n",v.std.tm,v.std.cgpa,v.std.grade);
printf("%d",sizeof(ch));

}





