#include <stdio.h>
#include <stdlib.h>

void main(){

    int num;

    do{
        scanf("%d", &num);
    }while(num <= 0);

    int *x;
    x = (int*) malloc(num * sizeof(int));
    if(x == NULL){
        printf("Erro: Memoria insulficiente!\n");
        system("pause");
    }
    int num1;
    for(int i = 0; i < num; i++){
        do{
            scanf("%d", &num1);
        }while(num1 < 2);
        x[i] = num1;
    }
    for(int i = 0; i < num; i++){
        printf("%d ", x[i]);
    }
}
