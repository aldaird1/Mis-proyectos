#include <iostream>
#include <chrono>
#include <vector>

using namespace std;


//funciones
vector<vector<vector<int>>>* crear_matrizz(int filas = 1000, int columnas = 1000, int prof = 3 ){
        vector<vector<vector<int>>>* ptr =  new vector<vector<vector<int>>> (filas, vector<vector<int>>(columnas, vector<int>(prof)));
        return ptr;
    }//FIN

    //segunda funcion 
vector<vector<vector<int>>> crear_matriz(int filas = 1000, int columnas = 1000, int prof = 3) {
    vector<vector<vector<int>>> matriz(filas, vector<vector<int>>(columnas, vector<int>(prof)));
    return matriz;
}

void elapse() {
    int resp = -1;
    auto start = std::chrono::high_resolution_clock::now();

    // Ejecutar la función para crear la matriz
    vector<vector<vector<int>>> matriz = crear_matriz();

    auto stop = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
    std::cout << resp << " for " << duration.count() << " ms" << std::endl;
}

//segunda funcion
void elapse_2() {
    int resp = -1;
    auto start = std::chrono::high_resolution_clock::now();

    // Ejecutar la función para crear la matriz
    vector<vector<vector<int>>>* ptr = crear_matrizz();

    auto stop = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
    std::cout << resp << " for " << duration.count() << " ms" << std::endl;
}

int main() {
    cout<<"El timepo de la funcion sin punteros es :";
    elapse();

    cout<<"\n\nEl tiempo de la funcion usando punteros es :";
    elapse_2();
    return 0;
}
