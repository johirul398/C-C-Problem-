#include<stdio.h>
#include<string.h>
int main()
{
    int i=0,l=0;
    char s[10],t[10],c[10];
    gets(s);
    gets(c);
    while(s[i]!='\0')
    {
        t[l]=s[i];
        i++;
        l++;
    }
    i=0;
    while(c[i]!='\0')
    {
        t[l]=c[i];
        i++;
        l++;
    }
   t[l]='\0';
   puts(t);
    return 0;
}

