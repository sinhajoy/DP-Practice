#include<bits/stdc++.h>
using namespace std;


bool checksort(int arr[], int size){
    if (size==0 || size==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    return checksort(arr+1,size-1);
}

int main()
{
    int arr[] = {1,2,3,0,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << checksort(arr,n);
}