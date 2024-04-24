#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int  main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int  n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int m;
    cin>>m;
    int b[m];
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    int ans=0;
    sort(a,a+n);
    sort(b,b+m);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i]==b[j]|| a[i]+1==b[j]|| a[i]==b[j]+1)
            {
                ans++;
                b[j]=INT_MIN;
                break;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}



