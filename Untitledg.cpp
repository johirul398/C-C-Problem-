#include<bits/stdc++.h>
using namespace std;
int main()
{
   // freopen("input.txt","w",stdout);
  long long int a,b,c,d,g,h,i,j,k,l,m,n,o,x,mx;
    string s;
    cin>>d;
    while(d--)
    {
        mx=-9999999;
        cin>>a>>b>>c;
        vector<long long >ap(c),hp(c);
        for(i=0;i<c;i++)
        {
            cin>>ap[i];
            mx=max(mx,ap[i]);

        }
        for(i=0;i<c;i++)
        {
            cin>>hp[i];
            b-=((hp[i]+a-1)/a)*ap[i];
        }
     /*  for(i=0;i<c;i++)
       {
           x=(hp[i]+a-1)/a;
           b-=x*ap[i];
       }*/
     cout<<(b+mx > 0 ? "YES" : "NO")<<endl;
    }
    return 0;
}
