#include<stdio.h>
#include<string.h>
int main()
{
    int i=0,l,j,n=3;
    char s[10],t[19];
    gets(s);
    while(s[i]!='\0'&&i<n)
    {
        t[i]=s[i];
        i++;
    }
    t[i]='\0';
    puts(t);
    return 0;

}
