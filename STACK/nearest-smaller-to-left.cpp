// INPUT - 4,5,2,10,8
//OUTPUT - -1,4,-1,2,2

#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr;
    arr.push_back(4);
    arr.push_back(5);
    arr.push_back(2);
    arr.push_back(10);
    arr.push_back(8);

    vector<int> ans;

    stack<pair<int,int>> s;

    for(int i=0;i<arr.size();i++) {
        if(s.empty()) ans.push_back(-1);

        else if(!s.empty() && s.top().first < arr[i]) ans.push_back(s.top().second);

        else if(!s.empty() && s.top().first>=arr[i]){

            while(!s.empty() && s.top().first>=arr[i])
            {
                s.pop();
            }

            if(s.empty()) ans.push_back(-1);

            else ans.push_back(s.top().second);
        }

        s.push({arr[i],i});

    }

    for (int  x: ans) cout<<x<<" ";

}