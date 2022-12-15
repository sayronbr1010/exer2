#include <stdio.h>
#include <stdlib.h>
#define num 5

int main (){
int vet[num];
int *pontvet;
pontvet = vet;

printf("ELEMENTOS:\n\n");
for(int i = 0; i < num; i++){
    scanf("%d",&vet[i]);
 }
printf("\n\nENDERECOS DO ARRAY:\n\n");
for(int i = 0; i < num; i++){
    if(vet[i]%2==0){
        printf("%i : %d : %i\n",i+1, vet[i], pontvet++);
    }else{}
}

}
