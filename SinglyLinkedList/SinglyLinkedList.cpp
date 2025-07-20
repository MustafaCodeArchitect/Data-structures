#include "SinglyLinkedList.h"

Linkedlist::Linkedlist() : head(NULL) {};

bool Linkedlist::isEmpty() const {
    return head == NULL;
}

bool Linkedlist::isFound(int value) const {
    Node* temp = head;
    while(temp != NULL) {
        if(temp->data == value) {
            return true;
        }
        temp =temp->next;
    }
    return false;
}

void Linkedlist::insertFirst(int value) {
    Node* node = new Node;
    node->data = value;

    if(isEmpty()) {
        node->next = NULL;
        head = node;
    }

    else {
        node->next = head;
        head = node;
    }
}

void Linkedlist::insertBefore(int item, int value) {
    if(!(isFound(item))) {
        cout << "Sorry Item " << item << " Is Not Found\n";
    }

    Node* temp = head;
    while(temp != NULL && temp->next->data != item) {
        temp = temp->next;
    }

    Node* node = new Node;
    node->data = value;
    node->next = temp->next;
    temp->next = node;
}

void Linkedlist::Append(int value) {
    Node* temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }

    Node* node = new Node;
    node->data = value;
    node->next = NULL;
    temp->next = node;
}

void Linkedlist::Delete(int item) {
    Node* delptr = head;
    if(head->data == item) {
        head = head->next;
        delete delptr;
        delptr = NULL;
    }

    else {
        Node* prev = NULL;
        while(delptr->data != item) {
            prev = delptr;
            delptr = delptr->next;
        }

        prev->next = delptr->next;
        delete delptr;
        delptr = NULL;
    }
}

int Linkedlist::count() const {
    int counter = 0;
    Node* temp = head;
    while(temp != NULL) {
        counter++;
        temp = temp->next;
    }
    return counter;
}

void Linkedlist::reverse() {
    if(count() == 1) {
        cout << "Sorry, There Is Only One Item\n";
    }

    Node* Next = NULL;
    Node* prev = NULL;
    Node* curr = head;

    while(curr != NULL) {
        Next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = Next;
    }
    head = prev;
}

void Linkedlist::Display() const {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "\n";
}
