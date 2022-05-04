// Nombre: Alexandro Delgado Justo
#include <iostream>
using namespace std;
void mostrar_matriz(int ma[5][3]){
    cout << "*******MATRIZ*******"<<endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << ma[i][j] <<" ";
        }
        cout<<endl;
    }
}
int main(){
    
    int M[5][3];
    for (int i = 0; i < 5 ; i++){
        for( int j = 0 ; j < 3 ; j++){
            cout<<"Ingrese Numero: ";
            cin>>M[i][j];
        }
    }
    mostrar_matriz(M);
    int sum = 0;
    for (int k = 0; k < 5; k++)
    {
        for (int p = 0; p < 3; p++)
        {
            if(k % 2 != 0 && k != 0){
                sum = sum + M[k][p];
            }
            
        }
        if (sum > 0)
        {
            cout << "Suma Fila " << k+1 << " = " << sum << endl;
        }
        sum = 0;
    }
    return 0;
}