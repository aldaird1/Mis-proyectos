#include <iostream>

using namespace std;
//Declaracion de la funciuon que recibe al puntero 
void funcion(char *& ptr){
    cout<<"Ingrese una cadena de 10 carcateres: "<<endl;
    ptr = new char[10];
    cin.getline(ptr, 10);
}
//fin de la funcion 

//inicio de la primera funcion 
void mayus(char *ptr){
    for (int i = 0; i < 10; i++){
        *(ptr + i) = *(ptr + i) - 32;
    }
}

//icnio de la funcion main
int main(){
    //Iniciamos con la declaracion de lso punteros dobles
    char *ptr;
    //llamamso a las fucniones que hemos definido 
    funcion(ptr);
    cout<<"Imprimimos la lista actual: "<<endl;

    for(int i = 0; i < 10; i++){
        cout<<*(ptr + i)<<"; ";
    }

    cout<<"\nAhora llamamos a la ultima funcion: "<<endl;
    mayus(ptr);
    cout<<"Imprimimos la lista actual: "<<endl;

    for(int i = 0; i < 10; i++){
        cout<<*(ptr + i)<<"; ";
    }



    return 0;
}