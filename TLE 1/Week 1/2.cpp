// input output
// condition statements
// different types of operator:
// constants and datatypes

/*
 \ called as escape character

 \n \t
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << 'Hi' << endl; // garbage value
                          /*
                          2.cpp:18:7: warning: multi-character character constant [-WmultiChar]
                           cout<<'Hi'<<endl;
                                 ^~~~
                          18537
                          */
    char c = 102;
    cout << c << endl;

    string a, b;
    getline(cin, a); // whole line as input -  slow
    getline(cin, b);

    cout << a << endl;
    cout << b << endl;

    return 0;
}