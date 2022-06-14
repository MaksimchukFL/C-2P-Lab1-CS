#include <stdio.h>
int main() {
	/*Inicialización de un array unidimensional:
	tipo nombre[tamaño]={lista};
	*Los elementos del arreglo deben estar separados por comas.
	*El ìndice correspondiente a cada posición empieza a contarse desde el 0.*/
	int arr[7]={3,5,7,-2,0,1,4};
	//Mostrar un solo elemento del arreglo
	printf("El primer elemento del arreglo es: %d",arr[0]);
	//Mostrar todos los elementos del arreglo:
	int i;
	printf("\nTodos los elementos del arreglo son:");
	for(i=0;i<7;i++){
		printf("\nDigito %d:%d",i,arr[i]);
	}
	//Podemos cargar elementos a un arreglo vacìo utilizando repetitivas:
	int arr2[5];
	int j;
	for(j=0;j<5;j++){
		printf("\nIngrese el elemento %d:",j);
		scanf("%d",&arr2[j]);
	}
	//Y ahora los mostramos
	printf("\nTodos los elementos del nuevo arreglo son:");
	for(j=0;j<5;j++){
		printf("\nDigito %d:%d",j,arr2[j]);
	}
	return 0;
}

