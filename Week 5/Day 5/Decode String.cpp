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
        for(int i = 0; i < n - 2; i++)
        {
            if(s[i + 2] != '0')
            {
                v.push_back(s[i]-'0');
            }
            else
            {
                int x=s[i]-'0';
                int y=s[i + 1]-'0';
                int z=x*10+y;
                v.push_back(z);
                i++;
            }
        }
        char k=s[s.size()-1];
        char l=s[s.size()-2];
        v.push_back(l-'0');
        v.push_back(k-'0');
        for(auto val : v)
        {
            cout << val << " ";
        }
        cout << "\n";
    }
    return 0;
}
