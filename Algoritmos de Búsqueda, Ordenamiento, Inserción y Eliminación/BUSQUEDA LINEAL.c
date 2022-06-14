#include<stdio.h>
//Este programa utiliza un algoritmo de búsqueda lineal.
int main()
{
	int a[20],i,x,n;
	printf("Ingrese los elementos del arreglo(maximo 20):");
	scanf("%d",&n);
	
	printf("Ingrese los elementos del arreglo:\n");
	for(i=0;i<n;++i)
		scanf("%d",&a[i]);
	
	printf("\nIngrese el elemento a buscar:");
	scanf("%d",&x);
	
	for(i=0;i<n;++i)
		if(a[i]==x)
		break;
	
	if(i<n)
		printf("Elemento encontrado en el índice %d",i);
	else
		printf("Elemento no encontrado");
	
	return 0;
}
