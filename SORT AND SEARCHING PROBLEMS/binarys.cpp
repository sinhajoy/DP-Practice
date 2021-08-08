#include<bits/stdc++.h>
using namespace std;

int binsearch(int arr[],int l,int r,int x){
    
    if(r>=l)
    {
        int mid=l + (r - l) / 2;
        if(arr[mid]==x) return mid;
        else if(arr[mid]>x){
            return binsearch(arr,l,mid-1,x);
        }
        else return binsearch(arr,mid+1,r,x);
    }

    return -1;
}




int main(){
    int arr[]={ 2, 3, 4, 10, 40 };
    int n=sizeof(arr)/sizeof(arr[0]);
    int res=binsearch(arr,0,n-1,10);
    (res==-1)?cout<<"ELEMENT NOT FOUND"<<endl : cout << res;
    return 0;
}