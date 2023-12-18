

#ifndef STACKS_STACK_H
#define STACKS_STACK_H
#include "NodeStack.h"

class Stack {
private:
    NodeStack* top;
    int height = 0 ;
public:
    explicit Stack(int value);

    void getTop();
    void getHeight() const;
    void printStack();
    void push(int value);
    void pop() ;
};


#endif //STACKS_STACK_H
