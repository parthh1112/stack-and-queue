#include <bits/stdc++.h>
using namespace std;
class solution{
public:
    void deletemids(stack<int> &s, int ind, int &i){
        if (s.empty() == true)return;
        int val = s.top();
        s.pop();
        deletemids(s, ind, i);
        i++;
        if (i != ind + 1)s.push(val);
    }
    void deleteMid(stack<int> &s, int size){
        int i = (size % 2 == 0) ? ((size / 2) - 1) : (size / 2);
        int t = 0;
        deletemids(s, i, t);
    }
};