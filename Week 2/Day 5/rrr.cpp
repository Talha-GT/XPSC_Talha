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
        int n,k;
        cin>>n>>k;
        vector<int>v;
        for(int i=0;i<n; i++)
        {
            int mx=INT_MAX;
            string s;
            cin>>s;
            int sm=0;
            for(int j=0; j<k; j++)
            {
                sm=sm+s[j]-'a';
            }
            v.push_back(sm);
            int mn;
            if(i==n-1)
            {
                int mn=INT_MAX;
                for(int i=0;i<v.size()-1;i++)
                {
                        for(int j=i+1;j<v.size();j++)
                        {
                            if(v[i]<v[j])
                            {
                                mn=min(mn,(v[j]-v[i]));
                            }
                        }
                }
                if(mn==INT_MAX) cout<<0<<endl;
                else cout<<mn<<endl;
            }
        }
    }
    return 0;
}

