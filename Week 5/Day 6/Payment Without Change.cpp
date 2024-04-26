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
        if(a*n<=s)
        {
            if(a*n+b>=s)
            {
                cout<<"YES"<<endl;
            }
            else cout<<"NO"<<endl;
        }
        else
        {
            ll  y;
            for(int i=0;i<a;i++)
            {
                y=a*n-n;
                if(y<=s)
                {
                    if(y+b>=s)
                    {
                        cout<<"YES"<<endl;
                    }
                    else cout<<"NO"<<endl;
                    break;
                }
                else continue;
            }
        }
    }
    return 0;
}


