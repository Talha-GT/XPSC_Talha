#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        vector<vector<string>>v(3,vector<string>(n));
        map<string,int>mp;
        for (int i = 0; i < 3;i++)
        {
            for (int j = 0;j<n;j++)
            {
                cin>>s;
                v[i][j]=s;
                mp[v[i][j]]++;
            }
        }
        int su=0;
        for (int i = 0; i < 3; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
               if(mp[v[i][j]]==1) su+=3;
               else if(mp[v[i][j]]==2)su+=1;

            }
            cout<<su<<" ";
            su=0;
        }
        cout<<endl;
    }
    return 0;
}
