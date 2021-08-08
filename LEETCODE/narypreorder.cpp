#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> preorder(Node* root) {
     
        vector<int> ans;
        if(!root){
            return ans;
        }
        
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            int node=q.size();
            while(node--){
                Node* curr = q.front();
                q.pop();
                for(auto node:curr->children)
                {
                ans.push_back(node->vak);
                q.push(node);
                }
            }
        }



        return ans;
    }
};
