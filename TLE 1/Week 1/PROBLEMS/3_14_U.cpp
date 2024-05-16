// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/U

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mod 1000000007 // 1e9

void Vatsh()
{
    // Your logic goes here
    float n;
    cin >> n;
    int a = n;
    if (a == n)
    {
        cout << "int " << a << endl;
    }
    else
    {
        cout << "float " << a << " " << setprecision(3) << n - a << endl;
    }
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