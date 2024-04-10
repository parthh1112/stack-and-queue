#include <bits/stdc++.h> 
using namespace std;
void insertelement(stack<int> &s,int x){
    if(s.empty()){
        s.push(x);
        return ;
    }
    int val = s.top();
    s.pop();
    insertelement(s,x);
    s.push(val);

}
stack<int> pushAtBottom(stack<int>& s, int x) {

    insertelement(s,x);
    return s;
    
}
int main(){

}