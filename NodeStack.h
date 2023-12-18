

#ifndef STACKS_NODESTACK_H
#define STACKS_NODESTACK_H


class NodeStack {
public:
    int value;
    NodeStack* next;
    explicit NodeStack(int value);
};


#endif //STACKS_NODESTACK_H
