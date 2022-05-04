//Nombre:Alexandro Delgado
#include <iostream>
using namespace std;
bool busqueda(int num, int A[8]){
    for (int i = 0; i < 8; i++)
    {
        if (num == A[i]){
            return true;
        }
    }
    return false;
}

int main()
{
    int arreglo[8];
    int n;
    for (int  j = 0; j < 8; j++)
    {
        cout<<"Ingrese Numero [ "<<j+1<<" ]: ";
        cin>>arreglo[j];
    }
    cout<<"QUE NUMERO QUIERE BUSCAR? ";
    cin>>n;
    if(busqueda(n,arreglo)){
        cout<<"SI ESTA!!";
    }
    else{
        cout<<"NO SE ENCONTRO! :C";
    }
    return 0;
}