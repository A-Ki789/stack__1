#include <iostream>
#include "Stack.h"
#include "NodeStack.h"
using namespace std;

Stack::Stack(int value) {
    auto* newNode = new NodeStack(value);
    top = newNode;
    height++;
}

void Stack::getTop() {
    cout<<"Top: "<<top->value;
}

void Stack::getHeight() const {
    cout<<"Height: "<<height<<endl;
}

void Stack::printStack() {
    auto* temp = top;
    while(temp){
        cout<<temp->value<<endl;
        temp = temp->next;
    }
}

void Stack::push(int value) {
    auto* newNode = new NodeStack(value);
    if(height == 0){top = newNode;}
    else{
    newNode->next = top;
    top = newNode;
    }
    height++;
}

void Stack::pop()  {
    if (height==0){return;}
    if (height==1){top = nullptr;}
    else{
        auto* temp = top;
        top = top->next;
        delete temp;
    }
    height--;
}


