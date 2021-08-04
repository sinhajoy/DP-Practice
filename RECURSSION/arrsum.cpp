#include<bits/stdc++.h>
using namespace std;


int arrsum(int arr[], int size){
    if (size==0){
        return 0;
    }
    
    return arr[0]+arrsum(arr+1,size-1);
}

int main()
{
    int arr[] = {1,2,5,6,4,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << arrsum(arr,n);
}