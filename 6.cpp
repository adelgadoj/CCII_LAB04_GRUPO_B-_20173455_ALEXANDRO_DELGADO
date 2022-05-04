// Nombre: Alexandro Delgado Justo
#include <iostream>
using namespace std;
void mostrar_matriz(int ma[3][3])
{
    cout << "*******MATRIZ*******" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << ma[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{

    int M[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Ingrese Numero: ";
            cin >> M[i][j];
        }
    }
    mostrar_matriz(M);
    int sum[3];
    for(int o = 0; o < 3 ; o++){
        sum[o]=0;
    }
    for (int k = 0; k < 3; k++)
    {
        for (int p = 0; p < 3; p++)
        {
                sum[k] = sum[k] + M[k][p];
        }
        cout<<"Suma Fila "<<k<<" :"<<sum[k]<<endl;
    }
    int mayor = sum[0];
    for(int r = 1 ; r < 3; r++){
        if( sum[r]>mayor){
            mayor = sum[r];
        }
    }
    cout<<"La suma mayor es: "<<mayor<<endl;
    return 0;
}