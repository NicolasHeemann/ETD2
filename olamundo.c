#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int number = 10;
    int *numberP = &number;
    printf("Valor da variavel number: %d\n", number);
    printf("Endereço da variavel number: %p\n", &number);
    printf("Valor da variavel numberP: %p\n", numberP);
    printf("Valor apontado por numberP: %d\n\n", *numberP);

    numberP++;
    printf("Valor da variável numberP: %p\n", numberP);
    printf("Valor no endereço apontado: %d\n", *numberP);

    float *pi = (float *) malloc(sizeof(float));
    printf("Valor de variável pi: %p\n", pi);
    *pi=3.1415;
    printf("Valor no endereço apontado: %f\n", *pi);
    
    *pi = 0;
    free(pi);
    pi = NULL;
    printf("Valor de variável pi: %p\n", pi);
    
    int *numbers = (int *) malloc(sizeof(int) * 3);
    *(numbers+0) = 1;
    *(numbers+1) = 2;
    *(numbers+2) = 3;

    for (int i = 0; i < 3; i++)
        printf("\nnumbers[%d] = %d\n",i,numbers[i]);

    for (int i = 0; i < 3; i++)
        printf("*(numbers+%d) = %d\n",i,*(numbers+i));

    int *aux = numbers;
    for (int i = 0; i < 3; i++) {
        printf("aux = %d\n",*aux);
        aux++;
    }
    return EXIT_SUCCESS;
}