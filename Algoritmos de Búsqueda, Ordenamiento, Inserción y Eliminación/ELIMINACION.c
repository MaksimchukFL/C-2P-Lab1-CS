/*Este programa elimina un elemento especìfico de un arreglo. */  
#include <stdio.h>  
#include <conio.h>  

int main ()  
{  
	// Declaración de las variables de tipo entero 
	int arr[50];  
	int pos, i, num; 
	printf (" \n Ingrese el número de elementos del arreglo(max50): \n ");  
	scanf (" %d", &num);  
	
	printf (" \n Ingrese %d elementos en el arreglo: \n ", num);  
	
	//Utilizamos el bucle for para ingresar cada elemento del arreglo
	for (i = 0; i < num; i++ )  
	{   printf (" arr[%d] = ", i);  
	scanf (" %d", &arr[i]);  
	}  
	
	//Ingreso de la posiciòn a ser elmininada
	printf( " Ingrese la posición del elemento del arreglo que quiere eliminar: \n ");  
	scanf (" %d", &pos);  
	
	//Esto es un chequeo de si la eliminación es posible
	if (pos >= num+1)  
	{  
		printf (" \n No es posible realizar la eliminación.");  
	}  
	else  
	{  
		//Usamos el bucle for para eliminar el elemento y actualizar el índice
		for (i = pos - 1; i < num -1; i++)  
		{  
			arr[i] = arr[i+1]; // Asigna arr[i+1] a arr[i]  
		}  
		
		printf (" \n El arreglo resultante es: \n");  
		
		//Mostramos el arreglo final  
		for (i = 0; i< num - 1; i++)  
		{  
			printf (" arr[%d] = ", i);  
			printf (" %d \n", arr[i]);  
		}  
	}  
	return 0;  
}  

