/*

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++){int x;cin >> x;v.push_back(x);}
// // O(n^2) time ,O(1) space
    // vector<int> ans;
    // for (int i = 0; i < n; i++)
    // {
    //     int x = v[i];
    //     int add = -1;
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (v[j] > x)
    //         {
    //             add = v[j];
    //             break;
    //         }
    //     }
    //     ans.push_back(add);
    // }

// O(n) time ,O(n) space ---> using stack
    vector<int> ans(n,-1);
    stack<int> s;
    for (int i = n - 1; i >= 0; i--)
    {
        while (!s.empty() && s.top() < v[i])
        {
            s.pop();
        }
        if (s.empty())
            ans[i]=(-1);
        else
            ans[i]=(s.top());
        s.push(v[i]);
    }
    for (auto i : ans)
        cout << i << " ";

    return 0;
}
*/

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
    stack<int> s;
    vector<int> ans;
    for (int i = n - 1; i >= 0; i--)
    {
        if (s.empty())
        {
            ans.push_back(-1);
        }
        else if (!s.empty() && s.top() > v[i])
        {
            ans.push_back(s.top());
        }
        else
        {
            while (!s.empty() && s.top() <= v[i])
            {
                s.pop();
            }
            if (s.empty())
            {
                ans.push_back(-1);
            }
            else
            {
                ans.push_back(s.top());
            }
        }
        s.push(v[i]);
    }
    reverse(ans.begin(), ans.end());
    for (auto i : ans)
        cout << i << " ";
    cout << endl;
}