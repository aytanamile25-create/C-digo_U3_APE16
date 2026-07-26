# Funciones de cada operación, completar matrices y resultado
def mostrarResultado(operacion, resultado):
    pass

def completarMatrices(matrizA, matrizB):
    pass

def sumaMatrices(matrizA, matrizB, suma):
    pass

def restaMatrices(matrizA, matrizB, resta):
    pass

def multiplicacionMatrices(matrizA, matrizB, multiplicacion):
    pass


# Función principal para declarar variables y coordinar la ejecución del programa
def main():
    matrizA = [[0] * 3 for _ in range(2)]
    matrizB = [[0] * 3 for _ in range(2)]
    suma = [[0] * 3 for _ in range(2)]
    resta = [[0] * 3 for _ in range(2)]
    multiplicacion = [[0] * 3 for _ in range(2)]

    # Ingreso de valores
    completarMatrices(matrizA, matrizB)
    mostrarResultado("Matriz A", matrizA)
    mostrarResultado("Matriz B", matrizB)

    # Suma
    sumaMatrices(matrizA, matrizB, suma)
    mostrarResultado("Suma matrizA + matrizB", suma)

    # Resta
    restaMatrices(matrizA, matrizB, resta)
    mostrarResultado("Resta matrizA - matrizB", resta)

    # Multiplicación
    multiplicacionMatrices(matrizA, matrizB, multiplicacion)
    mostrarResultado("Multiplicacion matrizA * matrizB", multiplicacion)
    return 0


# Función para ingresar valores y mostrar la matriz A y matriz B
def completarMatrices(matrizA, matrizB):
    for i in range(2):
        for j in range(3):
            matrizA[i][j] = int(input(f"Ingrese valor de la posicion Matriz A [{i}][{j}]:"))

    for a in range(2):
        for b in range(3):
            matrizB[a][b] = int(input(f"Ingrese valor de la posicion Matriz B [{a}][{b}]:"))


# Función para sumar valor a valor de la misma posición 
def sumaMatrices(matrizA, matrizB, suma):
    for i in range(2):
        for j in range(3):
            suma[i][j] = matrizA[i][j] + matrizB[i][j]


# Función para restar valor a valor de la misma posición 
def restaMatrices(matrizA, matrizB, resta):
    for i in range(2):
        for j in range(3):
            resta[i][j] = matrizA[i][j] - matrizB[i][j]


# Función para multiplicar valor a valor de la misma posición 
def multiplicacionMatrices(matrizA, matrizB, multiplicacion):
    for i in range(2):
        for j in range(3):
            multiplicacion[i][j] = matrizA[i][j] * matrizB[i][j]


# Función para mostar el resultado de cada operación
def mostrarResultado(operacion, resultado):
    print(f"\nResultado de la {operacion}:")
    for i in range(2):
        print("[", end="")
        for j in range(3):
            print(f"{resultado[i][j]:6d}", end="")
        print("]")


if __name__ == "__main__":
    main()
