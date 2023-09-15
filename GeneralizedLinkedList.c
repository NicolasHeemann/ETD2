#include "GeneralizedLinkedList.h"
#include <stdlib.h>
#include <stdio.h>

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

void show(Node *list){
    printf("(");
    Node *aux = list;
    while(aux != NULL){
    printf(" %d", aux->atomlist.atom);
    aux = aux->next;
    }
    printf(")");
}
