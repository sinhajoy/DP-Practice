//
// Created by joysi on 31-08-2021.
//

// Input : - 1 3 2 4
// Output : - 3 4 4 -1

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(3);
    arr.push_back(2);
    arr.push_back(4);

    vector<int> ans;

    stack<int> s;

    for(int i=arr.size()-1;i>=0;i--){

        if(s.empty()) ans.push_back(-1);
        else if(s.size()>0 && s.top()>arr[i]) ans.push_back(s.top());
        else if(s.size()>0 && s.top() <= arr[i]){
            while (!s.empty() && s.top()<=arr[i]){
                s.pop();
            }
            if(s.empty()) ans.push_back(-1);
            else ans.push_back(s.top());
        }
        s.push(arr[i]);
    }
    reverse(ans.begin(),ans.end());
    for (int  x: ans) cout<<x<<" ";
    return 0;
}