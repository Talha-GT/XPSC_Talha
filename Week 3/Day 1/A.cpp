#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<char>v;
        for(int i=0; i<s.size(); i++)
        {
            s[i]=tolower(s[i]);
        }
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]==s[i+1])
            {
                continue;
            }
            else if(s[i]!=s[i+1]) v.push_back(s[i]);
        }
        bool f=true;
        string ss="meow";
        for(int i=0; i<v.size(); i++)
        {
            if(v[i]!=ss[i])
            {
                f=false;
                break;
            }
        }
        if(f==true &&v.size()>=4)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
