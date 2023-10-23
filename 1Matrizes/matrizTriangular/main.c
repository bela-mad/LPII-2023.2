/*Fazer um programa que:

• leia uma matriz 4x4.
• verifique se a matriz é triangular superior ou triangular inferior.
• Informe na tela do computador se a matriz é triangular e, em caso afirmativo, se é superior ou inferior.
*/

#include <stdio.h>
#include <stdlib.h>
#define TAM 4

int main(void) {

    int mat[TAM][TAM], i, j, triangularSup=1, triangularInf=1;

    printf("\n\tOla! Digite os elementos de uma matriz %dx%d:\n", TAM, TAM);

    //leitura dos elementos da matriz
    for (i=0;i<TAM;i++) {
        for (j=0;j<TAM;j++) {
            printf("\n\tElemento [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    //verifica se a matriz é triangular inferior
    for (i=0;i<TAM;i++) {
        for (j=i+1;j<TAM;j++) {
            if (mat[i][j]) {
                triangularInf=0;
            }
        }
    }

    if (triangularInf) {
        printf("\n\tEssa matriz eh triangular inferior");
        exit(3);
    }

    //verifica se a matriz é triangular superior
    for (i=0;i<TAM;i++) {
        for (j=0;j<i;j++) {
            if (mat[i][j]) {
                triangularSup=0;
            }
        }
    }

    if (triangularSup) {
        printf("\n\tEssa matriz eh triangular superior");
        exit(3);
    }

    //informa que aquela matriz não é triangular
    printf("\n\tEssa matriz nao eh triangular");

    return 0;

}
