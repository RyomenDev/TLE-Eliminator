#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl "\n"

bool cmp(int a, int b)
{
    return abs(a) > abs(b);
}

void Vatsh()
{
    // Your logic goes here
    int arr[8] = {1, 2, 2, 3, 3, 6, 9, 10};
    cout << binary_search(arr, arr + 8, 9) << endl;
    cout << binary_search(arr, arr + 8, 4) << endl;

    // ! returns iterator
    auto it = lower_bound(arr, arr + 8, 3);
    cout << "lowerBound of 3: " << *it << " [" << it - begin(arr) << "]" << endl;

    it = lower_bound(arr, arr + 8, 5);
    cout << "lowerBound of 5: " << *it << " [" << it - begin(arr) << "]" << endl;

    it = upper_bound(arr, arr + 8, 3);
    cout << "upperBound of 3: " << *it << " [" << it - begin(arr) << "]" << endl;

    it = upper_bound(arr, arr + 8, 6);
    cout << "upperBound of 6: " << *it << " [" << it - begin(arr) << "]" << endl;

    it = end(arr) - 1;
    cout << *it << " [" << it - begin(arr) << "]" << endl;

    // ! set with comparator
    set<int, decltype(&cmp)> st(cmp); // similarly for priority queue | map | all sorted dataTypes
    st.insert(3);
    st.insert(-1);
    st.insert(-7);
    st.insert(6);

    for (auto i : st)
        cout << i << ' ';
    cout << endl;
}

int32_t main()
{

    int tt = 1;
    // cin >> tt;
    while (tt--)
        Vatsh();

    return 0;
}