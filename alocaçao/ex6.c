#include <stdio.h>
#include <stdlib.h>


int fun(int num){
    return (int*) malloc((num*num) * sizeof(int));

}

void main(){
    int num;
    scanf("%d", &num);

    if(fun(num) == NULL){
        printf("Erro\n");
        system("pause");
    }
    int *x;
    x = fun(num);
    for(int i = 0; i<num; i++){
        for(int j = 0; j<num; j++){
            if(i==j){
                x[i] = 1;
            }else{
                x[i] = 0;
            }
        }
    }
    for(int i = 0; i<num; i++){
        for(int j = 0; j<num; j++){
            printf("%d \t " ,x[i]);
            if(j == num-1){
                printf("\n");
            }
        }
    }
}
