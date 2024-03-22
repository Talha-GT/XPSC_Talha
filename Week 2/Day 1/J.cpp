    #include<bits/stdc++.h>
    #define ll long long
    using namespace std;
    int main()
    {
        int t;
        cin>>t;
        while(t--)
        {
            bool flag=true;
            int n;
            cin>>n;
            string s,ss;
            cin>>s>>ss;
            for(int i=0; i<s.size(); i++)
            {
                if(s[i]==ss[i]) continue;
                if((s[i]=='B' &&ss[i]!='G') ||(s[i]=='G' &&ss[i]!='B')||(s[i]=='R'&& ss[i]!='R'))
                {
                    flag =false;
                }
            }
            if(flag) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        return 0;
    }
