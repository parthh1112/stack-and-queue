#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    vector<int> ans;
    stack<pair<int, int>> s;
    for (int i = 0; i < n; i++)
    {
        if (s.empty())
        {
            ans.push_back(-1);
        }
        else if (!s.empty() && s.top().first > v[i])
        {
            ans.push_back(s.top().second);
        }
        else if (!s.empty() && s.top().first <= v[i])
        {
            while (!s.empty() && s.top().first <= v[i])
            {
                s.pop();
            }
            if (s.empty())
            {
                ans.push_back(-1);
            }
            else
            {
                ans.push_back(s.top().second);
            }
        }
        s.push({v[i], i});
    }
    int j = 0;
    for (auto i : ans)
        cout << j++ - i << " ";
    return 0;
}
