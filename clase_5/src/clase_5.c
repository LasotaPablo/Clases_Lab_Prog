/*
 ============================================================================
 Name        : clase_5.c
 Author      : Lasota_Pablo
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#define QTY_EMPLEADOS 10
int imprimeArrayInt(int array[],int limite);
int initArrayInt(int array[],int limite,int valor);
int getArrayInt(	int array[],
					int limite,
					char *mensaje,
					char *mensajeError,
					int minimo,
					int maximo,
					int reintentos);
int maximoArrayInt(int array[],int limite,int cantidaElementos,int *pResultado);
int minimoArrayInt(int array[],int limite,int cantidaElementos,int *pResultado);
int promedioArrayInt(int array[],int limite,int cantidaElementos,float *pResultado);
int getInt

int main(void)
{
	int edadesEmpleados[QTY_EMPLEADOS];
	int cantidadDatos;
	getArrayInt(edadesEmpleados,QTY_EMPLEADOS,"Edad?\n","Error",10,20,2);



}

int initArrayInt(int array[],int limite,int valor )
{
	int i;
	int retorno = -1;
	if(array != NULL && limite > 0)
	{
		retorno = 0;
		for(i=0;i<limite;i++)
		{
			array[i]=valor+i;
		}

	}
	return retorno;
}

int imprimeArrayInt(int array[],int limite )
{
	int i;
	int retorno = -1;
	if(array != NULL && limite > 0)
	{
		retorno = 0;
		for(i=0;i<limite;i++)
		{
			printf("%d\n",array[i]);
		}

	}
	return retorno;
}

int getArrayInt(int array[],
				int limite,
				char *mensaje,
				char *mensajeError,
				int minimo,
				int maximo,
				int reintentos)
{
	int i=0;
	int buffer;
	int retorno = -1;
	char respuesta ='n';
	if(array != NULL && limite > 0)
	{
		retorno = 0;

			do{
				if(getInt ( &buffer,
							mensaje,
							mensajeError,
							minimo,
							maximo,
							reintentos) == 0){
					array[i] = buffer;
					i++;
					limite--;
				}
				printf("Continuar? (s/n)");
				__fpurge(stdin);
				scanf("%c",&respuesta);
			}while(respuesta == 's' && limite > 0);
			retorno = i;
		}
		return retorno;
	}







