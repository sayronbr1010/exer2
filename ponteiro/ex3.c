#include <stdio.h>
#include <stdlib.h>
#define num 5

void main (){
int vet[num];
int *pontvet;
pontvet = vet;

printf("ELEMENTOS:\n\n");
for(int i = 0; i < num; i++){
    scanf("%d",&vet[i]);
}
printf("\n\nDOBRO DO ARRAY:\n\n");
for(int i = 0; i < num; i++){
    printf(" %d \n", vet[i]*2);
}
}
