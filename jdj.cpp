#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,r,f,g,h,i,j,x,k;
    string s;
    cin>>d;
    while(d--)
    {
        cin>>s;
        k=0;
        j=0;
        c=0;
        h=0;
        b=0;
        a=s.length();
      for(i=0;i<a;i++)
      {
          if(s[i]=='1')
          {
              j=1;
              for(k=i+1;k<a;k++)
              {
                  if(s[k]=='0')
                  {
                      b++;
                  }
                  else
                  {
                      h=h+b;
                      b=0;
                  }
              }
          }
          if(j==1)
          {
              break;
          }
      }
      cout<<h<<endl;
    }

    return 0;
}
