#include <iostream>

using namespace std;

void funcion(char * ptr){
    for(int i = 0; *(ptr + i) != '\0'; i++){
        if ((*(ptr + i) == 'a') || (*(ptr + i) == 'e') || (*(ptr + i) == 'i') || (*(ptr + i) == 'o')|| (*(ptr + i) == 'u')){
            *(ptr + i) = 'X';
        }
    }
}
//Fin de la funcion  para intercambiar loso valores


//Funcion para mlsorar las cacdenas dce caracteres

void mostrar(char lista[]){
    cout<<"La lista es: "<<endl;
    for(int i = 0; lista[i] !='\0'; i++ ){
        cout<<lista[i];

    }
    cout<<endl;
}
//Fin de la funcion para mostrar las listas 

int main(){
    char *ptr;
    char lista[] = {"Este es un texto del que no se de cuantos caracteres este compuesto pero espero que muchos asi que vamos a continuar escribiendo hasta que me canse"};
    int largo = 147;
    ptr = lista;


    //Mensajes para el usuario 
    cout<<"\nLa lista inicial es: "<<endl;

    mostrar(lista);

    
    funcion(ptr);

    cout<<"\nLa nueva lista sin vocales es: "<<endl;
    mostrar(lista);


    return 0;
}