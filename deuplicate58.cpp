#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "test string";

    map<char, int> ch;

    for (int i = 0; i < s.length(); i++)
    {
        ch[s[i]]++;
    }

    for (auto it : ch)
    {
        if (it.second > 1)
        {
            cout << it.first << " Count " << it.second << endl;
        }
    }
    //s Count 2
    //t Count 3

    return 0;
}