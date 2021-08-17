#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* next;
};

struct Node* head= NULL;

void insert_head(int x){
    struct Node* new_node = new Node();
    new_node ->data = x;
    new_node ->next =NULL;
    if(head!=NULL){
        new_node ->next =NULL;
    }
    head = new_node;
}


int main()
{
    insert_head(1);
}
