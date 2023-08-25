#include <stdio.h>
#include <stdlib.h>
#include "DoublyLinkedList"

void init(DoublyLinkedList *List) {
    Node *trashNode = (Node*)malloc(sizeof(Node));
    trashNode->data=NULL;
    trashNode->previous=trashNode;
    trashNode->next=trashNode;
    list->size=0;
}

int enqueue(DoublyLinkedList *list, void *data) {
    Node*newNode = (Node*)malloc(sizeof(Node));
    if(newNode == NULL) return -1;
    newNode->data = data;
    newNode->next = list->first;
    newNode->previous = list->first->previous;
    list->first->previous->next = newNode;
    list->first->previous = newNode;
    list->size++;
    return 1;
}

void* dequeue(DoublyLinkedList *list) {
    if(isEmpty(list)) return NULL;
    Node *trash = list->first;
    Node *first = list->first->next;
    first->next->previous = trsh;
    trash->next = first->next;
    void *data = first->data;
    free(first);
    list->size--;
    return data;
}

void* first(DoublyLinkedList *list) {
    return list->first->next->data;
}

void* last(DoublyLinkedList *list) {
    return list->first->previous->data;
}

int push(DoublyLinkedList *list, void *data) {
    Node *newNode = (Node*) malloc(sizeof(Node));
    if(newNode==NULL) return -1;
    newNode->data = data;
    newNode->next = list->first->next;
    newNode->size++;
    list->first->next->previous = newNode;
    list->first->next = newNode;
    list->size++;
    return 1;
}

void* pop(DoublyLinkedList *list) {
    return dequeue(list);
}

void* top(DoublyLinkedList *list){
    return first(list);
}

bool isEmpty(DoublyLinkedList *list) {
    return (list->size==0);
}

int indexOf(DoublyLinkedList *list) {
    if (isEmpty(list)) return -1;
    int count=0;
    Node *aux = list->first->next;
    while(aux!=list->first && !equal(aux->data,data)) {
        aux=aux->next;
        count++;
    }
    return (aux==list->first)?-1:count;
}

Node* getNodeByPos(DoublyLinkedList *list, int pos) {
    if (isEmpty(list) || pos>=list->size) return NULL;
    Node *aux = list->first->next;
    for(int count=0;(aux!=list->first && count<pos); count++, aux=aux->next);
    return aux;
}void *getPos(DoublyLinkedList *list, int pos) {
    
}