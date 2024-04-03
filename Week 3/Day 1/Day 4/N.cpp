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
        ll a[n+1];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        ll sum=0,k=0,c=0;
        for(int i=0; i<n; i++)
        {
            if(a[i]<=0)
            {
                sum+=abs(a[i]);
                if(k==0&&a[i]!=0)
                {
                    c++;
                    k++;
                }
            }
            else
            {
                sum+=a[i];
                k=0;
            }
        }
        cout<<sum<<" "<<c<<endl;
    }
}
