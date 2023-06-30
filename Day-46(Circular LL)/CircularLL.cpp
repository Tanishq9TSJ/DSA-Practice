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

class CircularLinkedList{
    public:
    Node* head;

    CircularLinkedList(){
        head = NULL;
    }

    void display(){
        Node* temp = head;
        do{
            cout<<temp->val<<"->";
            temp = temp->next;
        }while(temp != head);
        cout<<endl;
    }

    void printCircular(){
        Node* temp = head;
        for(int i=0;i<18;i++){
            cout<<temp->val<<"->";
            temp = temp->next;
        }cout<<endl;
    }

    void insertAtStart(int val){
        Node* new_node = new Node(val);
        if(head == NULL){
            head = new_node;
            new_node->next = head;  //circular linked list
            return;
        }

        Node* tail = head;
        while(tail->next != head){
            tail = tail->next;
        }
        //now tail is pointing to the last node

        tail->next = new_node;
        new_node->next = head;
        head = new_node;
    }

    void insertAtEnd(int val){
        Node* new_node = new Node(val);

        if(head == NULL){
            head = new_node;
            new_node->next = head;  //circular linked list
            return;
        }

        Node* tail = head;
        while(tail->next != head){
            tail = tail->next;
        }
        //here tail will be pointing to last node

        tail->next = new_node;
        new_node->next = head;
    }

    void deleteAtStart(){
        if(head == NULL){
            return;
        }

        Node* temp = head;
        Node* tail = head;
        while(tail->next != head){
            tail = tail->next;
        }

        head = head->next;
        tail->next = head;
        free(temp);
    }

    void deleteAtEnd(){
        if(head == NULL){
            return;
        }

        Node* tail = head;
        while(tail->next->next != head){
            tail = tail->next;
        }
        //here tail is pointint to the second last node

        Node* temp = tail->next; //to be deleted
        tail->next = head;
        free(temp);
    }
};

int main(){
    CircularLinkedList cll;
    cll.insertAtStart(5);
    cll.insertAtStart(4);
    cll.insertAtStart(3);
    cll.insertAtStart(2);
    cll.insertAtStart(1);
    cll.insertAtEnd(6);
    cll.display();
    cll.deleteAtStart();
    cll.display();
    cll.deleteAtEnd();
    cll.display();
    cll.printCircular();

    return 0;
}

