#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl "\n"

int32_t main()
{
    vector<int> v = {1, 5, 3, 4, 6, 5, 9};
    erase(v, 5); // erase all 5
    for (auto i : v)
        cout << i << " ";
    cout << endl;

    return 0;
}