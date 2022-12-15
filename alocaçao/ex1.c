#include <stdio.h>
#include <stdlib.h>

void main(){

    int num;

    scanf("%d", &num);

    int *x;
    x = (int*) malloc(num * sizeof(int));
    for(int i = 0; i < num; i++){
        scanf("%d", &x[i]);
    }
    for(int i = 0; i < num; i++){
        printf("%d ", x[i]);
    }
}

