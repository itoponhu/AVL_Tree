#pragma once

#include <iostream>
class Node
{
    int value;
    int counter;
    Node* top;
    Node* left;
    Node* right;

    void rotateRight();
    void rotateLeft();
    void leftInsert(Node* child);
    void rightInsert(Node* child);
public:
    Node(int value);
    Node(int value, Node* parent);
};