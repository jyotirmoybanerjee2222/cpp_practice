#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
       int data;
       Node* next;
};
void printList(Node* head)
{
    Node* temp =head;
    while( temp != NULL)
    {
       cout<<temp->data<<" ";
       temp=temp->next;
    }
}
int main(){
    Node* head=new Node();
    Node* second=new Node();
    Node* third=new Node();

    head->data=2;
    head->next=second;

    second->data=2;
    second->next=third;

    third->data=2;
    third->next=NULL;

    printList(head);

    return 0;
}