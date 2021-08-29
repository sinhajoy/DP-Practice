#include<bits/stdc++.h>
using namespace std;


char* removedupstr(char str[]){
    if(str[0]=='\0')return;
    char st[30] = removedupstr(str+1);
    return str;
}


int main()
{
    char str[30];
    cin >> str;

    cout << removedupstr(str);
}