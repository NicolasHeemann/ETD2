#include "GeneralizedLinkedList.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int main(){
    Node *list = NULL;
    Node *sublist = NULL;
    int opc = 0;
    int esc = 0;
    int asc = 0;

    while(1){
    printf("\nEscolha uma opção:\n1 - Addatom\n2 - Show\n3 - Search\n4 - addList\n5 - Exit\n6- Head\n");
    scanf(" %d", &opc);

    switch(opc){

        case 1:
            printf("\nDigite um numero: ");
            scanf(" %d", &esc);
            addAtom(&list, esc);
            break;

        case 2:
            printf("Lista: ");
            show(list);
            printf("\n");
            break;

        case 3:
            printf("Digite um numero: ");
            scanf(" %d", &esc);
            if (search(list, esc)) {
                printf("O numero %d foi encotrado.\n", esc);

            }else{
                printf("O numero %d nao foi encontrado", esc);
            }
            break;

        case 4:
            printf("\nDigite um  numero:");
            scanf(" %d", &esc);
            addAtom(&sublist, esc);
            addList(&list, &sublist);
            break;

            case 5:
                return 0;
                break;
            case 6:
                printf("Primeiro elemento da lista: ");
                head(list);
                printf("\n");
                break;
 
    }
}

    
}