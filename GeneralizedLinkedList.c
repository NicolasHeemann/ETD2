#include "GeneralizedLinkedList.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
int addAtom(Node **list, int atom){
    Node *newNode = (Node*) malloc (sizeof(Node));
    if (newNode == NULL) return -1;
    newNode -> atomlist.atom = atom;
    newNode -> type = 0;
    newNode -> next = NULL;

    if(*list == NULL){
        *list = newNode;
    }

    else{

        Node *aux = *list;
        while(aux->next != NULL)
            aux = aux->next;
        aux->next = newNode;

    }    

}

int addList(Node **list, Node **subList){
    Node *newNode = (Node*) malloc (sizeof(Node));
    if(newNode == NULL) return -1;

    newNode -> type = 1; //lista
    newNode -> atomlist.list = *subList; //struct atomlist recebe como 1 valor a sublista
    newNode -> tail = NULL; // próximo nó recebe nulo.

    if(*list == NULL){ //verificar se a lista está vazia
        *list = newNode; //Se estiver vazia recebe o novo nó como 1º
}else{
    Node *aux = *list; // aux recebe o 1º nó

    while(aux -> tail != NULL) // enquanto o próximo não for nulo
    aux = aux->tail; // aux recebe o último nó

    aux->tail = newNode; // o último nó recebe o novo nó
}

    return 0;

}

void show(Node *list){
    Node *aux = list;
    printf("(");
    while(aux != NULL){
        if( aux -> type == 0){
            printf(" %d", aux->atomlist.atom);
        }else if(aux -> type == 1){
           show(aux -> atomlist.list);
        }
        aux = aux->next;
    }
    
    printf(")");
}

bool search(Node *list, int atom){
    Node *aux = list;

    while(aux != NULL){

        if(aux->type == 0 && aux -> atomlist.atom == atom) 
            return true;

        aux = aux->next;
    }
    return false;
}
Node* head(Node *list){
    if(list != NULL){
        if(list->type == 0){
            printf(" %d", list->atomlist.atom);
        }else if(list -> type == 1){
            printf(" %d", list->atomlist.list->atomlist.atom);
        } 
    }
}

Node* tail(Node *list){
    return(list)->tail;
}

int depth(Node *list){
    int produndidade = 0;
    if (list == NULL)
    return 0;

    Node *aux == NULL;
    for(aux = list; aux != NULL; aux=aux->tail);

}
