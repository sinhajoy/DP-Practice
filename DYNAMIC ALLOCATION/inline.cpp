#include<iostream>
using namespace std;

int power(int x,int n)
{
    if (n==1){
        return x;
    }
    return x*power(x,n-1);
}
int main(){
    int x=2,y=2;
    cout << power(x,y);
    return 0;
}