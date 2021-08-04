#include<bits/stdc++.h>
using namespace std;


int count(int x){
    if (x==0)
        return 0;
    return count(x/10)+1;
}

int main()
{
    int x=50000;
    cout << count(x);
    return 0;
}