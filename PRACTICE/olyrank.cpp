#include<bits/stdc++.h>
using namespace std;

int maint(){

    int n;
    cin>>n;
    while(n--)
    {
        int a,b,c,x,y,z;
        cin>>a>>b>>c>>x>>y>>z;

        int f=a+b+c;
        int s=x+y+z;
        if(x>y){
            cout<<1;
        }
        else{
            cout<<2;
        }

    }



    return 0;
}