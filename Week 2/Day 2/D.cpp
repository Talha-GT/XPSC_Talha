    #include<bits/stdc++.h>
    #define ll long long int
    using namespace std;
    int main()
    {
        ios::sync_with_stdio(false);
        cin.tie(NULL);
        string s,ss;
        cin>>s>>ss;
        int cnt=0;
        for(int i=0;i<ss.size();i++)
        {
            if(s[i]!=ss[i]) cnt++;
        }
        cout<<cnt<<endl;
        return 0;
    }
