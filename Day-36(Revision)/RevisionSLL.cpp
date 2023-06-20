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

class SLL{
    public:
    Node* head;

    SLL(){
        head = NULL;
    }

    void insertAtHead( int value){
        Node* new_node = new Node(value);
        new_node->next = head;
        head = new_node;
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

    void insertAtPosition(int val, int pos){
        if(pos == 0){
            insertAtHead(val);
            return;
        }

        Node* new_node = new Node(val);
        Node* temp = head;
        int current_pos = 0;
        while(current_pos != pos-1){
            temp = temp->next;
            current_pos++;
        }
        new_node->next = temp->next;
        temp->next = new_node;
    }

    void UpdateAtPosition(int k, int val){
        Node* temp = head;
        int curr_pos = 0;

        while(curr_pos != k){
            temp = temp->next;
            curr_pos++;
        }
        temp->val = val;
    }

    void deleteAtHead(){
        Node* temp = head;
        head = head->next;
        free(temp);
    }

    void deleteAtTail(){
        Node* second_last = head;
        while(second_last->next->next != NULL){
            second_last = second_last->next;
        }
        Node* temp = second_last->next;
        second_last->next = NULL;
        free(temp);
    }

    void deleteAtPosition(int pos){
        if(pos == 0){
            deleteAtHead();
            return;
        }
        int curr_pos = 0;
        Node* prev = head;
        while(curr_pos != pos-1){
            prev = prev->next;
            curr_pos++;
        }
        Node* temp = prev->next;
        prev->next = prev->next->next;
        free(temp);
    }

    void display(){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->val<<"->";
            temp = temp->next;
        }cout<<"NULL"<<endl;
    }
};

Node* reverseLL(Node* &head){
    Node* prevptr = NULL;
    Node* currptr = head;

    while(currptr != NULL){
        Node* nextptr = currptr->next;
        currptr->next = prevptr;
        prevptr = currptr;
        currptr = nextptr;
    }
    Node* new_head = prevptr;
    return new_head;
}

int main(){
    SLL ll;
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtHead(3);
    ll.insertAtPosition(9,3);
    ll.insertAtPosition(10,2);
    ll.UpdateAtPosition(2,11);
    ll.deleteAtHead();
    ll.deleteAtTail();
    ll.deleteAtPosition(1);
    ll.insertAtTail(4);
    ll.insertAtHead(3);
    ll.display();
    ll.head = reverseLL(ll.head);
    ll.display();
    return 0;
}