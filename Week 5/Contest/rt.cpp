#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    ll a[n];
    set<ll> s;
    ll maxlen = 0, curr_len = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (s.count(a[i]) == 0)
        {
            s.insert(a[i]);
            curr_len++;
            maxlen = max(maxlen, curr_len);
        }
        else
        {
            s.clear();
            s.insert(a[i]);
            curr_len = 1;
        }
    }

    cout << maxlen << endl;

    return 0;
}

