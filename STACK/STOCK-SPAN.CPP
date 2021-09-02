//
// Created by joysi on 02-09-2021.
//

//[10 4 5 90 120 80]


#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr;
    arr.push_back(10);
    arr.push_back(4);
    arr.push_back(5);
    arr.push_back(90);
    arr.push_back(120);
    arr.push_back(80);

    vector<int> ans;
    stack<pair<int,int>> s;

    for(int i=0;i<arr.size();i++){
        if(s.empty()) ans.push_back(-1);

        else if(!s.empty() && s.top().first>arr[i]) ans.push_back(s.top().second);

        else if(!s.empty() && s.top().first<=arr[i]){
            while(!s.empty() && s.top().first<=arr[i]){
                s.pop();
            }
            if(s.empty()) ans.push_back(-1);
            else ans.push_back(s.top().second);
        }
        s.push({arr[i],i});
    }
    //for(int x:ans) cout << x << " ";

    // vector<int> index;

    // for(int x:ans)
    // {
    //     auto it=find(arr.begin(),arr.end(),x);
    //     if(it!=arr.end()) index.push_back(it-arr.begin());
    //     else index.push_back(-1);

    // }
    
    vector<int> final_ans;

    for(int i=0;i<ans.size();i++){
        final_ans.push_back(i-ans[i]);
    }

    for(int x:final_ans) cout << x << " ";

}