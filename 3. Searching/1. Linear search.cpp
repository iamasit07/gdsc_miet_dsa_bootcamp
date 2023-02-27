#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll a[n];
    for (ll i = 0; i < n; i++)
        cin >> a[i];

    for (ll i = 0; i < n; i++)
    {
        if (a[i] == k)
        {
            cout << i+1 << '\n';
            break;
        }
    }
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
        solve();
}