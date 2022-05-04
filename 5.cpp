// Nombre: Alexandro Delgado Justo
#include <iostream> 
using namespace std;
class producto
{
private:
    string nombre;
    float precio;
    int stock;
public:
    void nuevo();
    string getNombre();
    void setStock();
    void setPrecio();
};

void producto::nuevo()
{
    string n; 
    float p; 
    int s; 
    cout << "Nombre Producto: ";
    cin >> n;
    nombre = n;
    cout<<"Precio del Producto: "; cin>>p;
    precio = p;
    cout<<"Stock: "; cin>>s;
    stock = s;
}
string producto::getNombre(){
    return nombre;
}
void producto::setStock()
{
    int s;
    cout<<"Ingrese Stock: ";
    cin>>s;
    stock = s;
}
void producto::setPrecio()
{
    int p;
    cout << "Ingrese Precio: ";
    cin >> p;
    stock = p;
}

void buscar(string nom , producto t[10]){
    bool res = false;
    for(int i = 0 ; i<10 ; i++){
        if(t[i].getNombre() == nom){
            cout<<"Lo encontre!!"<<endl;
            res = true;
        }
    }
    if(res == false )
    cout<<"No existe!!"<<endl;
    
}
void modificar(string nom, producto t[10])
{
    bool res = false;
    for (int i = 0; i < 10; i++)
    {
        if (t[i].getNombre() == nom)
        {
            t[i].setStock();
            t[i].setPrecio();
            res = true;
        }
    }
    if (res == false)
        cout << "No existe el producto!!" << endl;
}
int main(){
    int cont = 0;
    int r;
    string nombre;
    producto tienda[10];
    while (true)
    {
        cout<<"Inventario Tienda"<<endl;
        cout<<"1)Ingresar Producto Nuevo"<<endl;
        cout<<"2)Buscar Producto por Nombre"<<endl;
        cout<<"3)Modificar Stock & precio de producto"<<endl;
        cout<<"0)SALIR"<<endl;
        cout<<"Opcion: "; cin>>r;
        switch (r)
        {
        case 0:
            exit(1);
            break;
        case 1:
            tienda[cont].nuevo();
            cont++;
            break;
        case 2:
            cout<<"Ingresar Nombre de Producto: "; cin>>nombre;
            buscar(nombre, tienda);
            break;
        case 3:
            cout << "Ingresar Nombre de Producto: ";
            cin >> nombre;
            modificar(nombre, tienda);
            break;
        default:
            break;
    }
    }

    return 0;
}