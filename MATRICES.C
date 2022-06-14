#include <stdio.h>

int main(int argc, char *argv[]) {
	/*Una matriz de tipo entera o un arreglo de dos dimensiones se define como:
	int Matriz[i][j] siendo i el número de filas y y j el número de columnas.
	por ende tenemos, en C, la siguiente manera para inicializar una matriz:
	tipo nombrematriz[numerofilas][numerocolumnas]={listavalores}
	*Los elementos deben estar separados por comas
	En el ejemplo inicializaremos una matriz 5x3 que contendra los numeros de,
	uno al quince. Puede inicializarse de la otra manera por conveniencia*/
	int matriz1[5][3]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
	int matriz2[5][3]={{1,2,3},
					   {4,5,6},
					   {7,8,9},
					   {10,11,12},
					   {13,14,15}};
	/*Impresión de la matriz en pantalla:
	i y j son contadores correspondientes a las filas y columnas*/
	int i,j;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d\t", matriz1[i][j]);
		}
		printf("\n");
	}
	/*Ingreso de una matriz por teclado, siendo m el numero de filas y n el
	numero de columnas. Siempre deben estar presentes los contadores*/
	int m,n;
	int matrix[100][100];
	printf("Ingrese el numero de filas: ");
	scanf("%d", &m);
	printf("Ingrese el numero de columnas: ");
	scanf("%d", &n);
	
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("Ingrese datos en [%d][%d]: ", i, j);
			scanf("%d", &matrix[i][j]);
		}
	}
	
	//Imprimimos la misma matriz
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%d\t", matrix[i][j]);
		}
		printf("\n");
	}
	return 0;
}

