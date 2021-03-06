#include <stdio.h>
#include "nodo.h"
#define MAX_LENGTH_CL 20


void enunciadoCliente(){ //Esta funci�n utilizamos despu�s de que se registre un cliente, para darle la bienvenida

	printf("Bienvenido, nuevo cliente\n");

}

void enunciadoProfesor(){ // Hacemos lo mismo para profesor
	printf("Bienvenido, nuevo profesor\n");
}

void registroClientes(Cliente * clientes, int totalClientes){ // Pedimos que introduzca los datos por teclado y los almacenamos en el array de clientes
	char strNom[MAX_LENGTH_CL];
	char tempStr[MAX_LENGTH_CL];
	int dni;


	printf("Introduce tu nombre:\n");
	fgets(strNom,20,stdin);
	sscanf(strNom, "%s", tempStr);
	clear_if_needed(strNom);
	clientes[totalClientes-1].nombre = (char *) malloc (sizeof(char) * (strlen(tempStr) + 1));
	strcpy(clientes[totalClientes-1].nombre, tempStr);


	printf("Introduce tu apellido:\n");
	fgets(strNom,20,stdin);
	sscanf(strNom, "%s", tempStr);
	clear_if_needed(strNom);
	clientes[totalClientes-1].apellido = (char *) malloc (sizeof(char) * (strlen(tempStr) + 1));
	strcpy(clientes[totalClientes-1].apellido, tempStr);



	printf("Introduce tu DNI (solo numeros):\n");
	fgets(strNom,9,stdin);
	sscanf(strNom,"%d", &dni);
	clear_if_needed(strNom);
	clientes[totalClientes-1].dni = dni;


	printf("Introduce tu contrase�a:\n");
	fgets(strNom,20,stdin);
	sscanf(strNom, "%s", tempStr);
	clear_if_needed(strNom);
	clientes[totalClientes-1].clave = (char *) malloc (sizeof(char) * (strlen(tempStr) + 1));
	strcpy(clientes[totalClientes-1].clave, tempStr);


	printf("Introduce tu telefono (solo numeros):\n");
	fgets(strNom, 10, stdin);
	sscanf(strNom, "%d", &dni);
	clear_if_needed(strNom);
	clientes[totalClientes-1].telefono =dni;

	printf("Cliente registrado!\n");

}

void registroProfesores(Profesor * profesores, int totalProfesores){ // Hacemos lo mismo con profesores y lo guardamos en el respectivo array
	char strNom[MAX_LENGTH_CL];
	char tempStr[MAX_LENGTH_CL];
	int dni;

	printf("Introduce tu nombre:\n");
	fgets(strNom,20,stdin);
	sscanf(strNom, "%s", tempStr);
	clear_if_needed(strNom);
	profesores[totalProfesores-1].nombre = (char *) malloc (sizeof(char) * (strlen(tempStr) + 1));
	strcpy(profesores[totalProfesores-1].nombre, tempStr);


	printf("Introduce tu apellido:\n");
	fgets(strNom,20,stdin);
	sscanf(strNom, "%s", tempStr);
	clear_if_needed(strNom);
	profesores[totalProfesores-1].apellido = (char *) malloc (sizeof(char) * (strlen(tempStr) + 1));
	strcpy(profesores[totalProfesores-1].apellido, tempStr);

	printf("Introduce tu DNI:\n");
	fgets(strNom,9,stdin);
	sscanf(strNom,"%d", &dni);
	clear_if_needed(strNom);
	profesores[totalProfesores-1].dni = dni;


	printf("Introduce tu contrase�a:\n");
	fgets(strNom,20,stdin);
	sscanf(strNom, "%s", tempStr);
	clear_if_needed(strNom);
	profesores[totalProfesores-1].clave = (char *) malloc (sizeof(char) * (strlen(tempStr) + 1));
	strcpy(profesores[totalProfesores-1].clave, tempStr);


	printf("Introduce tu telefono:\n");
	fgets(strNom, 10, stdin);
	sscanf(strNom, "%d", &dni);
	clear_if_needed(strNom);
	profesores[totalProfesores-1].telefono =dni;


	printf("Introduce tus a�os de experiencia:\n");
	fgets(strNom, 4, stdin);
	sscanf(strNom, "%d", &dni);
	clear_if_needed(strNom);
	profesores[totalProfesores-1].exp=dni;

	printf("Profesor registrado!\n");


}


void clear_if_needed(char *str) // Funcion para vaciar el buffer de la consola
{
	if (str[strlen(str) - 1] != '\n')
	{
		int c;
    	while ( (c = getchar()) != EOF && c != '\n');
    }
}
