#ifndef SINGLELINKEDLIST_H
#define SINGLELINKEDLIST_H

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class Linkedlist {
    Node* head;

    public:
    Linkedlist();
    bool isEmpty() const;
    bool isFound(int item) const;
    void insertFirst(int value);
    void insertBefore(int item, int value);
    void Append(int value);
    void Delete(int item);
    int count() const;
    void reverse();
    void Display() const;
};

#endif //SINGLELINKEDLIST_H
