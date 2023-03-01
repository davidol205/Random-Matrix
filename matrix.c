// === Laboratorio 5.0 Uso de C en Linux ===
// Arturo Fernandez - Juan Carlos Oñate - David Ortega

#include <stdio.h>  // I/O library
#include <stdlib.h> // rand() library
#include <time.h>   // rand() seedgen

/* Si la matriz es cuadrada, imprime de 1 a 6.
Solo si la matriz no es cuadrada, imprimela 2 y 3.*/

int main(){
    int nfilas,ncolumnas,x,y;   //Variables


    printf("\nQue numero de filas desea que tenga su matriz? : ");
    scanf("%d",&nfilas);


    if ( nfilas < 2 || nfilas > 99 ) {
        printf("\nPor favor, Introduce un numero entre [2-99]");
        return 1;
    }


    printf("Que numero de columnas desea que tenga su matriz? : ");
    scanf("%d",&ncolumnas);


    if ( ncolumnas < 2 || ncolumnas > 99 ) {
        printf("\nPor favor, Introduce un numero entre [2-99]");
        return 1;
    }


    if (ncolumnas == 2 && nfilas == 2) {
        printf("\nLa matriz de menor tamaño debe ser de 3 x 2 o de 2 x 3");
        return 1;
    }


    // Indico tamaño de la matriz

    if(nfilas == ncolumnas) {
        printf("\nEs una matriz cuadrada de %d x %d\n", nfilas, ncolumnas);
    }
    else {
        printf("\nEs una matriz de %d x %d\n", nfilas, ncolumnas);
    }
    printf("\n");



    srand ( time(NULL) );   // rand() seedgen
    int matrix[nfilas][ncolumnas];  // Matrix declaration


    printf ("\nMatriz (A)\n");   // Matrix init & Output (A)
    for (x = 0; x < nfilas; x++) {
        for ( y = 0; y < ncolumnas; y++ ) {
            matrix[x][y] = rand()%100;
            if ( matrix[x][y] < 10 )
                printf("0%d ",matrix[x][y]); // Para mostrar todos los numeros con 2 digitos
            else
                printf("%d ",matrix[x][y]);
        }
        printf("\n");
    }
    

    if ( nfilas != ncolumnas ){

        printf("\nOutput 3\n"); // Output 3 - Even numbers
        for ( x = 0; x < nfilas; x++ ) {
            for ( y = 0; y < ncolumnas; y++ ) {
                if ( matrix[x][y] % 2 == 0 ){
                    if ( matrix[x][y] < 10 )
                        printf("0%d ",matrix[x][y]);
                    else
                        printf("%d ",matrix[x][y]);
                }
                else
                    printf("~~ ");
            }
            printf("\n");
        }


        printf("\nOutput 4\n"); // Output 4 - Odd numbers
        for ( x = 0; x < nfilas; x++ ) {
            for ( y = 0; y < ncolumnas; y++ ) {
                if ( matrix[x][y] % 2 != 0 ){
                    if ( matrix[x][y] < 10 )
                        printf("0%d ",matrix[x][y]);
                    else
                        printf("%d ",matrix[x][y]);
                }
                else
                    printf("~~ ");
            }
            printf("\n");
        }

    }

    else{

        printf("\nOutput 1\n"); // Output 1 - Left Diagonal
        for ( x = 0; x < nfilas; x++ ) {
            for ( y = 0; y < ncolumnas; y++ ) {
                if (x == y) {
                    if ( matrix[x][y] < 10 )
                        printf("0%d ",matrix[x][y]);
                    else
                        printf("%d ",matrix[x][y]);
                }
                else
                    printf("~~ ");
            }
            printf("\n");
        }


        printf("\nOutput 2\n"); // Output 2 - Right Diagonal
        for ( x = 0; x < nfilas; x++ ) {
            for ( y = 0; y < ncolumnas; y++ ) {
                if ( x == nfilas - y - 1 ) {
                    if ( matrix[x][y] < 10 )
                        printf("0%d ",matrix[x][y]);
                    else
                        printf("%d ",matrix[x][y]);
                }
                else
                    printf("~~ ");
            }
            printf("\n");
        }


        printf("\nOutput 3\n"); // Output 3 - Even numbers
        for ( x = 0; x < nfilas; x++ ) {
            for ( y = 0; y < ncolumnas; y++ ) {
                if ( matrix[x][y] % 2 == 0 ){
                    if ( matrix[x][y] < 10 )
                        printf("0%d ",matrix[x][y]);
                    else
                        printf("%d ",matrix[x][y]);
                }
                else
                    printf("~~ ");
            }
            printf("\n");
        }


        printf("\nOutput 4\n"); // Output 4 - Odd numbers
        for ( x = 0; x < nfilas; x++ ) {
            for ( y = 0; y < ncolumnas; y++ ) {
                if ( matrix[x][y] % 2 != 0 ){
                    if ( matrix[x][y] < 10 )
                        printf("0%d ",matrix[x][y]);
                    else
                        printf("%d ",matrix[x][y]);
                }
                else
                    printf("~~ ");
            }
            printf("\n");
        }


        printf("\nOutput 5\n"); // Output 5 - Superior Diagonal
        for ( x = 0; x < nfilas; x++ ) {
            for ( y = 0; y < ncolumnas; y++ ) {
                if ( x < y  || x == y){
                    if ( matrix[x][y] < 10 )
                        printf("0%d ",matrix[x][y]);
                    else
                        printf("%d ",matrix[x][y]);
                }
                else
                    printf("~~ ");
            }
            printf("\n");
        }


        printf("\nOutput 6\n"); // Output 6 - Inferior Diagonal
        for ( x = 0; x < nfilas; x++ ) {
            for ( y = 0; y < ncolumnas; y++ ) {
                if ( x > y  || x == y){
                    if ( matrix[x][y] < 10 )
                        printf("0%d ",matrix[x][y]);
                    else
                        printf("%d ",matrix[x][y]);
                }
                else
                    printf("~~ ");
            }
            printf("\n");
        }
    }

    return 0;
}
