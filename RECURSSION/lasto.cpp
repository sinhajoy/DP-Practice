#include<bits/stdc++.h>
using namespace std;

int firsto(int arr[],int size,int n){
    
    if(size==0){
        return -1;  // Trmenating Condition 
    }
    //if(arr[0]==n){return 0;}

    int ans=firsto(arr+1,size-1,n);

    if(ans!=-1) return ans+1;
    if(arr[0]==n) return 0;
    else return -1;

}

int main()
{
    int arr[] = {1,2,2,0,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << firsto(arr,n,2);
}