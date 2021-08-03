#include<iostream>
using namespace std;

void update(int *p){
    *p = 610 % 255;
}

int main()
{
    int i = 65;
    char c = i;
    cout << c <<endl;
    int * p = &i;
    char * pc =(char*)p;
    cout << *p << endl;
    cout << *pc << endl;
    cout << *pc+1 << endl;
    cout << *pc+2 << endl;
    cout << *pc+3 << endl;

    cout << p << endl;
    cout << pc << endl;

    char ch = 'A';
    update((int*)&ch);
    cout << ch;
}