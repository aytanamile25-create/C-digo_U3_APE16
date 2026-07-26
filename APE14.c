#include <stdio.h>
//Funciones de cada operación, completar matrices y resultado
void mostrarResultado(const char *operacion, int resultado[2][3]) ;
void completarMatrices ( int matrizA [2][3] , int matrizB [2][3]);
void sumaMatrices (int matrizA [2][3], int matrizB [2][3], int  suma [2][3]);
void restaMatrices (int matrizA [2][3], int matrizB [2][3], int resta[2][3]);
void multiplicacionMatrices(int matrizA [2][3], int matrizB [2][3], int multiplicacion[2][3]);
//Función principal para declarar variables y coordinar la ejecución del programa
int main (){
    int matrizA [2][3], matrizB[2][3], suma [2][3], resta [2][3], multiplicacion [2][3];
    //Ingreso de valores
    completarMatrices (matrizA, matrizB);
    mostrarResultado ( "Matriz A",matrizA);
    mostrarResultado ( "Matriz B", matrizB);
    //Suma
    sumaMatrices ( matrizA,  matrizB,  suma);
    mostrarResultado ( "Suma matrizA + matrizB", suma);
    //Resta
    restaMatrices ( matrizA, matrizB , resta);
    mostrarResultado ( "Resta matrizA - matrizB", resta);
    //Multiplicación
    multiplicacionMatrices( matrizA,  matrizB, multiplicacion);
    mostrarResultado ( "Multiplicacion matrizA * matrizB", multiplicacion);
    return 0;
}
//Función para ingresar valores y mostrar la matriz A y matriz B
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

//Función para sumar valor a valor de la misma posición 
void sumaMatrices (int matrizA [2][3], int matrizB [2][3], int  suma [2][3]){
    for (int i=0; i<2; i++){
        for (int j=0; j<3; j++){
            suma [i][j]= matrizA [i] [j]+ matrizB [i][j];
        }
    }
}
//Función para restar valor a valor de la misma posición 
void restaMatrices (int matrizA [2][3], int matrizB [2][3], int resta[2][3]){
    for (int i=0; i<2; i++){
        for (int j=0; j<3; j++){
            resta [i][j]= matrizA [i] [j] -matrizB [i][j];
        }
    }
}
//Función para multiplicar valor a valor de la misma posición 
void multiplicacionMatrices(int matrizA [2][3], int matrizB [2][3], int multiplicacion[2][3]){
    for (int i=0; i<2; i++){
        for (int j=0; j<3; j++){
            multiplicacion [i][j]= matrizA [i] [j]* matrizB [i][j];
        }
    }
}
//Función para mostar el resultado de cada operación
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


