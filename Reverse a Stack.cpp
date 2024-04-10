#include <bits/stdc++.h>
using namespace std;
class  Solution
{
public:
    void call(stack<int> &s1, stack<int> &s2)
    {
        if (s1.empty())
            return;
        s1.pop();
        call(s1, s2);
        s1.push(s2.top());
        s2.pop();
    }
    void Reverse(stack<int> &s)
    {
        stack<int> news = s;
        call(s, news);
    }
};


// -----------------------------------or---------------------------------

class Solution{
public:
    void insertAtLast(stack<int> &s,int val){
        if(s.size() == 0){
            s.push(val);
            return ;
        }
        int data = s.top();
        s.pop();
        insertAtLast(s,val);
        s.push(data);
    }
    void Reverse(stack<int> &s){
        if(s.size() == 0)return ;
        int data = s.top();
        s.pop();
        Reverse(s);
        insertAtLast(s,data);
    }
};