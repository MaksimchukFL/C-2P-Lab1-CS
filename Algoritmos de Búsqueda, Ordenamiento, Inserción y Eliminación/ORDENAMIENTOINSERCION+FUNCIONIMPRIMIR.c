#include <math.h> 
#include <stdio.h>   
//Funciòn que realiza un ordenamiento por inserción
void insercion(int array[], int n) 
{ 
	int i, element, j; 
	for (i = 1; i < n; i++) { element = array[i]; j = i - 1; while (j >= 0 && array[j] > element) { 
		array[j + 1] = array[j]; 
		j = j - 1; 
	} 
	array[j + 1] = element; 
	} 
}   
//Funcion que imprime los elementos de un arreglo
void imprimirArreglo(int array[], int n) 
{ 
	int i; 
	for (i = 0; i < n; i++) 
		printf("%d ", array[i]); 
}  
// Main 
int main() 
{ 
	int array[] = { 122, 17, 93, 3, 56, }; 
	int n = sizeof(array) / sizeof(array[0]); 
	insercion(array, n); 
	imprimirArreglo(array, n); 
	return 0; 
}
