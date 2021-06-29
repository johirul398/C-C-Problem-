#include<stdio.h>
#include<string.h>
int main()
{
    int i=0,l=0,j=0,n=5;
    char s[10],t[19];
    gets(s);
    j=strlen(s)-1;
    printf("%d",j);
    while(s[j]!='\0'&&j<n)
    {
        t[i]=s[j];
        j--;
        i++;
        //l++;
    }
    t[i]='\0';
    puts(t);
    return 0;
}
