// https://codeforces.com/problemset/problem/271/A

// find the minimum year number which is strictly larger than the given one and has only distinct digits.

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl "\n"
#define mod 1000000007 // 1e9

bool isDistinctDigits(int n)
{
    string temp = to_string(n);
    set<int> s;
    for (auto i : temp)
        s.insert(i - '0');
    return s.size() == 4;
}

void Vatsh()
{
    // Your logic goes here
    int y;
    cin >> y;
    y++;
    while (!isDistinctDigits(y))
        y++;
    cout << y << endl;
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