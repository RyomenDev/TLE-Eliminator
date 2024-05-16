// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/J

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define endl "\n"
#define mod 1000000007 // 1e9

void sieve(vector<bool> &primes, ll n)
{
    primes[0] = false;
    primes[1] = false;
    for (ll i = 2; i * i <= n; i++)
    {
        if (primes[i])
        {
            for (ll j = i * i; j <= n; j += i)
            {
                primes[j] = false;
            }
        }
    }
}

void Vatsh(vector<bool> &primes)
{
    // Your logic goes here
    int num;
    cin >> num;
    vector<int> ans;
    for (ll i = 0; i <= num; i++)
    {
        if (primes[i])
            ans.emplace_back(i);
    }
    for (auto i : ans)
        cout << i << " ";
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n = 1e4;
    vector<bool> primes(n, true);
    sieve(primes, n);
    ll tt = 1;
    // cin >> tt;
    while (tt--)
        Vatsh(primes);

    return 0;
}