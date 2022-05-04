//Nombre: Alexandro Delgado Justo
#include <iostream>
using namespace std;
int main(){
    string nombres[3];
    string apellidos[3];
    string edades[3];
    string dni[3];
    for(int i=0 ; i<3 ; i++){
        cout<<"DATOS PERSONA "<<i+1<<":"<<endl;
        cout<<"NOMBRE: ";
        cin>>nombres[i];
        cout<<"APELLIDO: ";
        cin>>apellidos[i];
        cout<<"EDAD: ";
        cin>>edades[i];
        cout<<"DNI: ";
        cin>>dni[i];
    }
    cout << "#### MOSTRANDO DATOS ####"<<endl;
    for(int i=0 ; i<3 ; i++){
        cout << "DATOS PERSONA " << i+1 << endl;
        cout << "NOMBRE: "<< nombres[i]<< endl;
        cout << "APELLIDO: "<< apellidos[i]<< endl;
        cout << "EDAD: "<< edades[i]<< endl;
        cout << "DNI: "<< dni[i] << endl;
        cout << endl;
    }
    return 0;
}