#include <stdio.h>
#include <stdlib.h>
#define num 10

int main (){
float vet[num];
int i, *pontvet;
pontvet = vet;

printf("ELEMENTOS:\n\n");
for(int i = 0; i < num; i++){
    scanf("%f",&vet[i]);
}
printf("\n\nENDERECOS DO ARRAY:\n\n");
for(int i = 0; i < num; i++){
    printf("%i : %.2f : %i\n",i+1, vet[i], pontvet++);
}

}
