#include <iostream>
#include <conio.h>
#include <string.h>
#include <string>

using namespace std;

int main()
{
    int opc, art1, num1, tipo1;
    float total, preciounitario, IVA;
    string articulo,descripcion,categoria;

    cout << "\t -- VIDEOJUEGOS VALKIRYE --\n";

    cout << "1.-Agregar articulo\n 2.-Modificar articulo\n 3.-Eliminar articulo\n 4.-Lista de articulos\n 5.- Total de compra\n 6.-limpiar pantalla\n 7.-salir\n";
    cin >> opc;

    switch (opc)
    {
    case 1:

        cout << "\t  Agregar articulo \n";

        cout << "Ingrese los nombres de los articulos \n";
        cin.ignore();
        getline(cin, articulo);
        
        cout << "Ingrese los numeros de los articulos\n";
        cin >> num1 ;

        cout << "ingrese el tipo de articulo\n";
        cout << "1.-videojuego\n 2.-control\n 3.-otro\n";
        cin >> tipo1;

        cout << "Ingrese la descripcion del o los articulos\n";
        cin.ignore();
        getline(cin, descripcion);
       
        cout << "ingrese la categoria del articulo\n";
        cin.ignore();
        getline(cin, categoria);


        return main();

        break;

    case 2:

        break;

    case 3:

        break;

    case 4:

        cout << "\t Lista de articulos \n";

        cout << "Los artículos en lista son:" <<articulo << endl;
        cout << "Numero de articulo:" << num1 << endl; 
        cout << "Tipo:" << tipo1 << endl; 
        cout << "Descripcion:" << descripcion << endl;
        cout << "Categoria:" << categoria << endl;
        
        
        break;

    case 5:

        cout << "\t Total de compra  \n";
        
        cout << "ingrese el precio unitario del articulo\n";
        cin >> preciounitario;
        
        IVA= preciounitario*.16;
        
        total= IVA+preciounitario;
        
        cout<<"el IVA de su compra es:"<<IVA<<endl;
        cout<<"el total de su compra es:"<<total<<endl;

        break;

    case 6:

        system("cls");
        return main();
        break;

        break;

    case 7:

        cout << "Gracias por utilizar el programa \n";

        break;

    default:
        cout << "ingrese una opcion correcta \n";
        return main();

    }


    



}



