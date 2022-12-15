#include <stdio.h>
#include <stdlib.h>

int funcao(int num){
    return (int*) malloc(num * sizeof(int));

}

void main(){

    int *x;
    int num;
    scanf("%d", &num);

    if(funcao(num) == NULL){
        printf("Erro\n");
        system("pause");}

    x = funcao(num);

    for(int i = 0; i < num; i++){
        x[i] = i;
    }
    for(int i = 0; i < num; i++){
        printf("%d", x[i]);
    }
}
