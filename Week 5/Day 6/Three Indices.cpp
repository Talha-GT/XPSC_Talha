#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int  main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+1];
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        vector<int>v;
        int m,x=0,y=0,z=0;
        for(int i=1; i<=n-2; i++)
{
    for(int j=i+1; j<=n-1; j++)
    {
        for(int k=j+1; k<=n; k++)
        {
            if(a[i]<a[j] && a[j]>a[k])
            {
                m=j;
                x=1;
                break;
            }
        }
        if(x==1) break;
        y=1;
    }
    if(y==1) break;
}

        cout<<m-1<<" "<<m<<" "<<m+1<<endl;
        cout<<x<<endl;
    }
    return 0;
}


