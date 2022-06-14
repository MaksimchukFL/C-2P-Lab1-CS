/*Este programa elimina un elemento espec�fico de un arreglo. */  
#include <stdio.h>  
#include <conio.h>  

int main ()  
{  
	// Declaraci�n de las variables de tipo entero 
	int arr[50];  
	int pos, i, num; 
	printf (" \n Ingrese el n�mero de elementos del arreglo(max50): \n ");  
	scanf (" %d", &num);  
	
	printf (" \n Ingrese %d elementos en el arreglo: \n ", num);  
	
	//Utilizamos el bucle for para ingresar cada elemento del arreglo
	for (i = 0; i < num; i++ )  
	{   printf (" arr[%d] = ", i);  
	scanf (" %d", &arr[i]);  
	}  
	
	//Ingreso de la posici�n a ser elmininada
	printf( " Ingrese la posici�n del elemento del arreglo que quiere eliminar: \n ");  
	scanf (" %d", &pos);  
	
	//Esto es un chequeo de si la eliminaci�n es posible
	if (pos >= num+1)  
	{  
		printf (" \n No es posible realizar la eliminaci�n.");  
	}  
	else  
	{  
		//Usamos el bucle for para eliminar el elemento y actualizar el �ndice
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

