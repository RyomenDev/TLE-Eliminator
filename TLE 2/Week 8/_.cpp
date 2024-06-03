#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define endl "\n"

bool cmp(int a,int b){
    return abs(a)>abs(b);
}

void Vatsh()
{
    set<int> st = {1, 2, 4, 5, 7, 8};

    //  !  lower_bound(s.begin(),s.end()); ! never for sorted datatypes - when random access is not possibleD
    cout << *st.lower_bound(3) << endl;
    // cout <<*st.begin()<<endl;
    // cout <<*begin(st)<<endl;

    // ! cout<<*(st.lower_bound(3)-begin(st))<<endl; // wrong
    cout << distance(st.begin(), st.lower_bound(3)) << endl;

    /*
        @ WRONG set doesn't allow getting index
        auto it1 = st.lower_bound(3);
        auto it2 = begin(st);
        cout << *it1 << " " << *it2 << endl;
        cout << *(it1 - it2) << endl;
    */

    // ^ priority queue is much faster than set
    priority_queue<int> pqMax;                         // max-heap
    priority_queue<int, vector<int>, greater<>> pqMin; // datatype,storing datatype,comparator : min-heap

    // ! priority queue with comparator
    priority_queue<int, vector<int>, decltype(&cmp)> pq(cmp); // similarly for set | map | all sorted dataTypes
    pq.push(3);
    pq.push(-1);
    pq.push(-7);
    pq.push(6);

    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
}

int32_t main()
{

    int tt = 1;
    // cin >> tt;
    while (tt--)
        Vatsh();

    return 0;
}