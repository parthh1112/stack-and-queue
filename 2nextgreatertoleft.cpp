/*

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){int x;cin>>x;v.push_back(x);}
// O(n^2) time, O(1) space
/*
    vector<int> ans;
    for(int i=0;i<n;i++){
        int x = v[i];
        for(int j=i-1;j>=0;j--){
            if(x < v[j]){
                x = v[j];
                break;
            }
        }
        if(x == v[i]) ans.push_back(-1);
        else ans.push_back(x);
    }
    for(auto i : ans)cout<<i<<" ";


// O(n) space, O(n) time
    vector<int> ans;
    stack<int> s;
    for(int i=0;i<n;i++){
        if(s.empty()) ans.push_back(-1);
        else{
            while(!s.empty() && s.top() < v[i]) s.pop();
            if(s.empty()) ans.push_back(-1);
            else ans.push_back(s.top());
        }
        s.push(v[i]);
    }
    for(auto i : ans)cout<<i<<" ";
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
    for (int i = 0; i < n; i++)
    {
        if (s.empty())
        {
            ans.push_back(-1);
        }
        else if (s.top() > v[i])
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
    for (auto i : ans)
        cout << i << " ";
    cout << endl;
}