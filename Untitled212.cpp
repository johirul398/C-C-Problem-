#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int a,b,c,d,e,f,g,h,i,j,k,l,m,n,s[5];
   cin>>m;
   while(m--)
   {
       cin>>d;
       n=-99999999;
       c=INT_MAX;
       k=INT_MAX;
       for(i=0;i<3;i++)
       {
           cin>>f;
           s[i]=f;
          // k=min(k,f);
          // n=max(n,f);
       }
      /* if(d<k)
       {
           cout<<k-d<<endl;
       }
       else if(d==k)
       {
           cout<<0<<endl;
       }
       else if(d==n)
       {
           cout<<0<<endl;
       }
       else
       {
         /*  b=k*2;
           cout<<abs(d-b)<<endl;*/
           for(i=0;i<3;i++)
           {
               j=3;
               while(j--)
               {
                    h=s[i]*j;
                    if(h<d) continue;
                    c=min(c,h);
                    k = min(k,abs(d-c));
               }
           }
           cout<<k<<endl;
      // }
   }
    return 0;
}
