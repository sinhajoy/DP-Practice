#include<bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(int n) {
        if(n==1)return true;
        return isPowerOfTwo(n/2);
        
}
int main()
{
    int n=4;
    cout << isPowerOfTwo(n);
}