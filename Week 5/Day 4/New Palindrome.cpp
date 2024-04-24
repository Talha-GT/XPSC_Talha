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
        string s;
        cin>>s;
        map<int,int>mp;
        int k=s.size()/2;
        for(int i=0;i<k;i++)
        {
            mp[s[i]]++;
        }
        vector<int>v;
        for(auto val:mp)
        {
            v.push_back(val.second);
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        if(v[0]<k) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}



