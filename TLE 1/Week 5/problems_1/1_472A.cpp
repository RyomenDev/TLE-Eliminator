// https://codeforces.com/problemset/problem/472/A
// A. Design Tutorial: Learn from Math

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl "\n"
#define mod 1000000007 // 1e9

void func(vector<bool> &composite)
{
    int n = composite.size();
    for (int i = 2; i * i <= n; i++)
    {
        if (!composite[i]) // if not composite
        {
            for (int j = i * i; j <= n; j += i)
            {
                composite[j] = true;
            }
        }
    }
}

vector<int> solve(int n, vector<bool> composite)
{
    for (int i = 1; i < (n + 1) / 2; i++)
    {
        if (composite[i] && composite[n - i])
            return {i, n - i};
    }
    return {0, 0};
}

void Vatsh()
{
    // Your logic goes here
    int n;
    cin >> n;
    vector<bool> composite(n + 1, false);
    func(composite);
    vector<int> v = solve(n, composite);
    cout << v[0] << " " << v[1] << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tt = 1;
    // cin >> tt;
    while (tt--)
        Vatsh();

    return 0;
}
