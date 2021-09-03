#include<bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& arr) {
        // int n=nums.size()+1;
        // int x=accumulate(nums.begin(),nums.end(),0);
        // int sex=(n*(n-1))/2;
        // return sex-x;
        int i=0;
    while(i<arr.size()){
        int correct_index=arr[i];
        if(arr[i]<arr.size() && arr[correct_index]!=arr[i]){
            swap(arr[i],arr[correct_index]);
        }
        else{
            i++;
        }
    }
     for(int i=0;i<arr.size();i++){
         if(arr[i]!=i) return i;
     }   
    
        return arr.size();
    }

vector<int> missingNumbers(vector<int>& arr) {
        vector<int> ans;
        int i=0;
    while(i<arr.size()){
        int correct_index=arr[i]-1;
        if(arr[i]<arr.size() && arr[correct_index]!=arr[i]){
            swap(arr[i],arr[correct_index]);
        }
        else{
            i++;
        }
    }

    for(int x:arr) cout << x <<" ";

     for(int i=0;i<arr.size();i++){
         if(arr[i]!=i+1) ans.push_back(i+1);
     }   
        //ans.erase(ans.begin());
        return ans;
    }

void cyclic_sort(vector<int>& arr){ // Enter from Zero
    int i=0;
    while(i<arr.size()){
        int correct_index=arr[i];
        if(correct_index!=i){
            swap(arr[i],arr[correct_index]);
        }
        else{
            i++;
        }
    }

}

int main()
{
    vector<int> arr;
    // arr.push_back(3);//arr[0]
    // arr.push_back(5);
    // //arr.push_back();
    // arr.push_back(4);
    // arr.push_back(1);
    // arr.push_back(0);
    // cout << missingNumber(arr);
    
    // //for(int a:arr) cout<<a<<" ";
    //4,3,2,7,8,2,3,1
    arr.push_back(4);
    arr.push_back(3);
    arr.push_back(2);
    arr.push_back(7);
    arr.push_back(8);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(1);


    vector<int>  ans=missingNumbers(arr);
    //for(int x:ans) cout << x <<" ";
}
