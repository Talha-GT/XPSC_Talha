#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll a, b, n, s;
        cin >> a >> b >> n >> s;
        if(a * n <= s)
        {
            if(a * n + b >= s)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            ll y = s ;
            for(int x = 0; x <= a; x++)
            {
                y -= x * n;
                if(y <= s && y <= b)
                {
                    cout << "YES" << endl;
                    break;
                }
            }
            if(y > b)
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
