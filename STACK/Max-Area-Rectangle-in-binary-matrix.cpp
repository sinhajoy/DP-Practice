#include<bits/stdc++.h>
using namespace std;

int MAH(vector<int> arr)
{
    vector<int> ans_left;

    stack<pair<int,int>> s;

    for(int i=0;i<arr.size();i++) {
        if(s.empty()) ans_left.push_back(-1);

        else if(!s.empty() && s.top().first < arr[i]) ans_left.push_back(s.top().second);

        else if(!s.empty() && s.top().first>=arr[i]){

            while(!s.empty() && s.top().first>=arr[i])
            {
                s.pop();
            }

            if(s.empty()) ans_left.push_back(-1);

            else ans_left.push_back(s.top().second);
        }

        s.push({arr[i],i});

    }

    // for (int  x: ans_left) cout<<x<<" ";
    // cout<<endl;


    // Nearest smaller to Right

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
    // for(int x:ans_right) cout << x << " ";
    // cout << endl;

    vector<int> ans;

    for(int i=0;i<arr.size();i++){
        ans.push_back(arr[i]*(ans_right[i]-ans_left[i]-1));
    }

    return *max_element(ans.begin(),ans.end());
}

int main()
{

    vector<vector<int>> A
    {
        { 0, 1, 1, 0 },
        { 1, 1, 1, 1 },
        { 1, 1, 1, 1 },
        { 1, 1, 0, 0 },
    };

    vector<int> v;

    for (int i = 0; i < A.size(); i++)
    {
        v.push_back(A[0][i]);
    }
    
    int mx=MAH(v);

    for (int i = 1; i < A.size(); i++)
    {
        for (int j = 0; j < A.size(); j++)
        {
            if(A[i][j]==0) v[j]=0;
            else v[j]=v[j]+A[i][j];
        }
        for(auto x:v) cout<<x<<" ";
        cout<<endl;
        cout<<MAH(v)<<endl;
        mx=max(mx,MAH(v));
        
    }

    cout<<mx<<" Finally beriache";
    
    



}
