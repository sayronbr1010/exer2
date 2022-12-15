#include <stdio.h>
#include <stdlib.h>
#define num 3

int main (){
float mat[num][num];
int *pontvet;
pontvet = mat;
int com=1;

printf("ELEMENTOS:\n\n");
for(int i = 0; i < num; i++){
    for(int j = 0;j<num;j++){
        scanf("%f",&mat[i][j]);
    }
}
printf("\n\nENDERECOS DO ARRAY:\n\n");
for(int i = 0; i < num; i++){
    for(int j = 0;j<num;j++){
    printf("%i : %.2f : %i\n",com++, mat[i][j], pontvet++);
    }
}
}
