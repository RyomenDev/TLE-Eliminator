// https://atcoder.jp/contests/abc263/tasks/abc263_a

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl "\n"
#define mod 1000000007 // 1e9

void Vatsh()
{
    // Your logic goes here
    int cards[5];
    for (int i = 0; i < 5; i++)
        cin >> cards[i];

    int c1 = -1, c2 = -1;
    for (auto i : cards)
    {
        if (c1 == -1)
            c1 = i;
        else if (c2 == -1 && c1 != i)
            c2 = i;
    }
    int cnt1 = 0, cnt2 = 0;
    for (auto i : cards)
    {
        if (i == c1)
            cnt1++;
        else if (i == c2)
            cnt2++;
    }
    if ((cnt1 == 2 && cnt2 == 3) || (cnt1 == 3 && cnt2 == 2))
    {
        cout << "Yes" << endl;
        return;
    }
    cout << "No" << endl;

    return;
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