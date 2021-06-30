#include <bits/stdc++.h>
using namespace std;
int main()
{

    string str1 = "ABACD";
    string str2 = "CDBA";
    //ABACDABACD
    string check = str1 + str1;
    //cout << check << endl;
    if (check.find(str2) < check.length())
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }

    return 0;
}