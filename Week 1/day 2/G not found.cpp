#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s, ss;
    ss = "abcdefghijklmnopqrstuvwxyz";
    cin >> s;
    set<char>st;
    vector<char>v;
    for (int i = 0;i<s.size();i++)
    {
        st.insert(s[i]);
    }
    for(auto val :st)
    {
        v.push_back(val);
    }
    char r;
    bool flag=false;
    for(int i=0;i<26;i++)
    {
        if(ss[i]!=v[i])
        {
            flag=true;
            r=ss[i];
            break;
        }
    }
    if(flag) cout<<r<<endl;
    else cout<<"None"<<endl;
    return 0;
}

