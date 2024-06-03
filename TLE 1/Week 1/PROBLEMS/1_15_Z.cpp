// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Z

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define MOD 1000000007 // 1e9

bool solve(ll A, ll B, ll C, ll D)
{
    return B * log(A) > D * log(C);
}

void Vatsh()
{
    ll A, B, C, D;
    cin >> A >> B >> C >> D;

    if (solve(A, B, C, D))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll tt = 1;
    // cin>>tt;
    while (tt--)
        Vatsh();

    return 0;
}