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
        ll a,b,n,s,x;
        cin>>a>>b>>n>>s;
        if(s%n<=b && a*n+b>=s) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}


