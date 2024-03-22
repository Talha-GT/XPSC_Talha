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
            string s,ss;
            cin>>s;
            ss="Timur";
            sort(s.begin(),s.end());
            sort(ss.begin(),ss.end());
            if(s==ss) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
            cout<<endl;
        }
        return 0;
    }
