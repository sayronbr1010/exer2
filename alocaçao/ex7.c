#include <stdio.h>
#include <stdlib.h>

void main() {

int **mat;
int lin,col;

scanf("%d",&lin);
scanf("%d",&col);

 mat = malloc (lin * sizeof (int)) ;


 for( int i =0; i<lin; i++){
      mat[i] = malloc (col * sizeof (int)) ;

    for( int j =0; j<col; j++){

        scanf("%d", &mat[i][j]);
    }
}

for( int i =0; i<lin; i++){
    for( int j =0; j<col; j++){
        printf("%d \t",mat[i][j]);
    }
    printf("\n");
}
}
