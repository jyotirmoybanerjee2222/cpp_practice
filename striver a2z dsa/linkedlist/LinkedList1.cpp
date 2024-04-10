#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
       int data;
       Node* next;

    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};
void InsertAtHead(Node* &head,int d)
{
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;

}
void InsertAtTail(Node* &tail,int d)
{
    Node* temp=new Node(d);
    tail->next=temp;
    tail=temp; 

}
void InsertAtPosition(Node*  &tail,Node* &head,int position,int d)
{
    //insert at 4
    if(position==1)
    {
        InsertAtHead(head,d);
        return;
    }

    Node* temp=head;
    int cnt = 1;
    while(cnt<position-1)
    {
        temp =temp->next;
        cnt++;
    }
    if(temp -> next == NULL)
    {
        InsertAtTail(tail,d);
        return;
    }
    // creation a node for d 
    Node* NodeToInsert = new Node(d);
    NodeToInsert->next=temp->next;
    temp->next = NodeToInsert;


}
void printList(Node* &head)
{
    Node* temp =head;
    while( temp != NULL)
    {
       cout<<temp->data<<" ";
       temp=temp->next;
    }
    cout<<endl;
    
}
int main(){
    Node* node1=new Node(10);
    //cout<<node1->data<<endl;
    //cout<<node1->next<<endl;

    Node* head= node1;
    Node* Tail= node1;
   // printList(head);
    InsertAtHead(head,20);
    InsertAtHead(head,30);
    InsertAtTail(Tail,40);
    printList(head);
    InsertAtPosition(Tail,head,5,22);
    printList(head);

    return 0;
}