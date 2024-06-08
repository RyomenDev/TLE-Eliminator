/*

% Range of int -> -1e9 to 1e9
% long long -> -1e18 to 1e18

*/

/*
! st.erase(it1,it2) // [it1,it2)
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl "\n"

void Vatsh()
{
    // Your logic goes here
    vector<int> v = {2, 8, 0, 3};
    v.push_back(5);
    v.push_back(4);
    v.push_back(7);
    v.push_back(3);

    auto it = find(v.begin(), v.end(), 7);
    v.erase(it);
    while (v.size() > 0) {
        cout << v[v.size() - 1] << " ";
        v.pop_back();
    }
    cout << endl;
    cout << v.size() << endl;
    for (int i = 0;;) { cout << "ans" << endl; cout << "v" << endl; }
}

int32_t main()
{

    int tt = 1;
    // cin >> tt;
    while (tt--)
        Vatsh();

    return 0;
}