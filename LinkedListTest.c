#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"

bool compara(void *data1, void *data2){
    int *d1 = (int*)data1;
    int *d2 = (int*)data2;

    return (*d1 == *d2)?true:false;
}

int main() {
    LinkedList list;
    init(&list);
}