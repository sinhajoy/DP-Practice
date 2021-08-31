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

    stack<int> s;

     for(int i=0;i<arr.size();i++)
     {
         if(s.size()==0)
         {
             ans.push_back(-1);
         }
         else if(s.size()>0 && s.top()<arr[i]){
             ans.push_back(s.top());
         }
         else if(s.size()>0 && s.top()>=arr[i]){
             while(s.top() > arr[i] || s.size() <= 0){
                 s.pop();
             }
             if(s.size()==0) ans.push_back(-1);
             else ans.push_back(s.top());
         }
         s.push(arr[i]);
     }

    //cout<<"Joy Sinha"<<endl;
    for (int  x: ans) cout<<x<<" ";

}