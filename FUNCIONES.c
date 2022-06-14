#include <stdio.h>
/*Declaración de una función:
La función, estando definida fuera del bloque main, la definimos para poder 
utilizarla:*/
int suma(int a,int b);

int main() {
	/*Llamada a una función*/
	int a,b,resulsuma;
	printf("Ingrese a:");
	scanf("%d",&a);
	printf("\nIngrese b:");
	scanf("%d",&b);
	resulsuma=suma(a,b);
	printf("\nEl resultado de a+b es %d",resulsuma);
	return 0;
}


/*Definición de una función:
<tipo de dato de retorno> <nombre de la función>(<parámetros>)
*Los parámetros deben incluir el tipo de dato y van separados por comas
*No debe colocarse el punto y coma en el paréntesis.
*También podemos declarar métodos con el uso de la palabra reservada void*/
int suma(int a,int b){
	int resultado;
	resultado=a+b;
	return resultado;
}

