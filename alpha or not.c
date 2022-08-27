#include<stdio.h>
int main()

{

    char a;
    scanf("%c",&a);
    //(a=='a'||'b'||'c'||'d'||'e'||'f'||'g'||'h'||'i'||'j'||'k'||'l'||'m'||'n'||'o'||'p'||'q'||'r'||'s'||'t'||'u'||'v'||'w'||'x'||'y'||'z')?printf("the given char is in alphabet"):printf("not alphabet");
    ((a>='a' && a<='z')||(a>='A' && a<= 'Z'))?printf("the char is alphabet"):printf("not alphabet");
}
