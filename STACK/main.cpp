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

    vector<int> ans;
    stack<int> s;

    for(int i=arr.size()-1;i>=0;i--){
        //cout<<arr[i]<<" "<<endl;
        if(s.empty()) ans.push_back(-1);
        else if(s.size()>0 && s.top()<arr[i]) {
            ans.push_back(arr[i]);
            cout<<"Ex for " << arr[i]<<endl;
        }
        else if(s.size()>0 && s.top()>=arr[i]){
            while (!s.empty() && s.top()<arr[i]){
                cout << s.top()<<endl;
                s.pop();
            }
            if(s.empty()) ans.push_back(-1);
            else ans.push_back(arr[i]);
        }
        s.push(arr[i]);
    }
    reverse(arr.begin(),arr.end());
    for(int x:ans) cout << x << " ";
}