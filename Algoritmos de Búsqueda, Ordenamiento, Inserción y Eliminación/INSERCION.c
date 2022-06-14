#include <stdio.h>
/*Este programa inserta un elemento en un arreglo creado por el usuario.
Siempre se debe tener en cuenta la cantidad maxima de elementos del arreglo*/
int main()
{
	int arr[50], posicion, c, n, valor;
	
	printf("Ingrese el numero de elementos en el arreglo (max 50)\n");
	scanf("%d", &n);
	
	printf("Ingrese %d elementos\n", n);
	
	for (c = 0; c < n; c++)    
		scanf("%d", &arr[c]);
	
	printf("Ingrese la posición donde quiere ingresar el nuevo elemento\n");
	scanf("%d", &posicion);
	
	printf("Ingrese el valor\n");
	scanf("%d", &valor);
	
	for (c = n - 1; c >= posicion - 1; c--)    
		arr[c+1] = arr[c];
	
	arr[posicion-1] = valor;
	
	printf("El arreglo resultante es:\n");
	
	for (c = 0; c <= n; c++)    
		printf("%d\n", arr[c]);    
	
	return 0;
}
