#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include <stdbool.h>

void init(LinkedList *list){
list->first = NULL;
list->size = 0;
}

bool isEmpty(LinkedList *list){
    return (list->size == 0);

}

int enqueue(LinkedList *list, void *data){
    Node *newNode = (Node*)malloc(sizeof(Node));
    if(newNode == NULL) return -1;
    newNode -> data = data;
    newNode -> next = NULL;

        if (isEmpty(list))
             list->first = newNode;
        else{
            Node *aux = list->first;
            while (aux->next != NULL)
            aux = aux->next;
            aux->next = newNode;
        }
        list -> size++;
        return 1;
}

void* dequeue(LinkedList* list){
    if(isEmpty(list)) return NULL;

        Node* trash = list->first;
        list->first = list->first->next;

        void* data = trash->data;
        free(trash);
        list->size--;
        
        return data;

}
void* first(LinkedList *list){
    return (isEmpty(list))?NULL:list->first->data;
}

void* last(LinkedList *list){
    void *data = NULL;
    if(!isEmpty(list))  {
        Node *aux = list->first;
        while(aux->next != NULL)
        aux = aux->next;
        data = aux->data;
    }
    return data;
}

int push(LinkedList *list, void *data){
    Node *newNode = (Node*)malloc(sizeof(Node));
    if(newNode==NULL) return -1;
    newNode->data = data;
    newNode->next = NULL;

    if(isEmpty(list))
        list->first = newNode;
    else{
        newNode->next = list->first;
        list->first = newNode;
    }
    list->size++;
    return 1;
}

void* pop(LinkedList *list){
    return dequeue(list);
}

void* top(LinkedList *list){
    return first(list);
}

bool isEmpty (LinkedList *list)  {
    return (list->size==0);
}

int indexOf(LinkedList *list, void *data, compare equal){
    if(isEmpty(list)) return -1;
    int count=0;
    Node *aux = list->first;

    while(aux!=NULL && !equal(aux->data,data)){
        aux=aux->next;
        count++;
    }

    return (aux==NULL)?-1:count;

}

Node* getNodeByPos(LinkedList *list, int pos) {
    if (isEmpty(list) || pos>=list->size) return NULL;

    Node *aux = list->first;

    for (int count=0;(aux!=NULL && count<pos); count++,aux=aux->next);
    return aux;

}
int add(LinkedList *list, int pos, void *data) {
    if (pos <= 0) return push(list,data);
    Node *aux = getNodeByPos(list, (pos-1));
    if (aux==NULL) return -2;

    Node *newNode = (Node*)malloc(sizeof(Node));
    if (newNode==NULL) return -1;
    newNode->data = data;
    newNode->next = NULL;

    newNode->next = aux->next;
    aux->next = newNode;
    list->size++;
    return 1;
}

int addAll(LinkedList *listDest, int pos, LinkedList *listSource) {
    if(listDest==NULL || isEmpty(listDest)) return -1;
    if(listSource==NULL || isEmpty(listSource)) return -2;
    Node *last = NULL;
    for (last = listSource->first; last->next!=NULL; last=last->next);
    if(pos == 0) {
        last->next = listDest->first;
        listDest->first = listSource->first;
    }else{
        Node *aux = getNodeByPos(listDest, (pos-1));
        if(aux==NULL) return -3;
        last->next = listSource->first;
    }
    listDest->size+=listSource->size;
    return listSource->size;
}