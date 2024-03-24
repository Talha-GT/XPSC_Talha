#include<bits/stdc++.h>
#define ll long long
using namespace std;
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
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for(int i = 0; i < n; i++)
        {
            int x;
            string s;
            cin >> x;
            cin >> s;
            for(int j = 0; j < x; j++)
            {
                if(s[j]=='U')
                {
                    a[i]=a[i]-1;
                }
                else if(s[j]=='D')
                {
                    a[i]=a[i]+1;
                }
            }
            if(a[i]<0)
            {
                a[i]=a[i]+10;
            }
            else if(a[i]>9)
            {
                a[i]=a[i]-10;
            }
        }
        for(int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
