#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s;
    cin>>n;s=n;
    int cnt=0;
    while(s!=0)
    {
        cnt++;
        s/=10;
    }
    if(cnt==0) cout<<"0000"<<endl;
    else if(cnt==1) cout<<"000"<<n<<endl;
    else if(cnt==2) cout<<"00"<<n<<endl;
    else if(cnt==3) cout<<"0"<<n<<endl;
    else cout<<n<<endl;
       return 0;
}


