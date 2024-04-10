#include <bits/stdc++.h>
using namespace std;

class SortedStack
{
public:
    stack<int> s;
    void sort();
};

void printStack(stack<int> s)
{
    while (!s.empty())
    {
        printf("%d ", s.top());
        s.pop();
    }
    printf("\n");
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        SortedStack *ss = new SortedStack();
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            ss->s.push(k);
        }
        ss->sort();
        printStack(ss->s);
    }
}
void elementsort(stack<int> &s, int data)
{
    if (s.size() == 0 || (s.size() != 0 && s.top() < data))
    {
        s.push(data);
        return;
    }
    int x = s.top();
    s.pop();
    elementsort(s, data);
    s.push(x);
}
void sorts(stack<int> &s)
{
    if (s.size() == 0)
        return;
    int data = s.top();
    s.pop();
    sorts(s);
    elementsort(s, data);
}

void SortedStack ::sort()
{
    sorts(s);
}