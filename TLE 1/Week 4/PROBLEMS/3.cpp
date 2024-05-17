// https://cses.fi/problemset/task/1713
// Counting Divisors

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl "\n"
#define mod 1000000007 // 1e9+7

// Function to precompute number of divisors for each number up to max_value
void precomputeDivisors(vector<int> &divisors, int max_value)
{
    for (int i = 1; i <= max_value; ++i)
    {
        for (int j = i; j <= max_value; j += i)
        {
            divisors[j]++;
        }
    }
}

void Vatsh(const vector<int> &divisors)
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];
    for (int i : v)
        cout << divisors[i] << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    const int MAX_VALUE = 1e6;
    vector<int> divisors(MAX_VALUE + 1, 0);
    precomputeDivisors(divisors, MAX_VALUE);

    int tt = 1;
    // cin >> tt;
    while (tt--)
        Vatsh(divisors);

    return 0;
}
