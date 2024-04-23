#include<bits/stdc++.h>
#define ll long long
using namespace std;
int  main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int a[n];
    set<int>s;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        s.insert(a[i]);
    }
    cout<<s.size()<<endl;
return 0;
}
