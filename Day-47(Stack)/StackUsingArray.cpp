#include <iostream>
using namespace std;

class Stack{
    public:
    int capacity;
    int* arr;
    int top;

    
    Stack(int c){
        this->capacity = c;
        arr = new int[c];
        this->top = -1;
    }

    void push(int data){
        if(this->top == this->capacity - 1){\
            cout <<"Stack Overflow\n";
            return;
        }
        this->top++;
        this->arr[this->top] = data;
    }

    int pop(){
        if(this->top == -1)
        {
            cout<<"Stack Underflow\n";
            return INT_MIN;
        }
        this->top--;
    }

    int checktop(){
        if(this->top == -1){
            cout<<"Underflow\n";
            return INT_MIN;
        }
        return this->arr[this->top];
    }

    bool isEmpty(){
        return this->top = -1;
    }

    int size(){
        return this->top + 1;
    }

    bool isFull(){
        return this->top = this->capacity - 1;
    }
};

int main(){
    Stack sk(5);
    sk.push(1);
    sk.push(2);
    sk.push(3);
    sk.pop();
}