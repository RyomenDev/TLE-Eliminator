

// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Z

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define endl "\n"
#define mod 1000000007 // 1e9

ll solve(ll k, ll s)
{
    int count = 0;
    for (int X = 0; X <= k; ++X)
    {
        for (int Y = 0; Y <= k; ++Y)
        {
            int Z = s - X - Y;
            if (Z >= 0 && Z <= k)
            {
                count++;
            }
            else if (Z < 0)
            {
                break;
            }
        }
    }
    return count;
}

// WRONG

// ll solve(ll k, ll s)
// {
//     ll result = 0;
//     ll maxPart = min(s, 3 * k);
//     for (ll i = 0; i <= maxPart; ++i)
//     {
//         ll remaining = s - i;
//         ll count = min(k, remaining) + 1;
//         result += count;
//     }
//     return result;
// }

void Vatsh()
{
    // Your logic goes here
    ll k, s;
    cin >> k >> s;
    ll ans = solve(k, s);
    cout << ans << endl;
    return;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll tt = 1;
    // cin >> tt;
    while (tt--)
        Vatsh();

    return 0;
}
