#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,s;
    cin>>n>>s;
    ll a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll sum=0;
    ll ans=0;
    ll l=0,r=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
        if(sum<=s)
        {
            ans=max(ans,r-l+1);
            r++;
        }
        else
        {
            sum-=a[l];
            l++;
            r++;
        }
    }
    cout<<ans<<endl;
    return 0;
}
