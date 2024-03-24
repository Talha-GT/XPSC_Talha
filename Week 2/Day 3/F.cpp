#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int  t;
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
        int x;
        string s;
        for(int i=0; i<n; i++)
        {
            cin>>x;
            cin>>s;
            int ans_idx;
            for(int i=0; i<s.size(); i++)
            {
                if(s[i]=='D')
                {
                    a[i]=a[i]-1;
                }
                else
                {
                    a[i]=a[i]+1;
                }
            }
            if(a[i]<0)
            {
                ans_idx=a[i]+10;
            }
            else if(a[i]>9)
            {
                ans_idx=a[i]-10;
            }
            cout<<ans_idx<<" ";
        }
    }
    return 0;
}
