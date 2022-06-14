#include <stdio.h>
/*Este programa utiliza un algoritmo de búsqueda binaria para hallar los
elementos de un arreglo ingresados por el usuario*/
int main()
{
	int i, bajo, alto, medio, n, elem, array[100];
	printf("Ingrese el número de elementos(maximo 100)\n");
	scanf("%d",&n);
	printf("Ingrese %d enteros\n", n);
	for(i = 0; i < n; i++)
		scanf("%d",&array[i]);
	printf("Ingrese el valor a encontrar\n");
	scanf("%d", &elem);
	bajo = 0;
	alto = n - 1;
	medio = (bajo+alto)/2;
	while (bajo <= alto) {
		if(array[medio] < elem)
			bajo = medio + 1;
		else if (array[medio] == elem) {
			printf("%d encontrado en la posición %d\n", elem, medio+1);
			break;
		}
		else
				 alto = medio - 1;
		medio = (bajo + alto)/2;
	}
	if(bajo > alto)
		   printf("No encontrado! %d no está presente en el arreglo\n", elem);
	return 0;
}

