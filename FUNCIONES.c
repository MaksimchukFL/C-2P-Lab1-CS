#include <stdio.h>
/*Declaraci�n de una funci�n:
La funci�n, estando definida fuera del bloque main, la definimos para poder 
utilizarla:*/
int suma(int a,int b);

int main() {
	/*Llamada a una funci�n*/
	int a,b,resulsuma;
	printf("Ingrese a:");
	scanf("%d",&a);
	printf("\nIngrese b:");
	scanf("%d",&b);
	resulsuma=suma(a,b);
	printf("\nEl resultado de a+b es %d",resulsuma);
	return 0;
}


/*Definici�n de una funci�n:
<tipo de dato de retorno> <nombre de la funci�n>(<par�metros>)
*Los par�metros deben incluir el tipo de dato y van separados por comas
*No debe colocarse el punto y coma en el par�ntesis.
*Tambi�n podemos declarar m�todos con el uso de la palabra reservada void*/
int suma(int a,int b){
	int resultado;
	resultado=a+b;
	return resultado;
}

