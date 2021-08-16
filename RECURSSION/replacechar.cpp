#include<bits/stdc++.h>
using namespace std;

void replace(char str[])
{
    if(str[0]=='\0') return;
    if(str[0]!='b'){
        replace(str+1);
    }
    else if(str[0]=='b'){
        str[0]='c';
        replace(str+1);
    }
    
}
int main(){
    char str[100];
    cin>>str;
    replace(str);
    cout<<str;
    return 0;

}