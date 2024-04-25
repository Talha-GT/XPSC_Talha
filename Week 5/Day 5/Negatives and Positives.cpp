#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        int c1=0,c2=0;
        int sm=0;
        int b[n];
        int su=0;
        vector<int>v;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            b[i]=abs(a[i]);
            if(a[i]<0)
            {
                c1++;
            }
            sm+=a[i];
            if(a[i]!=0)
            {
                v.push_back(a[i]);
            }
        }
        int s=0;
        sort(a,a+n);
//        if(c1==0)
//        {
//            cout<<sm<<endl;
//        }
//        else if(c1%2==1)
//        {
//            for(int i=0; i<n; i++)
//            {
//                s+=abs(a[i]);
//            }
//            if(a[0]==0)
//            {
//                cout<<s<<endl;
//            }
//            else
//            cout<<s-abs(a[0])<<endl;
//        }
//        else if(c1%2==0)
//        {
//            for(int i=0; i<n; i++)
//            {
//                su+=abs(a[i]);
//            }
//            cout<<su<<endl;
//        }
        cout<<a[0]<<endl;
    }
    return 0;
}

