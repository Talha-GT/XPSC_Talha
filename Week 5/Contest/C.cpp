#include<bits/stdc++.h>
#define ll long long
using namespace std;
int  main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        vector<int>v;
        while(a--)
        {
            int m,k;
            cin>>m>>k;
            if(k==c)
            {
                v.push_back(m);
            }
        }
        if(v.size()< b)
        {
            cout<<-1<<endl;
            continue;
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        int sm=0;
        for(int i=0;i<b;i++)
        {
            sm+=v[i];
        }
        cout<<v.size()<<" "<<sm<<endl;
    }
    return 0;
}







