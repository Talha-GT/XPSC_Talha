#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,x,v;
    bool flag=false;
    cin>>a>>b>>c;
    for(int i=1;i<=1e6;i++)
    {
        x=c*i;
        if(x>=a && x<=b)
        {
            flag =true;
            v=x;
            break;
        }
        else if(x>b) break;
    }
    if(flag) cout<<v<<endl;
   else cout<<-1<<endl;
    return 0;
}



