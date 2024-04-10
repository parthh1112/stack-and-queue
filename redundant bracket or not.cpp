#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int checkRedundancy(string str)
    {
        stack<char> s;
        for (auto i : str)
        {
            if (i == '(' || i == '[' || i == '{' || i == '+' || i == '-' || i == '*' || i == '/')
                s.push(i);
            else if (i == ')' || i == '}' || i == ']')
            {
                if (s.top() == '+' || s.top() == '*' || s.top() == '-' || s.top() == '/')
                {
                    while (s.top() == '+' || s.top() == '*' || s.top() == '-' || s.top() == '/')
                        s.pop();
                    s.pop();
                }
                else
                    return 1;
            }
        }
        return 0;
    }
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        Solution obj;
        int res = obj.checkRedundancy(s);
        cout << res << endl;
    }
}
