#include<bits/stdc++.h>
#define ll long long
using namespace std;
int  main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    while(n--)
    {
        ll t;
        cin>>t;
        ll a[t],b[t];
        ll c1=0,c2=0;
        for(int i=0;i<t;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<t;i++)
        {
            cin>>b[i];
        }
        ll an1=0,an2=0;
        for(int i=0;i<t;i++)
        {
            if(a[i]==0)
            {
                an1=max(an1,c1);
                c1=0;
            }
             else if(i==t-1)
            {
                 an1=max(an1,c1+1);
            }
            else c1++;
        }
        for(int i=0;i<t;i++)
        {
            if(b[i]==0)
            {
                an2=max(an2,c2);
                c2=0;
            }
            else if(i==t-1)
            {
                 an2=max(an2,c2+1);
            }
            else c2++;
        }
        cout<<an1<<" "<<an2<<endl<<endl;
//
        if(an1>an2) cout<<"Om"<<endl;
        else if(an1<an2)cout<<"Addy"<<endl;
        else if(an1==an2) cout<<"Draw"<<endl;
  }
    return 0;
}






