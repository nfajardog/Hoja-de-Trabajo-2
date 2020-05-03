/*
EJERCICIO #2
El director de un colegio desea realizar un programa que procese un archivo de registros correspondiente a los diferentes 
alumnos del centro a fin de obtener los siguientes datos:

    Nota más alta y número de identificación del alumno correspondiente.
    Nota media del colegio.

Datos de Estudiantes:

    Identificación
    Nombre    
    Nota
*/

#include <fstream>
#include <iostream>
#include <string>
void insertar();
using namespace std;
int main(){
    insertar();

}
void insertar(){
     int iid, inota;
     string inombre;	
     ofstream db;

        cout<<"Ingreso de datos de estudiante"<<endl;
        cout<<"Ingrese Identificacion: "<<endl;
        cin>>iid;
        fflush(stdin);
        cout<<"Ingrese nombre: "<<endl;
        getline(cin,inombre);
        fflush(stdin);
        cout<<"Ingrese nota: "<<endl;
        cin>>inota;

        try{
            db.open("colegio.txt",ios::app);
            db<<iid<<"\t"<<inombre<<"\t"<<inota<<endl;
        }
        catch(exception x){
             cout<<"Error";
             system("pause");
             
             
             
         }
         
}
        
         
         
         
