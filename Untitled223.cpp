#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
    vector<int>v;
    int n,MAX;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    MAX=a[0];
    v.push_back(0);
    for(int i=1;i<n;i++)
    {
        if(a[i]>MAX)
        {
            MAX=a[i];
            v.push_back(i);
        }
    }
    int x=v.size()-1;
    cout<<x<<endl;
    for(int i=x;i>=0;i--)
    {
        if(i==x)
        {
            for(int j=v[i];j<n;j++)
                cout<<a[j]<<" ";
        }
        else
        {
            for(int j=v[i];j<v[i+1];j++)
                cout<<a[j]<<" ";
        }
    }
    cout<<endl;
    }
    return 0;
}
