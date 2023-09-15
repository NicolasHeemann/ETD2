#include "GeneralizedLinkedList.h"
#include <stdlib.h>
#include <stdio.h>

int main(){
    Node *list = NULL;
    int opc;
    int esc;
    printf("Escolha uma opção: 1 - Addatom\n 2 - Show\n 3 - Sair");
    scanf(" %d", &opc);

switch(opc != 3){

    case 1:
    printf("Digite um numero: ");
    scanf(" %d", &esc);
    addAtom(&list, esc);

    
}

    
}