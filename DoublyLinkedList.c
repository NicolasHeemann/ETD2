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
}

void getPos(DoublyLinkedList *list, int pos){
    Node *res = getNodeByPos(list, pos);
    return (res==NULL)?NULL:res->data;
}

int add(DoublyLinkedList *list, int pos, void*data){
    Node *aux = getNodeByPos(list,pos);
    if (aux==NULL) return -2;
    Node *newNode = (Node*) malloc(sizeof(Node));
    if (newNode == NULL) return -1;
    newNode->data = data;
    newNode->next = aux;
    newNode->previous = aux->previous;
    aux->previous = newNode;
    list->size++;
    return 1;
}

int addAll(DoublyLinkedList *listDest, int pos, DoubliLinkedList *listSource){
    Node *aux = getNodeByPos(listDest, pos)
    if (aux==NULL) return -2;
    if(isEmpty(listSource)) return -1;
    listSource->first->previous->next = aux;
    listSource->first->next->previous = aux->previous;
    aux->previous->next = listSource->first->next;
    aux->previous = listSource->previous->next;
    listDest->size+=listSource->size;
    return listSource->size;
}

void *removePos(DoublyLinkedList *list, int pos){
    if (isEmpty (list) || pos>=list->size) return NULL;
    Node *nodeRemove = getNodeByPos(list, pos)
    nodeRemove->previous->next = nodeRemove->next;
    nodeRemove->next->previous = nodeRemove->previous;
    void* dataRemove = nodeREmove->data;
    free(nodeRemove);
    list->size--;
    return dataRemove;
}

int removeData(DoublyLinkedList *list, void *data, compare equal){
    if (isEmpty(list)) return -1;
    
}