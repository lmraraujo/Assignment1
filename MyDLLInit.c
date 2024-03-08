#include<stdlib.h>
#include<stdio.h>
#include "dll.h"

void MyDLLInit(DoublyLinkedList* dll) {
    // Inicializa os membros da estrutura DoublyLinkedList
    dll->size = 0; 
    dll->head = NULL; // -1 -> list is empty
    dll->tail = NULL; // -1 -> list is empty

    // Initialize all nodes as free 
    for (int i = 0; i < MAX_ELEMENTS; i++) {
        dll->nodes[i].isUsed = 0; // Node not in use
        dll->nodes[i].next = -1; 
        dll->nodes[i].prev = -1; 
    }
}
