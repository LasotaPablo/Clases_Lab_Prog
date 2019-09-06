/*
 ============================================================================
 Name        : Clase_06.c
 Author      : Lasota_Pablo
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{

}
int getString(	int *pResultado,
			char *pMensaje,
			char *pMensajeError,
			int minimo,
			int maximo,
			int reintentos)
{
	int retorno = -1;
	char buffer[4096];
	do
	{
		printf("%s",pMensaje);
		__fpurge(stdin);
		fgets(buffer,sizeof(buffer),stdin);
		buffer[strlen(buffer)-1] = '\0'; //Descarta el enter el salto de linea que genera el enter
		if(strlen(buffer) >= minimo && strlen (buffer) <= maximo)
		{
			*pResultado = *buffer
			strncpy(pResultado,buffer,maximo+1);
		}
		printf("%s",pMensajeError);
		reintentos--;
	}while(reintentos >= 0);
	return retorno;
}
