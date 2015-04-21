/*
 ============================================================================
 Name        : proyectoCaracola.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "nodo.h"

#define MAX_LENGTH_PROF	5
#define MAX_LENGTH_CL 10

int main(void) {
	char camino=0;
	int totalClientes = 0;

	Cliente * clientes;
	Profesor * profesores;

	clientes = (Cliente *) malloc (sizeof(Cliente) * MAX_LENGTH_CL);
	profesores = (Profesor *) malloc (sizeof(Profesor) * MAX_LENGTH_PROF);

	do{
		printf("\n");
		printf("Bienvenido a la autoescuela Caracola!!!");
		enunciado();
		camino=opcion();

		if(camino=='1'){
			totalClientes = enunciado2(totalClientes);
			registro(clientes, totalClientes);



		}

	}while(camino!='3');
	printf("Agur/Adios");

}
