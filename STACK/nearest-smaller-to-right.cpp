//
// Created by joysi on 02-09-2021.
//

//Input: [1, 6, 4, 10, 2, 5]
//Output: [-1, 4, 2, 2, -1, -1]

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(6);
    arr.push_back(4);
    arr.push_back(10);
    arr.push_back(2);
    arr.push_back(5);

    vector<int> ans_right;
    stack<pair<int,int>> st;

    for(int i=arr.size()-1;i>=0;i--){
        if(st.empty()) ans_right.push_back(-1);

        else if(!st.empty() && st.top().first < arr[i]) ans_right.push_back(st.top().second);

        else if(!st.empty() && st.top().first>=arr[i]){

            while(!st.empty() && st.top().first>=arr[i])
            {
                st.pop();
            }

            if(st.empty()) ans_right.push_back(-1);

            else ans_right.push_back(st.top().second);
        }

        st.push({arr[i],i});
    }

    reverse(ans_right.begin(),ans_right.end());
    for(int x:ans_right) cout << x << " ";
}