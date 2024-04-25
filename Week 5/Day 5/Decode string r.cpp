#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> v;
        reverse(s.begin(),s.end());
        for(int i=0; i<n; i++)
        {
            if(s[i]=='0')
            {
                int x=s[i+1]-'0';
                int y=s[i+2]-'0';
                int z=y*10+x;
                v.push_back(z);
                i+=2;
            }
            else
            {
                v.push_back(s[i]-'0');
            }
        }
        reverse(v.begin(),v.end());
        for(auto val:v)
        {
            cout<<char(val-1+'a');
        }
        cout<<endl;
    }
    return 0;
}

