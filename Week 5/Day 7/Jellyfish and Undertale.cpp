#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int  main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,n;
        cin>>a>>b>>n;
        ll ar[n];
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        ll n_b=b;
         for(int i=0;i<n;i++)
        {
            n_b+=min(a-1,ar[i]);
        }
        cout<<n_b<<endl;
    }
    return 0;
}
