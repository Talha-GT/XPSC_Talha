#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,t,a,c,d;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int >v;
        for(i=1; i<=(n*(n-1))/2; i++)
        {
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        for(i=0; i<v.size(); i+=--n)
        {
            cout<<v[i]<<" ";
        }
        cout<<1000000000<<endl;
    }
}
