#include<bits/stdc++.h>
using namespace std;


int main()
{
    int arr[] = {9,1,8,6,3,4,2,7,10,15};
    int n= sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    vector<int> a;
    for(int i=0;i<n;i++){
        cout << arr[i];
    }

}