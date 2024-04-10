/*
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        v.push_back(x);
    }
    stack<int> s;
    vector<int> ans(n,-1);
    for(int i=n-1;i>=0;i--){
        if(s.empty()) ans[i] = -1;
        while(!s.empty() && s.top() >= v[i]) s.pop();
        if(!s.empty() && s.top() <= v[i]) ans[i] = s.top();
        s.push(v[i]);
    }
    for(auto i : ans)cout<<i<<" ";
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
    vector<int> ans;
    stack<int> s;
    for (int i = n - 1; i >= 0; i--)
    {
        if (s.empty())
        {
            ans.push_back(-1);
        }
        else if (s.top() < v[i])
        {
            ans.push_back(s.top());
        }
        else
        {
            while (!s.empty() && s.top() >= v[i])
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
    
    reverse(ans.begin(),ans.end());

    for (auto i : ans)
        cout << i << " ";
    cout << endl;
    
return 0;
}