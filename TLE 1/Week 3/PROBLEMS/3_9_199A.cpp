// https://codeforces.com/problemset/problem/199/A
// A. Hexadecimal's theorem

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl "\n"
#define mod 1000000007 // 1e9

void fib(vector<int> &v)
{
    v.push_back(0);
    v.push_back(1);
    for (int i = 2; i < 1e3; i++)
    {
        int temp = v[i - 1] + v[i - 2];
        v.push_back(temp);
    }
}

vector<int> solve(int n, vector<int> v)
{
    int sz = v.size();
    for (int i = 0; i < sz; i++)
    {
        for (int j = 0; j < sz; j++)
        {
            for (int k = 0; k < sz; k++)
            {
                if (v[i] + v[j] + v[k] == n)
                {
                    return {v[i], v[j], v[k]};
                }
                if (v[i] + v[j] + v[k] > n)
                    break;
            }
            if (v[i] + v[j] > n)
                break;
        }
        if (v[i] > n)
            break;
    }
    return {};
}

void Vatsh()
{
    // Your logic goes here
    int n;
    cin >> n;
    vector<int> v;
    fib(v);
    vector<int> ans = solve(n, v);
    if (ans.size() == 0)
    {
        cout << "I'm too stupid to solve this problem" << endl;
        return;
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    return;
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