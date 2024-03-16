#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll x,y;
    cin>>x>>y;
    ll a,b;
    ll cnt=0;
    while(1)
    {
        x=x*2;
        cnt++;
        if(x>y) break;
    }
    cout<<cnt<<endl;
    return 0;
}
