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
               //sort(v.begin(),v.end());
                for(auto val:v)
                {
                    cout<<val<<" ";
                }
                cout<<endl;
                int mndi=INT_MAX;
                for(int i=1;i<v.size();i++)
                {
                    int dif=v[i]-v[i-1];
                    if(dif<mndi)
                    {
                        mndi=dif;
                    }
                }
                cout<<mndi<<endl;
                cout<<endl;
            }
        }
    }
    return 0;
}
