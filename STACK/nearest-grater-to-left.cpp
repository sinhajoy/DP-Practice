//
// Created by joysi on 02-09-2021.
//

#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr;
    arr.push_back(100);
    arr.push_back(80);
    arr.push_back(60);
    arr.push_back(70);
    arr.push_back(60);
    arr.push_back(75);
    arr.push_back(85);

    vector<int> ans;
    stack<int> s;

    for(int i=0;i<arr.size();i++){
        if(s.empty()) ans.push_back(-1);

        else if(!s.empty() && s.top()>arr[i]) ans.push_back(s.top());

        else if(!s.empty() && s.top()<=arr[i]){
            while(!s.empty() && s.top()<=arr[i]){
                s.pop();
            }
            if(s.empty()) ans.push_back(-1);
            else ans.push_back(s.top());
        }
        s.push(arr[i]);
    }
    for(int x:ans) cout << x << " ";
}