// https://codeforces.com/problemset/problem/1499/B
// A. Fair Playoff

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl "\n"
#define mod 1000000007 // 1e9

void Vatsh()
{
    // Your logic goes here
    int p[4];
    for (int i = 0; i < 4; i++)
        cin >> p[i];
    int a, b, c, d;
    a = p[0], b = p[1], c = p[2], d = p[3];
    int A = max(a, max(b, max(c, d)));

    int B = -1;
    for (int i = 0; i < 4; i++)
    {
        if (p[i] != A)
            B = max(B, p[i]);
    }

    int r1 = max(a, b);
    int r2 = max(c, d);

    if ((r1 == A && r2 == B) || (r1 == B && r2 == A))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tt = 1;
    cin >> tt;
    while (tt--)
        Vatsh();

    return 0;
}