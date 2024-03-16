#include<bits/stdc++.h>
using namespace std;
int main()
{
     int a,b,c;
     cin>>a>>b>>c;
     int cnt=0;
    for(int i=1;i<=1e6;i++)
     {
         if(i*a<=c)
         {
             cnt++;
         }
         else break;
     }
     cout<<cnt*b<<endl;
    return 0;
}
