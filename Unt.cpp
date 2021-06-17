#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f,g,h,i,j,k,u,r,l,x,x1,y,y1;
    cin>>e;
    while(e--)
    {
      cin>>a>>b;
      int v[a];
      for(i=0;i<a;i++)
      {
          cin>>v[i];
      }
      int cnt=0,mx=v[a-1];
        for(int i=a-2; i>=0; i--)
        {
            if(v[i]<mx) cnt+=(mx-v[i]);
            else mx=v[i];
        }
        if(b>cnt)
        {
            cout<<-1<<endl;
            continue;
        }
        int ind=0;
        for(int i=0; i<b; i++)
        {
            for(int j=0; j<n-1; j++)
            {
                if(t[j]<t[j+1])
                {
                    t[j]++;
                    ind=j;
                    break;
                }
            }
        }
        cout<<ind+1<<endl;


    return 0;
}

