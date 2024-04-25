#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        ll c1=0;
        ll sm=0;
        ll su=0;
        vector<ll>v;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]<0)
            {
                c1++;
            }
            sm+=a[i];
            v.push_back(abs(a[i]));
        }
        ll s=0;
        sort(v.begin(),v.end());
        sort(a,a+n);
        if(c1==0)
        {
            cout<<sm<<endl;
        }
        else if(c1%2==1)
        {
            for(int i=1; i<v.size(); i++)
            {
                s+=(v[i]);
            }
            if(v[0]==0)
            {
                cout<<s<<endl;
            }
            else
                cout<<s-abs(v[0])<<endl;
        }
        else if(c1%2==0)
        {
            for(int i=0; i<n; i++)
            {
                su+=abs(a[i]);
            }
            cout<<su<<endl;
        }
    }
    return 0;
}
