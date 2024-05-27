
// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/C

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mod 1000000007 // 1e9

bool isEven(ll num)
{
    return (num & 1) == 0;
}

bool isPositive(ll num)
{
    return num >= 0;
}

vector<ll> solve(vector<int> &arr)
{
    ll o = 0, e = 0, p = 0, n = 0;
    for (auto i : arr)
    {
        if (isEven(i))
            e++;
        else
            o++;
        if (isPositive(i))
        {
            if (i != 0)
                p++;
        }
        else
            n++;
    }
    cout << endl;
    return {e, o, p, n};
}

void Vatsh()
{
    // Your logic goes here
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<ll> ans = solve(arr);
    cout << "Even: " << ans[0] << endl;
    cout << "Odd: " << ans[1] << endl;
    cout << "Positive: " << ans[2] << endl;
    cout << "Negative: " << ans[3] << endl;
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