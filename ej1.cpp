    #include <iostream>
    #include <vector>

    using namespace std;
    //Declaramos variables globales 

    //Declaracion de funciones 
    vector<vector<vector<int>>>* crear_matriz(int filas = 1000, int columnas = 1000, int prof = 3 ){
        vector<vector<vector<int>>>* ptr =  new vector<vector<vector<int>>> (filas, vector<vector<int>>(columnas, vector<int>(prof)));
        return ptr;
    }//FIN

    //funcion para inicialisar 
    void inicializar( vector<vector<vector<int>>>* matriz){
        int numero = 0;
        //Inicialisamos la matriz con numeros del 1 al ... no se a cual 
        for ( int i = 0; i < 1000; i++){
            for (int j = 0; j < 1000; j++){
                for (int k = 0; k < 3; k++){
                    (*matriz)[i][j][k] = numero++;
                }
            }
        }
    }//FIN

    //Funcion para sumar las matrices 
    vector<vector<vector<int>>> suma(vector<vector<vector<int>>>* m1, vector<vector<vector<int>>>* m2){
        vector<vector<vector<int>>> retorno(1000, vector<vector<int>>(1000, vector<int>(3)));
        for ( int i = 0; i < 1000; i++){
            for (int j = 0; j < 1000; j++){
                for (int k = 0; k < 3; k++){
                    retorno  [i][j][k] = (*m1)[i][j][k] + (*m2)[i][j][k];

                }
            }
        }
        return retorno;
    }


    //funcion principal 
    int main(){
        //inciamos con el vector 
        int filas = 1000;
        int columnas = 1000;
        int prof = 3;

        //Creamos dos punteros
        vector<vector<vector<int>>>* ptr_1 = crear_matriz();
        inicializar(ptr_1);
        vector<vector<vector<int>>>* ptr_2 = crear_matriz();
        inicializar(ptr_2);
        vector<vector<vector<int>>> matriss = suma(ptr_1, ptr_2);

        //Imprimimos algunos de los elementos de la matriz 
        cout<< "El elemento [100][100][1] de la primera matriz es: :"<<(*ptr_1)[100][100][0]<<endl;
        cout<< "El elemento [100][100][1] de la segunda matriz es: :"<<(*ptr_2)[100][100][0]<<endl;
        cout<< "El elemento [100][100][1] de la matris suma es:"<<matriss[100][100][0]<<endl;

        cout<< "El elemento [300][200][2] de la primera matriz es: :"<<(*ptr_1)[300][200][1]<<endl;
        cout<< "El elemento [300][200][2] de la segunda matriz es: :"<<(*ptr_2)[300][200][1]<<endl;
        cout<< "El elemento [300][200][2] de la matris suma es:"<<matriss[300][200][1]<<endl;

        cout<< "El elemento [500][700][3] de la primera matriz es: :"<<(*ptr_1)[500][700][2]<<endl;
        cout<< "El elemento [500][700][3] de la segunda matriz es: :"<<(*ptr_2)[500][700][2]<<endl;
        cout<< "El elemento [500][700][3] de la matris suma es:"<<matriss[500][700][2]<<endl;
        return 0;
    }