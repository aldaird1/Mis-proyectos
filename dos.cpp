#include <iostream>

using namespace std;

//Decvaracionde las funciones+
int lexic(const char *ptr, const char *ptr2){
    int con = 0;
    int cov = 0;

    for(int i = 0; *(ptr + i) != '\0'; i++){
        con+=1;
    }
    for(int j = 0; *(ptr2 + j) != '\0'; j++){
        cov+=1;
    }

    if (con  > cov){
        return 0;
    } else if (con == cov){
        return 1;
    } else if(con <cov){
        return 2;
    }
}


int main(){ 
    char lista[] = {"abcdefgt"};//9 elemnetos
    char lista2[] = {"vamosaverestawbd"};//17
    //imprecion de la primer alista 
    cout<<endl<<"Imprimimos la primera lista: "<<endl;
    for(int i = 0; i < 8; i++){
        cout<<lista[i]<<"; ";
    }

    //Impresion de la sewtgud a lista 
    cout<<endl<<"Imprimimos la segunda lista: "<<endl;
    for(int i = 0; i < 16; i++){
        cout<<lista2[i]<<"; ";
    }

    int opc = lexic(lista, lista2);

    if(opc==1){
        cout<<endl<<"Las dos listas son iguales"<<endl;
    } else if(opc==0){
        cout<<endl<<"La primera lista es mayor"<<endl;
    } else if(opc==2){
        cout<<endl<<"La primera lsita es menor"<<endl;
    }
    return 0;
}