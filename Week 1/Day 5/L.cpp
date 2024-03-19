#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        vector<ll>v;
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        for(int i=1; i<=n; i++)
        {
            v.push_back(a[i]-i);
        }
        sort(v.begin(),v.end());
        cout<<v[v.size()-1]<<endl;
    }
    return 0;
}
