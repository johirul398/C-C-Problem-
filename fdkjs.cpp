#include <bits/stdc++.h>
using namespace std;
int primeFactors(int n)
{
    int a=0,v,b,c,d;
    while (n % 2 == 0)
    {
        a++;
        //cout << 2 << " ";
        n = n/2;
    }


    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            a++;
           // cout << i << " ";
            n = n/i;
        }

    }

       if(n>1)
       {
           // cout << n << " ";
           a++;

       }
       return a;
}

int main()
{
    int n ,c=0,b,m,k,l;
    while(cin>>b)
    {
        if(b==2)
        {
            cout<<1<<endl;
        }
        else
        {
          c=primeFactors(b);
         cout<<c<<endl;
         c=0;
        }
    }

    return 0;
}
