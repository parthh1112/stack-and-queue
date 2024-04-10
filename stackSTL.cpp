#include <bits/stdc++.h>
using namespace std;
void print(stack<int> a){
    while(!a.empty()){
        cout<<a.top()<<" ";
        a.pop();
    }
    cout<<endl;
}
int main(){

    int n;cin>>n;

    stack<int> s;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        s.push(x);
    }
    stack<int> a;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        a.push(x);
    }
    print(s);
    print(a);
    cout<<endl;
    s.swap(a);
    print(s);
    print(a);
return 0;
}