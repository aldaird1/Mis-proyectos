#include <iostream>
#include <vector>

using namespace std;

// Declaración de funciones

vector<vector<vector<int>>> crear_matriz(int filas = 1000, int columnas = 1000, int prof = 3) {
    vector<vector<vector<int>>> matriz(filas, vector<vector<int>>(columnas, vector<int>(prof)));
    return matriz;
}
//Inicializar 
void inicializar(vector<vector<vector<int>>>& matriz) {
    int numero = 0;
    for (int i = 0; i < 1000; i++) {
        for (int j = 0; j < 1000; j++) {
            for (int k = 0; k < 3; k++) {
                matriz[i][j][k] = numero++;
            }
        }
    }
}

// Función para sumar
vector<vector<vector<int>>> suma(const vector<vector<vector<int>>>& m1, const vector<vector<vector<int>>>& m2) {
    vector<vector<vector<int>>> resultado(1000, vector<vector<int>>(1000, vector<int>(3)));
    for (int i = 0; i < 1000; i++) {
        for (int j = 0; j < 1000; j++) {
            for (int k = 0; k < 3; k++) {
                resultado[i][j][k] = m1[i][j][k] + m2[i][j][k];
            }
        }
    }
    return resultado;
}

// Función principal
int main() {
    // Crear y inicializar dos matrices
    vector<vector<vector<int>>> matriz1 = crear_matriz();
    inicializar(matriz1);
    vector<vector<vector<int>>> matriz2 = crear_matriz();
    inicializar(matriz2);

    // Sumar las matrices
    vector<vector<vector<int>>> matriz_suma = suma(matriz1, matriz2);

    // Imprimir algunos elementos de las matrices y la suma
    cout << "Elemento [100][100][0] de la primera matriz: " << matriz1[100][100][0] << endl;
    cout << "Elemento [100][100][0] de la segunda matriz: " << matriz2[100][100][0] << endl;
    cout << "Elemento [100][100][0] de la matriz suma: " << matriz_suma[100][100][0] << endl;

    cout << "Elemento [300][200][1] de la primera matriz: " << matriz1[300][200][1] << endl;
    cout << "Elemento [300][200][1] de la segunda matriz: " << matriz2[300][200][1] << endl;
    cout << "Elemento [300][200][1] de la matriz suma: " << matriz_suma[300][200][1] << endl;

    cout << "Elemento [500][700][2] de la primera matriz: " << matriz1[500][700][2] << endl;
    cout << "Elemento [500][700][2] de la segunda matriz: " << matriz2[500][700][2] << endl;
    cout << "Elemento [500][700][2] de la matriz suma: " << matriz_suma[500][700][2] << endl;

    return 0;
}
