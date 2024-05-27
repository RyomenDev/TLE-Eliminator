

// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/K

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mod 1000000007 // 1e9

vector<ll> solve(ll n)
{
    vector<ll> v;
    for (ll i = 1; i * i < n; i++)
    {
        if (n % i == 0)
        {
            v.push_back(i);
            v.push_back(n / i);
        }
    }
    ll temp = sqrt(n);
    if (temp * temp == n)
        v.push_back(temp);
    sort(v.begin(), v.end());
    return v;
}
void Vatsh()
{
    // Your logic goes here
    ll num;
    cin >> num;
    vector<ll> v = solve(num);
    for (ll i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
    v.clear();
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