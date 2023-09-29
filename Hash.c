#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "Hash.h"

void initHash(HashStruct *hashStruct){
    for(i=0; i<MAX; i++){
    init(&(hashStruct->hashes[i]));
    }
hashStruct->size = 0;
}

bool isHashEmpty(HashStruct *hashStruct){
    return hashStruct->size == 0;
}

int hash(char *key){
    int sum = 0;
    for(i=0; key[i]!=0; i++){
        sum+=key[i]*(i+1);
    }
    return sum%MAX;
}
int put(HashStruct *hashStruct, char *key, void *data, compare equal){
    if (!containsKey(key, equal, hashStruct)){

    int res = enqueue(&hashStruct->hashes[hash(key)], data)
    hashStruct->size+=res
    return res;
    }
    return 0;
}