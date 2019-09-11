/*
 ============================================================================
 Name        : CLASE0.c
 Author      : Pablo Lasota
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num, max=0, min=0;
	for(int i=0;i < 5;i++){
		printf("Ingrese un numero: ");
		scanf("%d\n",&num);
		if(num>max){
			max = num;
		}
		if(num<min){
			min = num;
		}
	}
	printf("El numero mas grande ingresado es: %d\n",max);
	printf("El numero mas chico ingresado es: %d",min);
	return 0;
}
