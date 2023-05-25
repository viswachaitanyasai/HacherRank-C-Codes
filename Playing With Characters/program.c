#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch[100],s[100],sen[100];
    fgets(ch,100,stdin);
    fgets(s,100,stdin);
    fgets(sen,100,stdin);
    printf("%s",ch);
    printf("%s",s);
    printf("%s",sen);
    return 0;
}