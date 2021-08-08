#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isThree(int n) {
        vector<int> ans;
        for(int i=1;i<=n;i++){
            if(n%i==0){
                ans.push_back(i);
            }
        }
        if(ans.size()>=3){return true;}
        else return false;
    }
};