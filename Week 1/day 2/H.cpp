#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll s,t;
    cin>>s>>t;
    ll cnt=0;
    for(int i=0;i<1000;i++)
    {
        for(int j=0;j<1000;j++)
        {
            for(int k=0;k<1000;k++)
            {
                if(i+j+k<=s&&i*j*k<=t )
                {
                    cnt++;
                }
                else break;
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}
