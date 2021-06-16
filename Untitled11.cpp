int main()
{
    int tst;
    cin>>tst;
    while(tst--)
    {

        int n;
        ll k;
        cin>>n>>k;
        int t[n];
        for(int i=0; i<n; i++) cin>>t[i];

        int cnt=0,mx=t[n-1];
        for(int i=n-2; i>=0; i--)
        {
            if(t[i]<mx) cnt+=(mx-t[i]);
            else mx=t[i];
        }
        if(k>cnt)
        {
            cout<<-1<<endl;
            continue;
        }
        int ind=0;
        for(int i=0; i<k; i++)
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

    }


    return 0;
}
