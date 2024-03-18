#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n-1;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n-1);
    int x;
    for(int i=0;i<=n-1;i++)
    {
        if(a[i]!=i+1)
        {
            x=i+1;
            break;
        }
    }
    cout<<x<<endl;
    return 0;
}
