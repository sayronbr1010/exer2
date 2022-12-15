#include <stdio.h>
#include <stdlib.h>

int fun(int num){
    return (int*) malloc(num * sizeof(int));
}

void main(){
    int *x;
    int num;
    printf("Digite quantas posicoes de vetor de inteiro precisa:\n");
    scanf("%d", &num);

    if(fun(num) == NULL){
        printf("Erro\n");
        system("pause");
    }
    x = fun(num);
}
