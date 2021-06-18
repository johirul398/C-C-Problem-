#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f,g,h,i,j,k,u,r,l,x,x1,y,y1;
    string s;
    cin>>e;
    while(e--)
    {

        u=0,d=0,r=0,l=0;
        x=0,x1=0,y=0,y1=0;
        cin>>b>>c;
        cin>>s;
        a=s.size();
        for(i=0;i<a;i++)
        {
            if(s[i]=='U')
            {
              u++;
            }
            if(s[i]=='D')
            {
               d++;
            }
            if(s[i]=='R')
            {
               r++;
            }
            if(s[i]=='L')
            {
                l++;
            }
        }
        if(b>=0&&c>=0)
        {

            if(r>=b&&u>=c)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
      else if(b>=0&&c<=0)
        {
            x=-(c);
            if(r>=b&&d>=x)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
         else if(b<=0&&c>=0)
        {
            x=-(b);
            if(l>=x&&u>=c)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else if(b<=0&&c<=0)
        {
            x=-(b);
            y=-(c);
            if(l>=x&&d>=y)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}

