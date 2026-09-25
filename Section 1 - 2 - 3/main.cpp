#include <iostream>
#include <string>

using namespace std;

int main(){
    //Escribir un algoritmo en pseudocodigo que permita almacenar en arreglos diferentes los nombres, los generos y las edades de un grupo de n personas.
    //El algoritmo debe determinar:
    /*
    Cuantas personas son de genero masculino
    Cuantas personas son de genero femenino
    Cual es el promedio de las edades del genero masculino
    Cual es el nombre de la persona de genero femenino mas pequeña
    */
    int n;
    cout<<"Ingrese el número de personas: ";
    cin>>n;
    string nombres[n];
    string generos[n];
    int edades[n];
    int contM = 0;
    int contF = 0;

    for(int i = 0; i < n; i++){
        cout<<"Ingrese el nombre de la persona "<<i+1<<": ";
        cin>>nombres[i];
        cout<<"Ingrese el género de la persona "<<i+1<<": ";
        cin>>generos[i];
        cout<<"Ingrese la edad de la persona "<<i+1<<": ";
        cin>>edades[i];
        if(generos[i] == "M"){
            contM++;
        }else{
            contF++;
        }
    }

    cout<<"Personas de género masculino: "<<contM<<endl;
    cout<<"Personas de género femenino: "<<contF<<endl;

    int suma = 0;
    int cont = 0;
    for(int i = 0; i < n; i++){
        if(generos[i] == "M"){
            suma += edades[i];
            cont++;
        }
    }

    cout<<"Promedio de las edades del género masculino: "<<suma/cont<<endl;

    int menor = 100;
    string nombre;

    for(int i = 0; i < n; i++){
        if(generos[i] == "F"){
            if(edades[i] < menor){
                menor = edades[i];
                nombre = nombres[i];
            }
        }
    }

    cout<<"Nombre de la persona de género femenino más pequeña: "<<nombre<<endl;

    return 0;
}
