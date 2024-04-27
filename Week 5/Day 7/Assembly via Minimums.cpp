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
        ll m,n;
        cin>>n;
        m=n*(n-1)/2;
        ll a[m];
        vector<int>v(m+1);
        for(int i=0; i<m; i++)
        {
            cin>>a[i];
            v[i+1]=a[i];
        }
        sort(v.begin(),v.end());
        for(int i=1;i<=m;i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
        int k=n-1;
        int t;
        for(int i=1;i<=m;i++)
        {
            if(i==k ||i==t)
            {
                cout<<v[i]<<" ";
                t=i+(k--);
            }
        }
        cout<<1000000000<<endl;
    }
    return 0;
}

//5
//3
//1 3 1
//2
//10
//4
//7 5 3 5 3 3
//5
//2 2 2 2 2 2 2 2 2 2
//5
//3 0 0 -2 0 -2 0 0 -2 -2

