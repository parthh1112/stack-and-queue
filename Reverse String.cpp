#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin >> a;
    stack<char> s;
    for (auto i : a)
        s.push(i);
    a = "";
    while (!s.empty())
    {
        a += s.top();
        s.pop();
    }
    cout << a << endl;
    return 0;
}