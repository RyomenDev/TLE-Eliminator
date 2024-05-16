// https://codeforces.com/problemset/problem/1269/A
// A. Equation

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl "\n"
#define mod 1000000007 // 1e9

// find all composite number
bool isComposite(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return true;
        }
    }
    return false;
}
// any number multiplied by x , x>1 will be composite
// return (x+1)*n-x*n , which will be n
vector<int> solve()
{
    int n;
    cin >> n;
    for (int i = 4; i < 15; i++)
    {
        if (isComposite(i))
        {
            int temp = n + i;
            if (isComposite(temp))
            {
                return {temp, i};
            }
        }
    }
    return {0, 0};
}

void Vatsh()
{
    // Your logic goes here
    int n;
    // cin >> n;
    vector<int> ans = solve();
    cout << ans[0] << " " << ans[1] << endl;
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