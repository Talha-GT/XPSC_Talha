#include<bits/stdc++.h>
#define ll long long
using namespace std;
int  main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int k=abs(a-1);
        int l=abs(b-c)+abs(c-1);
        if(k<l) cout<<1<<endl;
        else if(k>l) cout<<2<<endl;
        else if(k==l) cout<<3<<endl;
    }
    return 0;
}



