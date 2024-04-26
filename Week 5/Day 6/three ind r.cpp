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
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        int x=0;
        for(int i=1; i<n-1;i++)
        {
            if(a[i-1]<a[i] && a[i]>a[i+1])
            {
                x=1;
                cout<<"YES"<<endl;
                cout<<i<<" "<<i+1<<" "<<i+2<<endl;
                break;
            }
        }
        if(x==0)
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}


