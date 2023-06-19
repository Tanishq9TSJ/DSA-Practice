//Given the head of a linked list, reverse the nodes of the list k
//at a time, and return the modified list
#include <iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;

    Node(int data){
        val = data;
        next = NULL;
    }
};

class LinkedList{
    public:
    Node* head;

    LinkedList(){
        head = NULL;
    }

    void insertAtTail(int value){
        Node* new_node = new Node(value);
        if(head == NULL){
            head = new_node;
            return;
        }

        Node* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = new_node;
    }

    void display(){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->val<<"->";
            temp = temp->next;
        }cout<<"NULL"<<endl;
    }
};

Node* reverseKLL(Node* &head, int k){
    Node* prevptr = NULL;
    Node* currptr = head;

    int counter = 0;   //for counting first k nodes

    while(currptr!=NULL && counter<k){  //reversing first k nodes
        Node* nextptr = currptr->next;
        currptr->next = prevptr;
        prevptr = currptr;
        currptr = nextptr;
        counter++;
    }

    //currptr will give us (k+1)th node
    if(currptr != NULL){
        Node* new_head = reverseKLL(currptr,k);  //recursive call
        head->next = new_head;
    }
    return prevptr; //prevptr will give the new_head of connected linkedlists
}

int main(){
    LinkedList ll;
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(4);
    ll.insertAtTail(5);
    ll.insertAtTail(6);
    ll.display();

    ll.head = reverseKLL(ll.head, 2);
    ll.display();

}