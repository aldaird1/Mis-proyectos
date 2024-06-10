#include <iostream>

using namespace std;

// Función para mostrar las listas
void mostrar(char lista[]) {
    cout << "La lista es: " << endl;
    for (int i = 0; lista[i] != '\0'; i++) {
        cout << lista[i];
    }
    cout << endl;
}


char *funcion(char *ptr, char *ptr2) {
    int cont = 0;
    int cov = 0;

    
    for (int i = 0; *(ptr + i) != '\0'; i++) {
        cont++;
    }
    for (int j = 0; *(ptr2 + j) != '\0'; j++) {
        cov++;
    }

    
    char *ppt = new char[cont + cov + 1]; 
    for (int k = 0; k < cont; k++) {
        *(ppt + k) = *(ptr + k);
    }

    
    for (int z = 0; z <= cov; z++) { 
        *(ppt + cont + z) = *(ptr2 + z);
    }

    return ppt;
}

int main() {
    char lista[] = {"Esta es una lista"};
    char list[] = {" Esta es otra lista"}; 
   
    mostrar(lista);
    mostrar(list);

    char *ptr = lista;
    char *ptr2 = list;

 
    char *ppt = funcion(ptr, ptr2);

    cout << "La lista final que contiene a las otras dos es: " << endl;
    for (int i = 0; *(ppt + i) != '\0'; i++) {
        cout << *(ppt + i);
    }
    cout << endl;

    delete[] ppt;

    return 0;
}
