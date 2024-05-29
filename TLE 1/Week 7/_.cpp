#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 2, 3, 4, 2};
    cout << count(v.begin(), v.end(), 2) << endl;
    erase(v, 2); // ! Requires C++20

    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    // ^ index = iterator of (x) - v.begin(); (in vector)
    int a, b;
    string s;

    return 0;
}
