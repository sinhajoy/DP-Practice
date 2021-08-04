#include<bits/stdc++.h>
using namespace std;


bool checksort(int arr[], int size,int num){
    if (size==0 && arr[0] != num){
        return false;
    }
    if(arr[0]==num) return true;
    return checksort(arr+1,size-1,num);
}

int main()
{
    int arr[] = {1,2,3,0,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << checksort(arr,n,6);
}