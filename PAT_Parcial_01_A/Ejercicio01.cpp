#include "Ejercicio01.h"

Node<char>* Ejercicio01::remove(Node<char>* head)
{
    Node<char>* currentNode = head;

    if (head == nullptr || head->next == nullptr) {
        return head;
    }


    while (currentNode->next != nullptr) {
        if (currentNode->value == currentNode->next->value) {
            Node<char>* nodeTemp = currentNode->next;
            currentNode->next = currentNode->next->next;
            delete nodeTemp;
        }
        else {
            currentNode = currentNode->next;
        }
    }

    return head;
}
