#include<iostream>
using namespace std;
int pi(int p,int r);
void qi(int p,int r);
int a[100];
int main()
{
    int n,i;
    cin>>n;
    for( i=0;i<n;i++)
    {
        cin>>a[i];
    }
    qi(0,n-1);
    for(int i=0;i<n;i++)
    {
        cout <<a[i]<<" "<<endl;
    }

    return 0;
}
void qi(int p,int r)
{
   int q;
   if(p<r)
   {
       q=pi(p,r);
       qi(p,q-1);
       qi(q+1,r);
   }
}
int pi(int p,int r)
{
    int x=a[r];
    int i=p-1;
    for(int j=p;j<r;j++)
    {
        if(a[j]<=x)
        {
            i++;
            swap(a[j],a[i]);
        }
    }
    swap(a[i+1],a[r]);
    return i+1;
}
