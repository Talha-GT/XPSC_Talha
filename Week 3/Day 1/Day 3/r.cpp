#include<bits/stdc++.h>
using namespace std;
const int MAX_N = 200;
const int MAX_M = 200;
int a[MAX_N][MAX_M];
int n,m;
const int l=200;
const int r=200;
int mx=INT_MIN;
int sm=0;
bool valid(int i,int j)
{
    if( (i>=0 && i<n) && (j>=0 && j<m)) return true;
}
int maxSum(int i,int j)
{
    for(int k=1; k<=l; k++)
    {
        if(valid(i-k,j-k)==true)
        {
            sm+=a[i-k][j-k];
        }
         if(valid(i+k,j+k)==true)
        {
            sm+=a[i+k][j+k];
        }
         if(valid(i-k,j+k)==true)
        {
            sm+=a[i-k][j+k];
        }
        if(valid(i+k,j-k)==true)
        {
            sm+=a[i+k][j-k];
        }
    }
    return (sm+a[i][j]);
}
int  main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cin>>a[i][j];
            }
        }
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                mx=max(mx,maxSum(i,j));
            }
        }
        cout<<mx<<endl;
    }
    return 0;
}
