#include "../headers/tree.h"

void Node::rotateRight()
{
    Node* temp = left->right;
    left->top = this->top;
    this->top = this->left;
    

}