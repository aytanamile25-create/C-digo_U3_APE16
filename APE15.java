import java.util.Scanner;
public class APE15 {
    public static void main (String [] args){
        Scanner scanner = new Scanner (System.in);
        int[][] matrizA = new int[2][3];
        int[][] matrizB = new int[2][3];
        int[][] suma = new int[2][3];
        int[][] resta = new int[2][3];
        int[][] multiplicacion = new int[2][3];

        // Ingreso de valores
        completarMatrices(matrizA, matrizB, scanner);
        mostrarResultado("Matriz A",  matrizA);
        mostrarResultado("Matriz B", matrizB);
        // Suma
        sumaMatrices(matrizA, matrizB, suma);
        mostrarResultado("Suma matrizA + matrizB", suma);
        // Resta
        restaMatrices(matrizA, matrizB, resta);
        mostrarResultado("Resta matrizA - matrizB", resta);
        // Multiplicación
        multiplicacionMatrices(matrizA, matrizB, multiplicacion);
        mostrarResultado("Multiplicacion matrizA * matrizB", multiplicacion);

        scanner.close();
    }

    // Función para ingresar valores y mostrar la matriz A y matriz B
    public static void completarMatrices(int[][] matrizA, int[][] matrizB, Scanner scanner) {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 3; j++) {
                System.out.print("Ingrese valor de la posicion Matriz A [" + i + "][" + j + "]:");
                matrizA[i][j] = scanner.nextInt();
            }
        }

        for (int a = 0; a < 2; a++) {
            for (int b = 0; b < 3; b++) {
                System.out.print("Ingrese valor de la posicion Matriz B [" + a + "][" + b + "]:");
                matrizB[a][b] = scanner.nextInt();
            }
        }
    }

    // Función para sumar valor a valor de la misma posición 
    public static void sumaMatrices(int[][] matrizA, int[][] matrizB, int[][] suma) {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 3; j++) {
                suma[i][j] = matrizA[i][j] + matrizB[i][j];
            }
        }
    }

    // Función para restar valor a valor de la misma posición 
    public static void restaMatrices(int[][] matrizA, int[][] matrizB, int[][] resta) {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 3; j++) {
                resta[i][j] = matrizA[i][j] - matrizB[i][j];
            }
        }
    }

    // Función para multiplicar valor a valor de la misma posición 
    public static void multiplicacionMatrices(int[][] matrizA, int[][] matrizB, int[][] multiplicacion) {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 3; j++) {
                multiplicacion[i][j] = matrizA[i][j] * matrizB[i][j];
            }
        }
    }

    // Función para mostrar el resultado de cada operación
    public static void mostrarResultado(String operacion, int[][] resultado) {
        System.out.printf("%nResultado de la %s:%n", operacion);
        for (int i = 0; i < 2; i++) {
            System.out.print("[");
            for (int j = 0; j < 3; j++) {
                System.out.printf("%6d", resultado[i][j]);
            }
            System.out.println("]");
        }
    }
}

