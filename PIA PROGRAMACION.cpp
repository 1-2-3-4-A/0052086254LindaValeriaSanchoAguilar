#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
#include <string.h>
#include <cstdlib>
#include <cmath>
#include <fstream>//archivos
#include<stdlib.h>// funcione new y delete punteros

using namespace std;


int buscarID = 0, o = 0, opc = 0, des = 0, i = 0, * idCont;
float precio[100], prec_arts, iva[100], * totalComp, tot = 0;
string compra[100], descripcion[100], arts, desc, clasif[100], clasifC, genero[100], gen;
bool d = true;
ofstream archivo;
void agregar(), eliminar(), buscarElem(), mostrar(), total(), CrArchivo(), menu();

int main() {
	menu();
	scanf_s("%d", &opc);
	system("cls");

	switch (opc) {
	case 1:
		agregar();
		return main();
		break;

	case 2:
		if (i == 0) {
			printf("No existen elementos aun");
			main();
		}
		else {
			eliminar();
		}
		return main();
		break;

	case 3:
		if (i == 0) {
			printf("No existen elementos aun");
			main();
		}
		else {
			mostrar();
		}
		return main();
		break;
	case 4:
		if (i < 1) {
			printf("No existen elementos aun");
			main();
		}
		else {
			total();
			return main();
		}
		break;
	case 5:
		system("cls");
		return main();
		break;
	case 6:
		system("cls");
		if (i < 1) {
			printf("No existen elementos aún");
		}
		else {
			buscarElem();
		}
		return main();

		break;
	case 7:
		if (i == 0) {
			exit(1);
		}
		else {
			CrArchivo();
			exit(1);
		}
		break;
	default:
		printf("Ingrese una opcion valida");
		return main();
	}

	system("pause");
}

void menu() {
	system("color 03");
	printf("\t\t\t\t\t====Bienvenido a Valkyrie====\n\t\t\t\t\t\n");
	printf("\t\t\t\tTu tienda de videojuegos favorita!!\n\t\t\t\t\n");
	printf("1.-Agregar articulo \n2.-Eliminar articulo 3.-Lista de articulos\n4.- Total de compra 5.-limpiar pantalla 6.- Buscar Elemento 7.-salir\nQue desea realizar?: ");
}

void agregar() {
	idCont = new int[i];
	totalComp = new float[i];

	srand(time(0));
	int n;
	do {

		while (d == true) {

			n = 10000 + rand() % 99999;

			idCont[i] = n;

			printf("ID DE COMPRA: %d ", idCont[i]);

			printf("\nIngresa el articulo: ");
			cin.ignore();
			getline(cin, arts);
			compra[i] = arts;

			printf("\nIngresa la clasificacion: ");
			cin.ignore();
			getline(cin, clasifC);
			clasif[i] = clasifC;

			printf("\nIngresa el genero: ");
			cin.ignore();
			getline(cin, gen);
			genero[i] = gen;

			printf("Ingresa el precio del articulo: ");
			scanf_s("%f", &precio[i]);

			printf("Ingresa descripcion articulo:");
			cin.ignore();
			getline(cin, desc);
			descripcion[i] = desc;
			iva[i] = precio[i] * 0.16;
			totalComp[i] = precio[i] + iva[i];
			i++;
			d = false;
		}
		system("cls");

		printf("Desea repetir? 1 -> si. 0-> no");
		scanf_s("%d", &des);
		system("cls");
		d = true;
	} while (des == 1);

}

void mostrar() {
	for (int j = 0; j < i; j++) {
		printf("%d ) ID Compra: %d Compra: %s Precio: %.2f IVA: %.2f Clasificacion: %s Genero: %s Descripcion: %s \n", j, idCont[j], compra[j].c_str(), precio[j], iva[j], clasif[j].c_str(), genero[j].c_str(), descripcion[j].c_str());
	}
}

void eliminar() {
	printf("Ingrese la posicion a eliminar: ");
	scanf_s("%d", &o);

	for (int j = o; j < i; j++) {
		idCont[j] = idCont[j + 1];
		compra[j] = compra[j + 1];
		clasif[j] = clasif[j + 1];
		genero[j] = genero[j + 1];
		descripcion[j] = descripcion[j + 1];
		precio[j] = precio[j + 1];
		totalComp[j] = totalComp[j + 1];
		iva[j] = iva[j + 1];
	}
	i--;
}

void total() {

	printf("Total de compra: ");

	for (int j = 0; j < i; j++) {
		printf("\nid contrato: %d\n compra: %s clasificacion: %s Genero: %s precio original: %.2f", idCont[j], compra[j].c_str(), clasif[j].c_str(), genero[j].c_str(), precio[j]);
		iva[j] = precio[j] * 0.16;
		printf("\ncompra: %s IVA: %.2f", compra[j].c_str(), iva[j]);
		tot = tot + totalComp[j];
	}
	printf("\ntotal con IVA %.2f : ", tot);
}

void buscarElem() {
	printf("ID's disponibles:\n ");
	for (int j = 0; j < i; j++) {
		printf("%d ) ID Compra: %d\n", j, idCont[j]);
	}
	printf("Buscar elemento por ID");
	scanf_s("%d", &buscarID);

	int indice = -1;

	for (int j = 0; j < idCont[i]; j++) {
		int posAct = idCont[j];
		if (posAct == buscarID) {
			printf("%d ) ID Compra: %d Compra: %s Precio: %.2f IVA: %.2f Clasificacion: %s Genero: %s Descripcion: %s \n", j, idCont[j], compra[j].c_str(), precio[j], iva[j], clasif[j].c_str(), genero[j].c_str(), descripcion[j].c_str());
			break;
		}

	}

}
void CrArchivo() {


	string ticket;
	ticket = "LISTASOC";
	archivo.open(ticket.c_str(), ios::out);

	if (archivo.fail()) {
		printf("No se pudo crear el archivo");
		system("pause");
		exit(1);
	}

	archivo << "ID contrato: " << "\t";
	archivo << "Compra: " << "\t";
	archivo << "Clasificación: " << "\t";
	archivo << "Genero: " << "\t";
	archivo << "Descripcion del producto: ";
	archivo << "precio sin iva: " << "\t";
	archivo << "precio con iva: " << "\t";
	archivo << "IVA: " << "\t";
	archivo << "Total: " << "\t";

	for (int j = 0; j < i; j++) {
		archivo << idCont[j] << "\t" << "\t";
		archivo << compra[j] << "\t" << "\t";
		archivo << clasif[j] << "\t" << "\t";
		archivo << genero[j] << "\t" << "\t";
		archivo << descripcion[j] << "\t" << "\t";
		archivo << precio[j] << "\t" << "\t";
		archivo << totalComp[j] << "\t" << "\t";
		archivo << iva[j] << "\t" << "\t";
	}
	archivo << tot << "\t" << "\t";

	archivo.close();
}