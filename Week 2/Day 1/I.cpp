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
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        set<int>st;
        for(int i=0;i<n;i++)
        {
            st.insert(a[i]);
        }
        int x=n-st.size();
        if(x%2==0) cout<<st.size()<<endl;
        else cout<<st.size()-1<<endl;
        cout<<endl;
    }
    return 0;
}
