#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,b;
    cin>>n>>b;
    int a[n];
    vector<int>c;
    for(int i=0;i<n;i++) cin>>a[i];
   for(int i=0;i<n;i++) if(a[i]!=b) c.push_back(a[i]);
   for(auto val:c) cout<<val<<" ";
    return 0;
}
