#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl "\n"

void Vatsh()
{
    // Your logic goes here
    map<int, int> mp; // in array 10^6
    mp[1] = 6;
    mp[2] = 2;
    mp[5] = 7;

    // Structured Binding c++17 and later
    for (auto [a, b] : mp)
    {
        cout << a << " " << b << endl;
    }

    /*
    Requirement for Comparability : 
    Ordered Set (std::set): Elements in a std::set must be comparable because the set needs to order its elements. By default, std::set uses the < operator to keep elements sorted. If you try to use a type that does not support comparison (i.e., does not overload the < operator), it will result in a compilation error.
    Unordered Set (std::unordered_set): Elements are stored in hash tables and do not need to be comparable. Instead, they need to be hashtable, which means there must be a function that computes a hash value for the elements.
    */

    /*
    Implementation:
         Ordered Set (std::set): balanced binary search tree - Red-Black Tree,
        Unordered Set (std::unordered_set): hash table

    */
    set<pair<int, int>> s; // pair are comparable - correct
    // unordered_set<pair<int,int>>st; // Incorrect
}

int32_t main()
{

    int tt = 1;
    // cin >> tt;
    while (tt--)
        Vatsh();

    return 0;
}