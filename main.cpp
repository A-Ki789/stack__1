#include <iostream>
#include "Stack.h"
#include "NodeStack.h"
using namespace std;


int main(){
    auto* newList = new Stack(23);
    newList->pop();
    newList->printStack();
    newList->getTop();
}