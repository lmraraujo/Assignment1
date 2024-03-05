#ifndef DOUBLY_LINKED_LIST_H
#define DOUBLY_LINKED_LIST_H

#include <stdint.h>


#define MAX_ELEMENTS 100
#define ELEMENT_SIZE 256


typedef struct DLLNode {
    uint16_t key;
    unsigned char data[ELEMENT_SIZE];
    struct DLLNode* next; // Ponteiro para o proximo elemento
    struct DLLNode* prev; // Ponteiro para o elemento anterior
} DLLNode;

typedef struct {
    DLLNode nodes[MAX_ELEMENTS]; // Array estatico de nos
    int size; // Numero atual de elementos na DLL
    DLLNode* head; // Ponteiro para o primeiro elemento da lista
    DLLNode* tail; // Ponteiro para o ultimo elemento da lista
} DoublyLinkedList;


// Declaraçoes das funçoes de interface
void MyDLLInit(DoublyLinkedList* dll, int maxElements, int elementSize);
int MyDLLInsert(DoublyLinkedList* dll, uint16_t id, unsigned char* data, int dataSize);
int MyDLLRemove(DoublyLinkedList* dll, uint16_t id);
unsigned char* MyDLLFind(DoublyLinkedList* dll, uint16_t id);
unsigned char* MyDLLFindNext(DoublyLinkedList* dll, uint16_t currentId);
unsigned char* MyDLLFindPrevious(DoublyLinkedList* dll, uint16_t currentId);

#endif // DOUBLY_LINKED_LIST_H
