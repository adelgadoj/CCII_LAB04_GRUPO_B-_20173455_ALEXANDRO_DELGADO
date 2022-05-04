// Nombre: Alexandro Delgado Justo
#include <iostream>
using namespace std;
bool primo(int num)
{
    if (num == 0 || num == 1 || num == 4)
        return false;
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}
int main(){
    int prim[25];
    int cont = 0;
    for(int i = 1; i < 100 ; i++){
        if(primo(i)){
            prim[cont] = i; 
            cont ++;
        }
    }
    for(int j = 24; j >= 0; j--){
        cout << prim[j] <<" ";
    }
    return 0;
}