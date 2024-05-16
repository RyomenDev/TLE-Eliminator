// https://codeforces.com/problemset/problem/214/A
// A. System of Equations

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl "\n"
#define mod 1000000007 // 1e9

void Vatsh()
{
    // Your logic goes here
    int n, m;
    cin >> n >> m;
    int count = 0;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            if ((i * i + j == n) && (i + j * j == m))
                count++;
            else if ((i * i + j > n) || (i + j * j > m))
                break;
        }
    }
    cout << count << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tt = 1;
    // cin>>tt;
    while (tt--)
        Vatsh();

    return 0;
}