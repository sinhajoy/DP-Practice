//Link - https://www.geeksforgeeks.org/program-generate-possible-valid-ip-addresses-given-string/
#include <bits/stdc++.h>
#define ll long long int;
using namespace std;
bool isValid(string s)
{
    if (s.length() > 3)
    {
        return false;
    }
    if (s.front() == '0' and s.length() > 1)
    {
        return false;
    }
    int num = stoll(s);
    return (num >= 0 and num <= 255);
}
int main()
{
    string input, first, second, third, forth;
    cin >> input;

    vector<string> ans;

    for (int i = 0; i < 3; i++)
    {
        first = input.substr(0, i);
        if (isValid(first))
        {
            for (int j =i;j<3;j++){
                second=input.substr(i,j);
                ans.push_back(first);
                ans.push_back(second);
            }
        }
    }

    for (auto i : ans)
    {
        cout << i << " , ";
    }
}