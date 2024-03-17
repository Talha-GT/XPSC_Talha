#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll s=0;
    ll a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        s+=a[i];
    }
    ll x;
    if(s%2==0) cout<<s<<endl;
    else
    {
        sort(a,a+n);
        for(int i=0;i<n;i++)
        {
            if(a[i]%2==1)
            {
                x=a[i];
                break;
            }
        }
        cout<<(s-x)<<endl;
    }
    return 0;
}
