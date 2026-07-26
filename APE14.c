#include <stdio.h>

void mostrarResultado(const char *operacion, int resultado[2][3]) ;
void completarMatrices ( int matrizA [2][3] , int matrizB [2][3]);
void sumaMatrices (int matrizA [2][3], int matrizB [2][3], int  suma [2][3]);
void restaMatrices (int matrizA [2][3], int matrizB [2][3], int resta[2][3]);
void multiplicacionMatrices(int matrizA [2][3], int matrizB [2][3], int multiplicacion[2][3]);

int main (){
    int matrizA [2][3], matrizB[2][3], suma [2][3], resta [2][3], multiplicacion [2][3];
    completarMatrices (matrizA, matrizB);
    mostrarResultado ( "Matriz A",matrizA);
    mostrarResultado ( "Matriz B", matrizB);

    sumaMatrices ( matrizA,  matrizB,  suma);
    mostrarResultado ( "Suma matrizA + matrizB", suma);
    
    restaMatrices ( matrizA, matrizB , resta);
    mostrarResultado ( "Resta matrizA - matrizB", resta);

    multiplicacionMatrices( matrizA,  matrizB, multiplicacion);
    mostrarResultado ( "Multiplicacion matrizA * matrizB", multiplicacion);
    return 0;
}

void completarMatrices (int matrizA [2][3] , int matrizB [2][3]){
    for ( int i=0; i<2;i++){
        for ( int j=0; j<3; j++){
            printf ("Ingrese valor de la posicion Matriz A [%i][%i]:", i,j);
            scanf ("%i", &matrizA [i][j]);
        }
    }
    
    for ( int a=0; a<2;a++){
        for ( int b=0; b<3; b++){
            printf ("Ingrese valor de la posicion Matriz B [%i][%i]:", a,b);
            scanf ("%i", &matrizB [a][b]);
        }
    }
}


void sumaMatrices (int matrizA [2][3], int matrizB [2][3], int  suma [2][3]){
    for (int i=0; i<2; i++){
        for (int j=0; j<3; j++){
            suma [i][j]= matrizA [i] [j]+ matrizB [i][j];
        }
    }
}

void restaMatrices (int matrizA [2][3], int matrizB [2][3], int resta[2][3]){
    for (int i=0; i<2; i++){
        for (int j=0; j<3; j++){
            resta [i][j]= matrizA [i] [j] -matrizB [i][j];
        }
    }
}

void multiplicacionMatrices(int matrizA [2][3], int matrizB [2][3], int multiplicacion[2][3]){
    for (int i=0; i<2; i++){
        for (int j=0; j<3; j++){
            multiplicacion [i][j]= matrizA [i] [j]* matrizB [i][j];
        }
    }
}

void mostrarResultado(const char *operacion, int resultado[2][3]) {
    printf("\nResultado de la %s:\n", operacion);
    for (int i = 0; i < 2; i++) {
        printf ("[");
        for (int j = 0; j < 3; j++) {
            printf("%6d", resultado [i][j]); 
        }
        printf ("]\n");
    }
}


