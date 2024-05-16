// https://codeforces.com/problemset/problem/1512/A
// A. Spy Detected!

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl "\n"
#define mod 1000000007 // 1e9
 
int solve(vector<int> v)
{
    int n = v.size();
    pair<int, int> num1 = {-1, -1}, num2 = {-1, -1};
    for (int i = 0; i < n; i++)
    {
        if (num1.second == -1)
            num1 = {i, v[i]};
        else if (num2.second == -1 && v[i] != num1.second)
            num2 = {i, v[i]};
        else if (num1.second != -1 && num2.second != -1)
        {
            if (v[i] == num1.second)
                return num2.first + 1;
            else if (v[i] == num2.second)
                return num1.first + 1;
        }
    }
    return n;
}

void Vatsh()
{
    // Your logic goes here
    int n;
    cin >> n;
    vector<int> v(n);
    int i;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    cout << solve(v) << endl;
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