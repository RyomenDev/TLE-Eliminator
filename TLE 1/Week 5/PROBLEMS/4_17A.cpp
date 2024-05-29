// https://codeforces.com/problemset/problem/17/A

// A. Noldbach problem

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl "\n"

void Prime(vector<bool> &prime)
{
    int n = prime.size();
    for (int i = 2; i * i < n; i++)
        if (prime[i])
            for (int j = i + i; j < n; j += i)
                prime[j] = false;
}

bool check(vector<int> v, int num)
{
    for (int i = 0; i < v.size(); i++)
    {   
        auto it = find(v.begin(), v.end(), num - v[i]);
        if (it != v.end())
        {
            if (abs((it - v.begin()) - i) == 1)
                return true;
        }
    }
    return false;
}

void Vatsh()
{
    // Your logic goes here
    int n, k;
    cin >> n >> k;
    vector<bool> prime(n + 1, true);
    Prime(prime);

    vector<int> primes;
    for (int i = 2; i <= n; i++)
        if (prime[i])
            primes.push_back(i);

    int ans = 0;
    for (auto i : primes)
    {
        if (check(primes, i-1))
        {
            // cout << i << " " << "YES" << endl;
            ans++;
        }
    }
    if (ans >= k)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int32_t main()
{

    int tt = 1;
    // cin >> tt;
    while (tt--)
        Vatsh();

    return 0;
}