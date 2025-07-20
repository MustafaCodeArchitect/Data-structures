#include "SinglyLinkedList.h"

int main() {
    Linkedlist list;
    list.insertFirst(50);
    list.insertFirst(40);
    list.insertFirst(30);
    list.insertFirst(20);
    list.insertFirst(10);
    list.insertBefore(40,35);
    list.Append(60);
    list.Display();
    list.reverse();
    list.Display();
    list.Delete(40);
    list.Display();
    cout << list.count() << endl;
    cout << list.isFound(100) << endl;
    cout << list.isFound(50) << endl;



    return 0;
}
