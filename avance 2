#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
#include <string.h>
#include <cstdlib>
using namespace std;
int main() {

	int opc = 0, des, i=0;
	float precio[100], prec_arts, iva=0;
	string compra[100], descripcion[100], arts, desc;
	bool d = true;
	do{
		system("color 03");
		printf("\t\t\t\t\t====BIENVENIDO====\n\t\t\t\t\t\n");
		printf("1.-Agregar articulo 2.-Modificar articulo\n3.-Eliminar articulo 4.-Lista de articulos\n5.- Total de compra 6.-limpiar pantalla 7.-salir\nQue desea realizar?: ");
		scanf_s("%d", &opc);
		system("cls");

		switch (opc) {
		case 1:
			/*printf("Cuantos articulos desea?: ");
			scanf_s("%d", &num_arts);

			for (int i = 0; i < num_arts; i++) {

				printf("Ingresa el articulo %d: ", i + 1);
				cin.ignore();
				getline(cin, compra[i]);

				printf("Ingresa el precio del articulo %d :", i + 1);
				scanf_s("%f", &precio[i]);
				
				printf("Ingresa descripcion articulo %d: ", i + 1);
				cin.ignore();
				getline(cin, descripcion[i]);
				system("cls");
			}*/
						
			while (d ==true){
			printf("Ingresa el articulo: ");
			cin.ignore();
			getline(cin, arts);
			compra[i] = arts;
			
			printf("Ingresa el precio del articulo: ");
			scanf_s("%f", &precio[i]);
			
			printf("Ingresa descripcion articulo:");
			cin.ignore();
			getline(cin, desc);
			descripcion[i] = desc;
			
			i++;
			d = false;
			}
			system("cls");
			
			break;
		
		case 4:
			for (int j = 0; j < i; j++) {
				printf("compra: %s precio: %f descripcion: %s\n", compra[j].c_str(), precio[j], descripcion[j].c_str());
			}
			break;
		case 5:
			printf("Total de compra: ");
			/*
			precio original
			precio iva
			total
			*/
			for (int j = 0; j < i; j++){
				printf("\ncompra: %s precio original: %f\n", compra[j].c_str(), precio[j]);
				iva += precio[j] * 0.16;
				printf("\ncompra: %s precio con iva: %f", compra[j].c_str(), iva);
			}
			printf("\ntotal %f : ", iva);
			break;
		default:
			break;
		}
		printf("Desea repetir? 0 -> si. 1-> no");
		scanf_s("%d", &des);
		system("cls");
		d = true;
	} while (des==0);
	

	system("pause");
}
