// Input : Queue[] = { 5, 1, 2, 6, 3, 4 } 
// Output : No 

//  Input : Queue[] = { 5, 1, 2, 3, 4 } 
// Output : Yes 
#include<bits/stdc++.h>
using namespace std;

bool check_sorted(int n,queue<int>& q)
{
    int fnt;
    int expected=1;
    stack<int> s;


    while (!q.empty())
    {
        fnt=q.front();
        q.pop();
        if(fnt==expected) {
            expected++; 
        }
        else
        {
            if(s.empty()) s.push(fnt);
            else if(!s.empty() && s.top()<fnt) return false;
            else s.push(fnt);

        }
        
        while (!s.empty() && s.top()==expected)
        {
            s.pop();
            expected++;
        }
        
    }

    if(expected-1==n && s.empty()) return true;
    return false;
    
}



int main()
{
    queue<int> q1;
    q1.push(5);
    q1.push(1);
    q1.push(2);
    q1.push(6);
    q1.push(3);
    q1.push(4);


    check_sorted(q1.size(),q1) ? cout<<"Yes\n" : cout<<"No\n";

}