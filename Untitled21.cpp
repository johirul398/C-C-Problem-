#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int a,b,c,d,e,f,g,h,i,j,k,l,m;
   cin>>m;
   while(m--)
   {
     long long  int ans=1e18;
       cin>>d>>a>>b>>c;
        ans=min(ans,a-(d%a==0?a:d%a));
        ans=min(ans,b-(d%b==0?b:d%b));
        ans=min(ans,c-(d%c==0?c:d%c));
        cout<<ans<<endl;

   }
    return 0;
}
