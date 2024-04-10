#include <bits/stdc++.h>
using namespace std;

int main(){

return 0;
}
class Solution {
public:
    bool isValid(string str) {
        if(str.size() == 0)return true ;
        stack<int> s;
        for(auto i : str){
            if(s.empty()) s.push(i);
            else{
                char j = s.top();
                if((j == '(' && i == ')') || (j == '[' && i == ']') || (j == '{' && i == '}'))s.pop();
                else s.push(i);
            }
        }
        if(s.empty())return true;
        return false;
    }
};