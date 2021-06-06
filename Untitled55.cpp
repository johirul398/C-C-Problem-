#include<bits/stdc++.h>
using namespace std;

int main()
{
      int n,a,b,c,d,e,f;

    cin>>e;
    while(e--)
    {
        cin>>a>>b;
        for(int i=0;i<a;i++)
        {
            n=0;
            cin>>c;
            if(c>=10*b)
            {
                cout<<"yes"<<endl;
                continue;
            }
            for(int j=b;j<=c;j+=10)
            {
                if((c-j)%b==0)
                {
                    cout<<"yes"<<endl;
                    n=1;
                    break;
                }
            }
            if(n==0)
            {
                cout<<"no"<<endl;
                n=0;
            }
        }
    }

    return 0;
}
