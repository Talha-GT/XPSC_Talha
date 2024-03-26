#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int ans= INT_MAX;
        vector<string> a;
        for(int i=0; i<n; i++)
        {
            string s;
            cin>>s;
            a.push_back(s);
        }
        for(int i=0; i<n-1; i++)
        {
            string str= a[i];
            for(int k=i+1; k<n; k++)
            {
                string strr = a[k];
                int cnt=0;
                for(int j=0; j<m; j++)
                {
                    cnt= cnt+ abs(str[j]-strr[j]);
                }
                ans= min(ans,cnt);
            }
        }
        cout<< ans<<endl;
    }
    return 0;
}
