#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int x;
        cin >> x;
        int arr[x];
        map<int, int> m;
        for(int i=0;i<x;i++){
            cin >> arr[i];
            m[arr[i]]++;
        }
        
        for(int i=0;i<x;i++){
            if(m[arr[i]]>=2){
                cout <<arr[i] << endl;
                return 0;
            }
        }
    }
    //return 0;

}
